module D_FF_32bit
(
	input  logic [31:0] D,
	input  logic        clk,rst_ni,
	output logic [31:0] Q
);
	always @(posedge clk or negedge rst_ni) begin
		if(!rst_ni) begin
			Q  <=  0;
		end
		else
			Q  <=  D;
	end
endmodule
