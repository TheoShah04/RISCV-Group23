module mux3 #(
    parameter WIDTH = 32
)(
    input logic [1:0]         sel,
    input logic [WIDTH-1:0]     in0,
    input logic [WIDTH-1:0]     in1,
    input logic [WIDTH-1:0]     in2,
    output logic [WIDTH-1:0]    out
);
    always_comb begin
        case (sel)
            2'b00: out = in0;         
            2'b01: out = in1;
            2'b10:  out = in2;
            default:    out = in0;
        endcase
    end
    
endmodule
