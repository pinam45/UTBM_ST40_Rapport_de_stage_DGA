typedef struct mips_op_mem {
	mips_reg base;	// base register
	int64_t disp;	// displacement/offset value
} mips_op_mem;
