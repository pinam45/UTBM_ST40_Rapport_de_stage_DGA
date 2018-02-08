typedef struct cs_insn {
	unsigned int id;
	uint64_t address;
	uint16_t size;
	uint8_t bytes[16];
	char mnemonic[CS_MNEMONIC_SIZE];
	char op_str[160];
	cs_detail *detail;
} cs_insn;
