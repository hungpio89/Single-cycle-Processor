/* verilator lint_off UNOPTFLAT */
module singlecycle				(
// Input and output	
	input logic	[31 : 0]	io_sw_i,
	input				clk_i, 
	input				rst_ni,
	
	output		[31 : 0]	pc_debug_o,
	output logic	[31 : 0] 	io_lcd_o,
	output logic	[31 : 0] 	io_ledg_o,
	output logic	[31 : 0] 	io_ledr_o,
	output logic	[31 : 0] 	io_hex0_o,
	output logic	[31 : 0] 	io_hex1_o,
	output logic	[31 : 0] 	io_hex2_o,
	output logic	[31 : 0]	io_hex3_o,
	output logic	[31 : 0] 	io_hex4_o,
	output logic	[31 : 0] 	io_hex5_o,
	output logic	[31 : 0]	io_hex6_o,
	output logic	[31 : 0] 	io_hex7_o	
);
	// Local declaration
	logic				br_sel;
	logic				rd_wren;
	logic				br_unsigned;
	logic		[1 : 0]		op_a_sel; 
	logic				op_b_sel; 
	logic				mem_wren; 
	logic				br_eq;
        logic				br_lt;
	logic 		[ 4 : 0]	immsel;
	logic		[ 3 : 0]	alu_op;
	logic		[ 1 : 0]	wb_sel;
	logic		[31 : 0]	inst;

	logic                           sb_en;
        logic                           sh_en;
	logic                           sw_en;
        logic                           lb_en;
        logic                           lh_en;
        logic                           lbu_en;
        logic                           lhu_en;
	logic                           lw_en;

	wire _unused_ok = &{1'b0, inst[31], inst[29:15], inst[11:7]};

// Datapath of the processor
r32v_datapath		datapath_inst	(
						.clk_i			(clk_i),
						.rst_ni			(rst_ni),
	
	// Input from the control unit
	// For PC
						.br_sel			(br_sel),
	// For regile
						.rd_wren		(rd_wren),			// Enable for write data into the regfile
	// For Branch comparator
						.br_unsigned		(br_unsigned),

	// For imm generation
						.immsel			(immsel),
	
	// For ALU
						.op_a_sel		(op_a_sel),
						.op_b_sel		(op_b_sel),
						.alu_op			(alu_op),
	
	// For LSU
						.mem_wren		(mem_wren),
						.sw			(io_sw_i),	// Input switch from the kit
						.wb_sel			(wb_sel),
					        .sb_en                  (sb_en),
                                                .sh_en                  (sh_en),
						.sw_en                  (sw_en),
                                                .lb_en                  (lb_en),
                                                .lh_en                  (lh_en),
                                                .lbu_en                 (lbu_en),
						.lhu_en                 (lhu_en),
						.lw_en                  (lw_en),	
	
// Output 
						.pc_debug		(pc_debug_o),	// 11 bit (2KB) address PC for debug
						.inst			(inst),		// Instruction from the IMEM
						.br_lt			(br_lt), 
						.br_eq			(br_eq),	// Output from the BRC
	
	// Output from LSU
						.io_lcd			(io_lcd_o),
						.io_ledg		(io_ledg_o),
						.io_ledr		(io_ledr_o),
	
						.io_hex0		(io_hex0_o),
						.io_hex1		(io_hex1_o),
						.io_hex2		(io_hex2_o),
						.io_hex3		(io_hex3_o),
						.io_hex4		(io_hex4_o),
						.io_hex5		(io_hex5_o),
						.io_hex6		(io_hex6_o),
						.io_hex7		(io_hex7_o)
);

logic [10:0] inst_i;
assign inst_i = {inst[30], inst[14:12], inst[6:0]};
// Control unit of the processor
ctrl_unit			ctr_inst			(
						.inst			(inst_i),
						.br_eq			(br_eq), 
						.br_lt			(br_lt),
	
	
	// Output 
						.pc_sel			(br_sel),		// 0 Select PC + 4, 1 select PC + imm
						.imm_sel		(immsel),		// Select the immediate for R, I, S, B, J
						.br_unsigned		(br_unsigned),	// 1 if the two operands are unsigned.
						.op_a_sel		(op_a_sel),	// Select operand A source: 0 if rs1, 1 if PC
						.op_b_sel		(op_b_sel),	// Select operand B source: 0 if rs2, 1 if imm
						.alu_op			(alu_op),	// Option for alu
						.mem_wren		(mem_wren),	// Write data into the LSU, 1: write, 0: read
						.rd_wren		(rd_wren),	// Write data into the regfile 
						.wb_sel			(wb_sel),	// 00: load_data, 01: alu_data, 10: pc + 4
						.sb_en			(sb_en),
                                                .sh_en                  (sh_en),
						.sw_en                  (sw_en),
                                                .lb_en                  (lb_en),
                                                .lh_en                  (lh_en),
                                                .lbu_en                 (lbu_en),
                                                .lhu_en                 (lhu_en),
						.lw_en                  (lw_en)
);

endmodule

