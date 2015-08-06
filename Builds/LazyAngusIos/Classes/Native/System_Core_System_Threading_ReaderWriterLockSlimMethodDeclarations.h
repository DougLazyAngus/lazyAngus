#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1224;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t3303;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t3302;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
extern "C" void ReaderWriterLockSlim__ctor_m7369 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C" void ReaderWriterLockSlim__cctor_m11482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
extern "C" void ReaderWriterLockSlim_EnterReadLock_m7356 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterReadLock_m11483 (ReaderWriterLockSlim_t1224 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
extern "C" void ReaderWriterLockSlim_ExitReadLock_m7357 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C" void ReaderWriterLockSlim_EnterWriteLock_m7359 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterWriteLock_m11484 (ReaderWriterLockSlim_t1224 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C" void ReaderWriterLockSlim_ExitWriteLock_m7360 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_EnterUpgradeableReadLock_m7358 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m11485 (ReaderWriterLockSlim_t1224 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_ExitUpgradeableReadLock_m7361 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C" void ReaderWriterLockSlim_Dispose_m11486 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsWriteLockHeld_m7517 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m11487 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m11488 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m11489 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C" void ReaderWriterLockSlim_EnterMyLock_m11490 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C" void ReaderWriterLockSlim_EnterMyLockSpin_m11491 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C" void ReaderWriterLockSlim_ExitMyLock_m11492 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C" void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m11493 (ReaderWriterLockSlim_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C" void ReaderWriterLockSlim_LazyCreateEvent_m11494 (ReaderWriterLockSlim_t1224 * __this, EventWaitHandle_t3303 ** ___waitEvent, bool ___makeAutoResetEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C" bool ReaderWriterLockSlim_WaitOnEvent_m11495 (ReaderWriterLockSlim_t1224 * __this, EventWaitHandle_t3303 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C" LockDetails_t3302 * ReaderWriterLockSlim_GetReadLockDetails_m11496 (ReaderWriterLockSlim_t1224 * __this, int32_t ___threadId, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
