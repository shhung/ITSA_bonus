module  adder(a, b, c, d, sum, ov);
  input [3:0] a, b ,c ,d;
  output [3:0] sum;
  output ov;
  wire s1 ,s2 ,s3;

  assign {s1, s2, s3, sum} = a + b + c + d;
  assign ov = s1 || s2 || s3;

endmodule 
