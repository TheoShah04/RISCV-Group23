module controlUnit #(
) (
    input logic [6:0] op,
    input logic [14:12] funct3,
    input logic funct7,
    output logic [1:0] PCSrc,
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic [3:0] ALUControl,
    output logic ALUSrc,
    output logic [2:0] ImmSrc,
    output logic RegWrite
);
    logic [1:0] ALUOp; 
    always_comb begin
        case (op)
            7'b0110011: RegWrite = 1'b1; ImmSrc = 3'b111; ALUSrc = 1'b0; MemWrite = 1'b0; ResultSrc = 2'b00; PCSrc = 2'b00; ALUOp = 2'b10; //R-type
            7'b0010011: RegWrite = 1'b1; ImmSrc = 3'b000; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 2'b00; PCSrc = 2'b00; ALUOp = 2'b10; //I-type
            7'b0000011: RegWrite = 1'b1; ImmSrc = 3'b000; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 2'b01; PCSrc = 2'b00; ALUOp = 2'b00; //Load-type
            7'b0100011: RegWrite = 1'b0; ImmSrc = 3'b001; ALUSrc = 1'b1; MemWrite = 1'b1; ResultSrc = 2'b00; PCSrc = 2'b00; ALUOp = 2'b00; //S-type
            7'b1100011: RegWrite = 1'b0; ImmSrc = 3'b010; ALUSrc = 1'b0; MemWrite = 1'b0; ResultSrc = 2'b00; PCSrc = 2'b10; ALUOp = 2'b01; //B-type
            7'b0110111: RegWrite = 1'b1; ImmSrc = 3'b011; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 2'b00; PCSrc = 2'b00; ALUOp = 2'b11; //U-type (lui)
            7'b0010111: RegWrite = 1'b1; ImmSrc = 3'b011; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 2'b00; PCSrc = 2'b00; ALUOp = 2'b11; //U-type (auipc)
            7'b1101111: RegWrite = 1'b1; ImmSrc = 3'b100; ALUSrc = 1'b0; MemWrite = 1'b0; ResultSrc = 2'b10; PCSrc = 2'b01; ALUOp = 2'b11; //J-type (jal)
            7'b1100111: RegWrite = 1'b1; ImmSrc = 3'b100; ALUSrc = 1'b0; MemWrite = 1'b0; ResultSrc = 2'b10; PCSrc = 2'b11; ALUOp = 2'b11; //I-type (jalr)
            default: RegWrite = 1'b0; ImmSrc = 3'b111; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 2'b11; PCSrc = 2'b00; ALUOp = 2'b11; //Invalid
        endcase
    end

    ALUDecoder alu_decoder (
        .ALUOp(ALUOp),
        .op(op[5]),
        .funct3(funct3),
        .funct7(funct7),
        .ALUControlD(ALUControlD)
    );

endmodule
