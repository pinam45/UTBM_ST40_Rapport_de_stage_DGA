int __cdecl AddressToTxt(void* hModuleInstance, ViewCtx_T* ViewCtx, MemoryAddress_T* Address, long Offset, char* Txt)

int __cdecl TxtToAddress(void* hModuleInstance, ViewCtx_T* ViewCtx, char* Txt, MemoryAddress_T* Address)

int __cdecl IsAddressInMemoryArea(void* hModuleInstance, MemoryAddress_T* Address, long Offset, MemoryArea_T* Area)

int __cdecl CompareAddress(void* hModuleInstance, MemoryAddress_T* AddressA, long OffsetA, MemoryAddress_T* AddressB, long OffsetB)

int __cdecl EvalAddress(void* hModuleInstance, MemoryAddress_T* BaseAddress, long Offset, MemoryAddress_T* Address)

int __cdecl EvalOffset(void* hModuleInstance, MemoryAddress_T* BaseAddress, MemoryAddress_T* Address, long* Offset)

int __cdecl GetAsmModuleInfo(AsmModuleInfo_T** AsmModuleInfo)

int __cdecl AssembleSingle(void* hModuleInstance, ViewCtx_T* ViewCtx, MemoryAddress_T* BaseAddress, long Offset, char* InstructionTxt, uint8_t* Data, uint32_t* szData)

int __cdecl TxtToCPUCtx(void* hModuleInstance, char* Txt, CPUCtx_T* CPUCtx)

int __cdecl CPUCtxToTxt(void* hModuleInstance, CPUCtx_T* CPUCtx, char* Txt)

int __cdecl DataToTxt(void* hModuleInstance, ViewCtx_T* ViewCtx, uint8_t* Data, uint32_t Type, char* Txt)

int __cdecl TxtToData(void* hModuleInstance, ViewCtx_T* ViewCtx, char* Txt, uint8_t* Data, uint32_t* szData, uint32_t Type)

int __cdecl IsConditionSatisfied(void* hModuleInstance, ViewCtx_T* ViewCtx, char* ConditionTxt, int* IsConditionSatisfied_)

int __cdecl GetInstructionPointer(void* hModuleInstance, ViewCtx_T* ViewCtx, MemoryAddress_T* InstructionPointer)

int __cdecl ReadValueFromThisValue(void* hModuleInstance, ViewCtx_T* ViewCtx, void* EvaluateExpressionCtx, uint64_t AddressValue, uint64_t* DataValue)

int __cdecl Init(GenDbgHelperAsmInfo_T* pGendbgHelper, void** hModuleInstance)

int __cdecl Uninit(void* hModuleInstance)

int __cdecl GetLastErrorMsg(void* hModuleInstance, char* ErrorTxt)

int __cdecl UnassembleBloc(void* hModuleInstance, ViewCtx_T* ViewCtx, MemoryAddress_T* BaseAddress, long Offset, uint8_t* CellDump, uint8_t* CellBitmap, long OffsetStartUnassemble, uint32_t* NbInstruction, AsmDecodedInstruction_T* TblDecodedInstruction)

int __cdecl GetInstructionInfo(void* hModuleInstance, ViewCtx_T* ViewCtx, MemoryAddress_T* BaseAddress, long Offset, AsmInstructionInfo_T* InstructionInfo)