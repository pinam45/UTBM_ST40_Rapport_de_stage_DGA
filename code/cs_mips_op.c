typedef struct cs_mips_op {
	mips_op_type type;	    // operand type
	union {
		mips_reg reg;		// register value for REG operand
		int64_t imm;		// immediate value for IMM operand
		mips_op_mem mem;	// base/index/scale/disp value for MEM operand
	};
} cs_mips_op;