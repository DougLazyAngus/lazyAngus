#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1294;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t3368;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t3367;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
extern "C" void ReaderWriterLockSlim__ctor_m7781 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C" void ReaderWriterLockSlim__cctor_m11890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
extern "C" void ReaderWriterLockSlim_EnterReadLock_m7768 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterReadLock_m11891 (ReaderWriterLockSlim_t1294 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
extern "C" void ReaderWriterLockSlim_ExitReadLock_m7769 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C" void ReaderWriterLockSlim_EnterWriteLock_m7771 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterWriteLock_m11892 (ReaderWriterLockSlim_t1294 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C" void ReaderWriterLockSlim_ExitWriteLock_m7772 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_EnterUpgradeableReadLock_m7770 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m11893 (ReaderWriterLockSlim_t1294 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_ExitUpgradeableReadLock_m7773 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C" void ReaderWriterLockSlim_Dispose_m11894 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsWriteLockHeld_m7928 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m11895 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m11896 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m11897 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C" void ReaderWriterLockSlim_EnterMyLock_m11898 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C" void ReaderWriterLockSlim_EnterMyLockSpin_m11899 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C" void ReaderWriterLockSlim_ExitMyLock_m11900 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C" void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m11901 (ReaderWriterLockSlim_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C" void ReaderWriterLockSlim_LazyCreateEvent_m11902 (ReaderWriterLockSlim_t1294 * __this, EventWaitHandle_t3368 ** ___waitEvent, bool ___makeAutoResetEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C" bool ReaderWriterLockSlim_WaitOnEvent_m11903 (ReaderWriterLockSlim_t1294 * __this, EventWaitHandle_t3368 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C" LockDetails_t3367 * ReaderWriterLockSlim_GetReadLockDetails_m11904 (ReaderWriterLockSlim_t1294 * __this, int32_t ___threadId, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
