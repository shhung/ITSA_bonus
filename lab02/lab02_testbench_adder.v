`timescale 1ns / 1ps

module testbench_4bit_adder;

reg [3:0] a, b, c ,d;
wire [3:0] sum;
wire ov;

reg clk = 0;
reg	rst = 0;
reg [7:0] correct_sum;
reg [7:0] test_num;
reg correct_ov;

always #5 clk = ~clk;
always #5 rst = ~rst;

adder DUT(a, b, c, d, sum, ov);

initial
begin
	clk <= 0;
	rst <= 0;
	a <= 0; 
	b <= 0; 
	c <= 0; 
	d <= 0;
	test_num <= 0;
	$dumpfile("adder.vcd");
	$dumpvars;
end


always@(posedge clk or negedge rst)
begin
	if(rst)begin
		if(a <= 15) begin 
			a <= a + 1;
			test_num <= test_num + 1;
		end 
		if(a == 15) begin
			b <= b + 1;
		end
		if(b == 15 && a == 15) begin
			b <= b + 1;
			c <= c + 1;
		end
		d <= {$random} % 16;
	end
	else begin
		{correct_ov, correct_sum} = a + b + c + d;
		if({ov, sum} == {correct_ov, correct_sum}) begin
			$display ("Test %d ", test_num);
			$display ("OK!");
			/*
			$display ("%d + %d + %d + %d = ?", a, b, c, d);
			$display ("your answer: ov = %d, sum = %d", ov, sum);
			$display ("correct answer: ov = %d, sum = %d", ov, sum);
			$display ("\n");
			*/
		end
		else begin
			$display ("Test %d ", test_num);
			$display ("/////////////////////");
			$display ("////////Fail!////////");
			$display ("/////////////////////");
			$display ("%d + %d + %d + %d = ?", a, b, c, d);
			$display ("your answer: ov = %d, sum = %d", ov, sum);
			$display ("correct answer: ov = %d, sum = %d", correct_ov, correct_sum);
			$display ("\n");
		end
	end
end

initial #1005 $finish;
endmodule
