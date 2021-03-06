
// Generic hook to notify us about all functions
{

  unsigned int ordinal;
  for(ordinal = ordinalBase; ordinal <= 366; ordinal++) { //FIXME: Push if import table is long enough

    // Detect and avoid constants / variables

    bool hook = false;
    #define HOOK(s,o) { if ((o) == ordinal) { hook = true; } }
    HOOK(AvGetSavedDataAddress,1)
    HOOK(AvSendTVEncoderOption,2)
    HOOK(AvSetDisplayMode,3)
    HOOK(AvSetSavedDataAddress,4)
    HOOK(DbgBreakPoint,5)
    HOOK(DbgBreakPointWithStatus,6)
    HOOK(DbgPrint,8)
    HOOK(DbgPrompt,10)
    HOOK(ExAcquireReadWriteLockExclusive,12)
    HOOK(ExAcquireReadWriteLockShared,13)
    HOOK(ExAllocatePool,14)
    HOOK(ExAllocatePoolWithTag,15)
    HOOK(ExFreePool,17)
    HOOK(ExInitializeReadWriteLock,18)
    HOOK(ExInterlockedAddLargeInteger,19)
    HOOK(ExInterlockedAddLargeStatistic,20)
    HOOK(ExInterlockedCompareExchange64,21)
    HOOK(ExQueryPoolBlockSize,23)
    HOOK(ExQueryNonVolatileSetting,24)
    HOOK(ExReadWriteRefurbInfo,25)
    HOOK(ExRaiseException,26)
    HOOK(ExRaiseStatus,27)
    HOOK(ExReleaseReadWriteLock,28)
    HOOK(ExSaveNonVolatileSetting,29)
    HOOK(ExfInterlockedInsertHeadList,32)
    HOOK(ExfInterlockedInsertTailList,33)
    HOOK(ExfInterlockedRemoveHeadList,34)
    HOOK(FscGetCacheSize,35)
    HOOK(FscInvalidateIdleBlocks,36)
    HOOK(FscSetCacheSize,37)
    HOOK(HalClearSoftwareInterrupt,38)
    HOOK(HalDisableSystemInterrupt,39)
    HOOK(HalEnableSecureTrayEject,365)
    HOOK(HalEnableSystemInterrupt,43)
    HOOK(HalGetInterruptVector,44)
    HOOK(HalInitiateShutdown,360)
    HOOK(HalIsResetOrShutdownPending,358)
    HOOK(HalReadSMBusValue,45)
    HOOK(HalReadSMCTrayState,9)
    HOOK(HalReadWritePCISpace,46)
    HOOK(HalRegisterShutdownNotification,47)
    HOOK(HalRequestSoftwareInterrupt,48)
    HOOK(HalReturnToFirmware,49)
    HOOK(HalWriteSMBusValue,50)
    HOOK(HalWriteSMCScratchRegister,366)
    HOOK(InterlockedCompareExchange,51)
    HOOK(InterlockedDecrement,52)
    HOOK(InterlockedIncrement,53)
    HOOK(InterlockedExchange,54)
    HOOK(InterlockedExchangeAdd,55)
    HOOK(InterlockedFlushSList,56)
    HOOK(InterlockedPopEntrySList,57)
    HOOK(InterlockedPushEntrySList,58)
    HOOK(IoAllocateIrp,59)
    HOOK(IoBuildAsynchronousFsdRequest,60)
    HOOK(IoBuildDeviceIoControlRequest,61)
    HOOK(IoBuildSynchronousFsdRequest,62)
    HOOK(IoCheckShareAccess,63)
    HOOK(IoCreateDevice,65)
    HOOK(IoCreateFile,66)
    HOOK(IoCreateSymbolicLink,67)
    HOOK(IoDeleteDevice,68)
    HOOK(IoDeleteSymbolicLink,69)
    HOOK(IoDismountVolume,90)
    HOOK(IoDismountVolumeByName,91)
    HOOK(IoFreeIrp,72)
    HOOK(IoInitializeIrp,73)
    HOOK(IoInvalidDeviceRequest,74)
    HOOK(IoMarkIrpMustComplete,359)
    HOOK(IoQueryFileInformation,75)
    HOOK(IoQueryVolumeInformation,76)
    HOOK(IoQueueThreadIrp,77)
    HOOK(IoRemoveShareAccess,78)
    HOOK(IoSetIoCompletion,79)
    HOOK(IoSetShareAccess,80)
    HOOK(IoStartNextPacket,81)
    HOOK(IoStartNextPacketByKey,82)
    HOOK(IoStartPacket,83)
    HOOK(IoSynchronousDeviceIoControlRequest,84)
    HOOK(IoSynchronousFsdRequest,85)
    HOOK(IofCallDriver,86)
    HOOK(IofCompleteRequest,87)
    HOOK(KeAlertResumeThread,92)
    HOOK(KeAlertThread,93)
    HOOK(KeBoostPriorityThread,94)
    HOOK(KeBugCheck,95)
    HOOK(KeBugCheckEx,96)
    HOOK(KeCancelTimer,97)
    HOOK(KeConnectInterrupt,98)
    HOOK(KeDelayExecutionThread,99)
    HOOK(KeDisconnectInterrupt,100)
    HOOK(KeEnterCriticalRegion,101)
    HOOK(KeGetCurrentIrql,103)
    HOOK(KeGetCurrentThread,104)
    HOOK(KeInitializeApc,105)
    HOOK(KeInitializeDeviceQueue,106)
    HOOK(KeInitializeDpc,107)
    HOOK(KeInitializeEvent,108)
    HOOK(KeInitializeInterrupt,109)
    HOOK(KeInitializeMutant,110)
    HOOK(KeInitializeQueue,111)
    HOOK(KeInitializeSemaphore,112)
    HOOK(KeInitializeTimerEx,113)
    HOOK(KeInsertByKeyDeviceQueue,114)
    HOOK(KeInsertDeviceQueue,115)
    HOOK(KeInsertHeadQueue,116)
    HOOK(KeInsertQueue,117)
    HOOK(KeInsertQueueApc,118)
    HOOK(KeInsertQueueDpc,119)
    HOOK(KeIsExecutingDpc,121)
    HOOK(KeLeaveCriticalRegion,122)
    HOOK(KePulseEvent,123)
    HOOK(KeQueryBasePriorityThread,124)
    HOOK(KeQueryInterruptTime,125)
    HOOK(KeQueryPerformanceCounter,126)
    HOOK(KeQueryPerformanceFrequency,127)
    HOOK(KeQuerySystemTime,128)
    HOOK(KeRaiseIrqlToDpcLevel,129)
    HOOK(KeRaiseIrqlToSynchLevel,130)
    HOOK(KeReleaseMutant,131)
    HOOK(KeReleaseSemaphore,132)
    HOOK(KeRemoveByKeyDeviceQueue,133)
    HOOK(KeRemoveDeviceQueue,134)
    HOOK(KeRemoveEntryDeviceQueue,135)
    HOOK(KeRemoveQueue,136)
    HOOK(KeRemoveQueueDpc,137)
    HOOK(KeResetEvent,138)
    HOOK(KeRestoreFloatingPointState,139)
    HOOK(KeResumeThread,140)
    HOOK(KeRundownQueue,141)
    HOOK(KeSaveFloatingPointState,142)
    HOOK(KeSetBasePriorityThread,143)
    HOOK(KeSetDisableBoostThread,144)
    HOOK(KeSetEvent,145)
    HOOK(KeSetEventBoostPriority,146)
    HOOK(KeSetPriorityProcess,147)
    HOOK(KeSetPriorityThread,148)
    HOOK(KeSetTimer,149)
    HOOK(KeSetTimerEx,150)
    HOOK(KeStallExecutionProcessor,151)
    HOOK(KeSuspendThread,152)
    HOOK(KeSynchronizeExecution,153)
    HOOK(KeTestAlertThread,155)
    HOOK(KeWaitForMultipleObjects,158)
    HOOK(KeWaitForSingleObject,159)
    HOOK(KfRaiseIrql,160)
    HOOK(KfLowerIrql,161)
    HOOK(KiUnlockDispatcherDatabase,163)
    HOOK(MmAllocateContiguousMemory,165)
    HOOK(MmAllocateContiguousMemoryEx,166)
    HOOK(MmAllocateSystemMemory,167)
    HOOK(MmClaimGpuInstanceMemory,168)
    HOOK(MmCreateKernelStack,169)
    HOOK(MmDeleteKernelStack,170)
    HOOK(MmFreeContiguousMemory,171)
    HOOK(MmFreeSystemMemory,172)
    HOOK(MmGetPhysicalAddress,173)
    HOOK(MmIsAddressValid,174)
    HOOK(MmLockUnlockBufferPages,175)
    HOOK(MmLockUnlockPhysicalPage,176)
    HOOK(MmMapIoSpace,177)
    HOOK(MmPersistContiguousMemory,178)
    HOOK(MmQueryAddressProtect,179)
    HOOK(MmQueryAllocationSize,180)
    HOOK(MmQueryStatistics,181)
    HOOK(MmSetAddressProtect,182)
    HOOK(MmUnmapIoSpace,183)
    HOOK(NtAllocateVirtualMemory,184)
    HOOK(NtCancelTimer,185)
    HOOK(NtClearEvent,186)
    HOOK(NtClose,187)
    HOOK(NtCreateDirectoryObject,188)
    HOOK(NtCreateEvent,189)
    HOOK(NtCreateFile,190)
    HOOK(NtCreateIoCompletion,191)
    HOOK(NtCreateMutant,192)
    HOOK(NtCreateSemaphore,193)
    HOOK(NtCreateTimer,194)
    HOOK(NtDeleteFile,195)
    HOOK(NtDeviceIoControlFile,196)
    HOOK(NtDuplicateObject,197)
    HOOK(NtFlushBuffersFile,198)
    HOOK(NtFreeVirtualMemory,199)
    HOOK(NtFsControlFile,200)
    HOOK(NtOpenDirectoryObject,201)
    HOOK(NtOpenFile,202)
    HOOK(NtOpenSymbolicLinkObject,203)
    HOOK(NtProtectVirtualMemory,204)
    HOOK(NtPulseEvent,205)
    HOOK(NtQueueApcThread,206)
    HOOK(NtQueryDirectoryFile,207)
    HOOK(NtQueryDirectoryObject,208)
    HOOK(NtQueryEvent,209)
    HOOK(NtQueryFullAttributesFile,210)
    HOOK(NtQueryInformationFile,211)
    HOOK(NtQueryIoCompletion,212)
    HOOK(NtQueryMutant,213)
    HOOK(NtQuerySemaphore,214)
    HOOK(NtQuerySymbolicLinkObject,215)
    HOOK(NtQueryTimer,216)
    HOOK(NtQueryVirtualMemory,217)
    HOOK(NtQueryVolumeInformationFile,218)
    HOOK(NtReadFile,219)
    HOOK(NtReadFileScatter,220)
    HOOK(NtReleaseMutant,221)
    HOOK(NtReleaseSemaphore,222)
    HOOK(NtRemoveIoCompletion,223)
    HOOK(NtResumeThread,224)
    HOOK(NtSetEvent,225)
    HOOK(NtSetInformationFile,226)
    HOOK(NtSetIoCompletion,227)
    HOOK(NtSetSystemTime,228)
    HOOK(NtSetTimerEx,229)
    HOOK(NtSignalAndWaitForSingleObjectEx,230)
    HOOK(NtSuspendThread,231)
    HOOK(NtUserIoApcDispatcher,232)
    HOOK(NtWaitForSingleObject,233)
    HOOK(NtWaitForSingleObjectEx,234)
    HOOK(NtWaitForMultipleObjectsEx,235)
    HOOK(NtWriteFile,236)
    HOOK(NtWriteFileGather,237)
    HOOK(NtYieldExecution,238)
    HOOK(ObCreateObject,239)
    HOOK(ObInsertObject,241)
    HOOK(ObMakeTemporaryObject,242)
    HOOK(ObOpenObjectByName,243)
    HOOK(ObOpenObjectByPointer,244)
    HOOK(ObReferenceObjectByHandle,246)
    HOOK(ObReferenceObjectByName,247)
    HOOK(ObReferenceObjectByPointer,248)
    HOOK(ObfDereferenceObject,250)
    HOOK(ObfReferenceObject,251)
    HOOK(PhyGetLinkState,252)
    HOOK(PhyInitialize,253)
    HOOK(PsCreateSystemThread,254)
    HOOK(PsCreateSystemThreadEx,255)
    HOOK(PsQueryStatistics,256)
    HOOK(PsSetCreateThreadNotifyRoutine,257)
    HOOK(PsTerminateSystemThread,258)
    HOOK(RtlAnsiStringToUnicodeString,260)
    HOOK(RtlAppendStringToString,261)
    HOOK(RtlAppendUnicodeStringToString,262)
    HOOK(RtlAppendUnicodeToString,263)
    HOOK(RtlAssert,264)
    HOOK(RtlCaptureContext,265)
    HOOK(RtlCaptureStackBackTrace,266)
    HOOK(RtlCharToInteger,267)
    HOOK(RtlCompareMemory,268)
    HOOK(RtlCompareMemoryUlong,269)
    HOOK(RtlCompareString,270)
    HOOK(RtlCompareUnicodeString,271)
    HOOK(RtlCopyString,272)
    HOOK(RtlCopyUnicodeString,273)
    HOOK(RtlCreateUnicodeString,274)
    HOOK(RtlDowncaseUnicodeChar,275)
    HOOK(RtlDowncaseUnicodeString,276)
    HOOK(RtlEnterCriticalSection,277)
    HOOK(RtlEnterCriticalSectionAndRegion,278)
    HOOK(RtlEqualString,279)
    HOOK(RtlEqualUnicodeString,280)
    HOOK(RtlExtendedIntegerMultiply,281)
    HOOK(RtlExtendedLargeIntegerDivide,282)
    HOOK(RtlExtendedMagicDivide,283)
    HOOK(RtlFillMemory,284)
    HOOK(RtlFillMemoryUlong,285)
    HOOK(RtlFreeAnsiString,286)
    HOOK(RtlFreeUnicodeString,287)
    HOOK(RtlGetCallersAddress,288)
    HOOK(RtlInitAnsiString,289)
    HOOK(RtlInitUnicodeString,290)
    HOOK(RtlInitializeCriticalSection,291)
    HOOK(RtlIntegerToChar,292)
    HOOK(RtlIntegerToUnicodeString,293)
    HOOK(RtlLeaveCriticalSection,294)
    HOOK(RtlLeaveCriticalSectionAndRegion,295)
    HOOK(RtlLowerChar,296)
    HOOK(RtlMapGenericMask,297)
    HOOK(RtlMoveMemory,298)
    HOOK(RtlMultiByteToUnicodeN,299)
    HOOK(RtlMultiByteToUnicodeSize,300)
    HOOK(RtlNtStatusToDosError,301)
    HOOK(RtlRaiseException,302)
    HOOK(RtlRaiseStatus,303)
    HOOK(RtlRip,352)
    HOOK(RtlSnprintf,361)
    HOOK(RtlSprintf,362)
    HOOK(RtlTimeFieldsToTime,304)
    HOOK(RtlTimeToTimeFields,305)
    HOOK(RtlTryEnterCriticalSection,306)
    HOOK(RtlUlongByteSwap,307)
    HOOK(RtlUnicodeStringToAnsiString,308)
    HOOK(RtlUnicodeStringToInteger,309)
    HOOK(RtlUnicodeToMultiByteN,310)
    HOOK(RtlUnicodeToMultiByteSize,311)
    HOOK(RtlUnwind,312)
    HOOK(RtlUpcaseUnicodeChar,313)
    HOOK(RtlUpcaseUnicodeString,314)
    HOOK(RtlUpcaseUnicodeToMultiByteN,315)
    HOOK(RtlUpperChar,316)
    HOOK(RtlUpperString,317)
    HOOK(RtlUshortByteSwap,318)
    HOOK(RtlVsnprintf,363)
    HOOK(RtlVsprintf,364)
    HOOK(RtlWalkFrameChain,319)
    HOOK(RtlZeroMemory,320)
    HOOK(XeLoadSection,327)
    HOOK(XeUnloadSection,328)
    HOOK(READ_PORT_BUFFER_UCHAR,329)
    HOOK(READ_PORT_BUFFER_USHORT,330)
    HOOK(READ_PORT_BUFFER_ULONG,331)
    HOOK(WRITE_PORT_BUFFER_UCHAR,332)
    HOOK(WRITE_PORT_BUFFER_USHORT,333)
    HOOK(WRITE_PORT_BUFFER_ULONG,334)
    HOOK(XcSHAInit,335)
    HOOK(XcSHAUpdate,336)
    HOOK(XcSHAFinal,337)
    HOOK(XcRC4Key,338)
    HOOK(XcRC4Crypt,339)
    HOOK(XcHMAC,340)
    HOOK(XcPKEncPublic,341)
    HOOK(XcPKDecPrivate,342)
    HOOK(XcPKGetKeyLen,343)
    HOOK(XcVerifyPKCS1Signature,344)
    HOOK(XcModExp,345)
    HOOK(XcDESKeyParity,346)
    HOOK(XcKeyTable,347)
    HOOK(XcBlockCrypt,348)
    HOOK(XcBlockCryptCBC,349)
    HOOK(XcCryptService,350)
    HOOK(XcUpdateCrypto,351)
    HOOK(DbgLoadImageSymbols,7)
    HOOK(DbgUnLoadImageSymbols,11)
    // Debug functions..
    HOOK(MmDbgAllocateMemory,374)
    HOOK(MmDbgFreeMemory,375)
    HOOK(MmDbgQueryAvailablePages,376)
    HOOK(MmDbgReleaseAddress,377)
    HOOK(MmDbgWriteCheck,378)


    if (hook == false) {
      continue;
    }

    // So this is a function

    uint32_t* p = &exportAddressTableRva[ordinal];
    uint8_t* code = &environment->hookallStub[8*(ordinal-ordinalBase)];

    if (*p == 0x00000000) { continue; } // Unused entry?

    if (base != NULL) {
      uint32_t original = *p + kernel;
      encodeInt3(&code[0]);
      encodeJmp(&code[1],original);
      encodeInt3(&code[6]); // For this part to work you also have to modify the ret address before the jmp..
      encodeRet(&code[7]);
      *p = (uintptr_t)code - kernel;
    } else {
      // If this was hooked before..
      if ((code[0] == 0xCC) && (code[1] == 0xE9)) { // For call this has to be 0xE8
        uint32_t address = (uintptr_t)&code[1]; // Get address of the jmp instruction
        uint32_t target = *(uint32_t*)&code[2]; // Read address of the original function
        uint32_t original = target+address+5; // Calculate address of the original function
        *p = original - kernel; // Write the original address back to export table
      }
    }

    // Next ordinal
  
  }

}
