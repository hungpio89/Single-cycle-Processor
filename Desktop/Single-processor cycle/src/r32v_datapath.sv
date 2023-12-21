/* verilator lint_off UNOPTFLAT */
module r32v_datapath (
// Input and output 
// Input 
	input logic				clk_i,
	input logic 				rst_ni,
	
	// Input from the control unit
	// For PC
	input logic				br_sel,
	// For regile
	input logic				rd_wren,		// Enable for write data into the regfile
	// For Branch comparator
	input logic				br_unsigned,

	// For imm generation
	input 			[4 : 0] 	immsel,
	
	// For ALU
	input logic 		[1 : 0]		op_a_sel,
	input logic				op_b_sel,
	input logic		[3 : 0]		alu_op,
	
	// For LSU
	input logic 				mem_wren,		// st_en in LSU, 1 is store, 0 is write
	input logic		[31 : 0]	sw,			// Input switch from the kit
	input logic 		[1  : 0]	wb_sel, 

  	input logic            			sb_en,
  	input logic            			sh_en,
	input logic                             sw_en,
	
  	input logic            			lb_en,
  	input logic            			lh_en,
  	input logic            			lbu_en,
  	input logic            			lhu_en,
	input logic                             lw_en,
// Output 
	output logic		[31 : 0]	pc_debug,		// 11 bit (2KB) address PC for debug
	output logic		[31 : 0]	inst,			// Instruction path needs from the IMEM
	output logic				br_lt, br_eq,		// Output from the BRC
	
	// Output from LSU
	output logic		[31 : 0] 	io_lcd,
	output logic		[31 : 0] 	io_ledg,
	output logic		[31 : 0] 	io_ledr,
	
	output logic		[31 : 0] 	io_hex0,
	output logic		[31 : 0] 	io_hex1,
	output logic		[31 : 0] 	io_hex2,
	output logic		[31 : 0] 	io_hex3,
	output logic		[31 : 0] 	io_hex4,
	output logic		[31 : 0] 	io_hex5,
	output logic		[31 : 0] 	io_hex6,
	output logic		[31 : 0] 	io_hex7
);
// Local declaration
	// For PC counter
	logic 			[31 : 0]		nxt_pc, pc_imm, pc;
	logic			[31 : 0]		pc_four;
	
	// For regfile
	logic			[ 4 : 0]		rs1_addr, rs2_addr, rd_addr; 
	logic			[31 : 0]		rd_data, rs1_data, rs2_data;
	logic			[24 : 0]		inst_imm;
	
	assign 			rs2_addr 		= inst[24 : 20];
	assign 			rs1_addr 		= inst[19 : 15];
	assign 			rd_addr 		= inst[11 : 7];
	assign			inst_imm		= inst[31 : 7];

	assign			rd_data			= wb_data;

	// Immediate generator
	logic 			[31 : 0]		imm_value;
	

	// For ALU
	logic			[31 : 0]		alu_data;
	logic			[31 : 0]		operand_a, operand_b;
	
	// For LSU
	logic			[31 : 0]		ld_data;
	//logic			[ 5 : 0]		addr_i;
	
	// For Select load_data, pc_four and alu_data
	logic			[31 : 0]		wb_data;
	
	assign			pc_debug		= pc;
	assign			pc_imm			= alu_data;
	

// Components in the datapath
	// PC generate component
		// PC component
D_FF_32bit			PC_inst			(
							.D			(nxt_pc),
							.clk			(clk_i),
							.rst_ni			(rst_ni),
							.Q			(pc)
);

		// Generating pc_four
adder_32bit 			FA_inst			(
							.a			(pc),
							.b			(32'b0100),       
							.cin			(1'b0),           
							.s			(pc_four)      
);

		// Select br_sel
mux2to1_32bit			Mux_br_sel			(
							.a			(pc_four),
							.b			(pc_imm),
							.sel			(br_sel),
							.s			(nxt_pc)
);


	// Instruction memory (IMEM) component
imem				imem_inst		(
							.addr				(pc),
					
							.inst				(inst)
);



	// Regfile component 
regfile				regfile_inst	(
							.clk_i			(clk_i),	// positive clock.
							.rst_ni			(rst_ni),	// low negative reset
							.rs1_addr		(rs1_addr),
							.rs2_addr		(rs2_addr),
							.rd_addr		(rd_addr),
							.rd_data		(rd_data),
							.rd_wren		(rd_wren),
							
							.rs1_data		(rs1_data),
							.rs2_data		(rs2_data)
);

	// Immediate generation
imm_gen				imm_inst			(
							.inst			(inst_imm),
							.immsel			(immsel),
							.imm			(imm_value)

);

	// Branch comparator
branch_comparator		brc_inst			(
							.rs1_data		(rs1_data[31:0]),
							.rs2_data		(rs2_data[31:0]),
							.br_unsigned		(br_unsigned),
							
							.br_less		(br_lt),
							.br_equal		(br_eq)
);

	// ALU and select operands 
mux3to1_32bit			select_a_inst	(
							.a0			(rs1_data),
							.a1			(pc),
							.a2			(32'b0),
							.sel			(op_a_sel),	// 01 is PC select, 00 is rs1_data, 11 and 10 is 0
							
							.s			(operand_a)
);
mux2to1_32bit			select_b_inst	(
							.a			(rs2_data),
							.b			(imm_value),
							.sel			(op_b_sel),	// 1 is imm select, 0 is rs2_data
							
							.s			(operand_b)
);

alu_component			alu_inst			(
							.operand_a		(operand_a),
							.operand_b		(operand_b),
							.alu_op			(alu_op),
					
							.alu_data		(alu_data)
);


//assign addr_i = {alu_data[11], alu_data[8:4]};
	//LSU component
dmem				dmem_inst		(
							.clk_i			(clk_i),	// positive clock.
							.rst_ni			(rst_ni),	// low negative reset
							.addr			(alu_data),	// the address for both read and write
							.st_data		(rs2_data),	// the store data
							.st_en			(mem_wren),	// 1 if write, 0 if read.
							.io_sw			(sw),		// 32-bit from switches
							.sb_en                  (sb_en),
                                                	.sh_en                  (sh_en),
							.sw_en                  (sw_en),
                                                	.lb_en                  (lb_en),
                                                	.lh_en                  (lh_en),
                                                	.lbu_en                 (lbu_en),
                                                	.lhu_en                 (lhu_en),
							.lw_en                  (lw_en),	
							.ld_data		(ld_data),	// the load data.
							.io_lcd			(io_lcd),	// 32-bit data to drive LCD.
							.io_ledg		(io_ledg),	// 32-bit data to drive green LEDs.
							.io_ledr		(io_ledr),	// 32-bit data to drive red LEDs.
							.io_hex0		(io_hex0),	// 32-bit data to drive 7-segment LEDs.
							.io_hex1		(io_hex1),
							.io_hex2		(io_hex2),
							.io_hex3		(io_hex3),
							.io_hex4		(io_hex4),
							.io_hex5		(io_hex5),
							.io_hex6		(io_hex6),
							.io_hex7		(io_hex7)
);

	// Select data: pc_four, alu_data and ld_data into the regfile
mux3to1_32bit			select_inst		(
							.a0			(ld_data),
							.a1			(alu_data),
							.a2			(pc_four),
							.sel			(wb_sel),			
	
							.s			(wb_data)
);
endmodule
