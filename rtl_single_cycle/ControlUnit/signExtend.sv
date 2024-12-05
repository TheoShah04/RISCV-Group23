module signExtend #(
    parameter DATA_WIDTH = 32
) (
    input logic [2:0] ImmSrc,
    input logic [31:0] ImmInput,
    output logic [DATA_WIDTH-1:0] ImmExt
);
    logic [31:7] ImmIn;
    always_comb begin
        case (ImmSrc)
            3'b000: ImmExt = {{20{ImmIn[31]}}, ImmIn[31:20]}; //I-type
            3'b001: ImmExt = {{20{ImmIn[31]}}, ImmIn[31:25], ImmIn[11:7]}; //S-type
            3'b010: ImmExt = {{20{ImmIn[31]}}, ImmIn[7], ImmIn[30:25], ImmIn[11:8], 1'b0}; //B-type
            3'b011: ImmExt = {ImmIn[31:12], 3'h000}; //U-type
            3'b100: ImmExt = {{13{ImmIn[31]}}, ImmIn[19:12], ImmIn[20], ImmIn[30:21]}; //jal
            3'b101: ImmExt = {{20{ImmIn[31]}}, ImmIn[31:20]}; //jalr
            default: ImmExt = 32'd0;
        endcase
    end
endmodule
