typedef struct cs_detail {
	// list of implicit registers read by this insn
	uint16_t regs_read[12];
	uint8_t regs_read_count;

	// list of implicit registers modified by this insn
	uint16_t regs_write[20];
	uint8_t regs_write_count;

	// list of group this instruction belong to
	uint8_t groups[8];
	uint8_t groups_count;

	// Architecture-specific instruction info
	union {
		cs_x86 x86;                 // X86 architecture
		cs_arm64 arm64;             // ARM64 architecture
		cs_arm arm;                 // ARM architecture
		cs_m68k m68k;               // M68K architecture
		cs_mips mips;               // MIPS architecture
		cs_ppc ppc;                 // PowerPC architecture
		cs_sparc sparc;             // Sparc architecture
		cs_sysz sysz;               // SystemZ architecture
		cs_xcore xcore;             // XCore architecture
		cs_tms320c64x tms320c64x;   // TMS320C64x architecture
	};
} cs_detail;
