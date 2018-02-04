typedef struct {
    DWORD                   Version;
    char*                   Architecture;
    DWORD                   szCellInBits;
    DWORD                   szMaxInstructionInCell;
    AsmDataInfo_T*          TblDataType;
    AsmGroupRegisterInfo_T* TblGroupRegister;
    AsmAddressTypeInfo_T*   TblAddressType;
    AsmAddressSpaceInfo_T*  TblAddressSpace;
    AsmBankInfo_T*          TblBank;
    char*                   CPUCtxSyntaxHelp;
    char*                   AddressSyntaxHelp;
    char*                   DataSyntaxHelp;
    char*                   ConditionSyntaxHelp;
    void*                   FunctionTbl[AsmModule_LastFnIdx];
} AsmModuleInfo_T;