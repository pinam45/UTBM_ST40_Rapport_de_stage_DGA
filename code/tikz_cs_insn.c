typedef struct cs_insn {
	unsigned int id;
	uint64_t address;
	uint16_t size;
	uint8_t bytes[16];
	char mnemonic[CS_MNEMONIC_SIZE];!\tikz[remember picture] \node (cs_insn_mnemonic) {};!
	char op_str[160];!\tikz[remember picture] \node (cs_insn_op_str) {};!
	cs_detail *detail;!\tikz[remember picture] \node (cs_insn_detail) {};!
} cs_insn;
