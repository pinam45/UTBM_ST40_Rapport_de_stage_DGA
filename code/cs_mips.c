typedef struct cs_mips {
	uint8_t op_count;         // number of operands of this instruction
	cs_mips_op operands[8];   // operands for this instruction
} cs_mips;
