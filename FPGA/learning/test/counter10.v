'timescale 1ns/1ns
module conter10_vlg_tst();
reg eachvec;
reg clk;
reg rstn;
wire [3:0] cnt;
wire cout;

count10 il(
.clk(clk),
.cnt(cnt),
.cout(cout),
.rstn(rstn)
);
initial
begin
clk=1'b0;
rstn=1'b0;
#51;
rstn=1'b1;
$display("running testbench");
end 

always
begin
#10;
clk=~clk;
end