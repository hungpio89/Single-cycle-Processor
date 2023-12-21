module wrapper (
  // inputs
  input  logic [16:0] SW,
  input  logic        CLOCK_50,
  // outputs
  output logic [16:0] LEDR,
  output logic [7 :0] LEDG,

  output logic [6 :0] HEX0,
  output logic [6 :0] HEX1,
  output logic [6 :0] HEX2,
  output logic [6 :0] HEX3,
  output logic [6 :0] HEX4,
  output logic [6 :0] HEX5,
  output logic [6 :0] HEX7,

  output logic [7 :0] LCD_DATA,
  output logic 	      LCD_RW,
  output logic        LCD_EN,
  output logic        LCD_RS,
  output logic        LCD_ON
);

	logic 	      pc_debug;

  r32v dut 	(
	  .io_sw_i	({15'b0, SW[15 : 0]}),
	  .clk_i	(CLOCK_50),
	  .rst_i	(SW[16]),

	  .pc_debug_o	(pc_debug),
	  .io_lcd_o	({LCD_ON, 19'b0, LCD_EN, LCD_RS, LCD_RW, LCD_DATA}),
	  .io_ledg_o	({23'b0, LEDG}),
	  .io_ledr_o	({14'b0, LEDR}),
	  .io_hex0_o	({25'b0, HEX0}),
	  .io_hex1_o    ({25'b0, HEX1}),
	  .io_hex2_o    ({25'b0, HEX2}),
	  .io_hex3_o    ({25'b0, HEX3}),
	  .io_hex4_o    ({25'b0, HEX4}),
	  .io_hex5_o    ({25'b0, HEX5}),
	  .io_hex6_o    ({25'b0, HEX6}),
	  .io_hex7_o    ({25'b0, HEX7})
  );

endmodule : wrapper
