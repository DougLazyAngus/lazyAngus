﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1278;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t3352;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t3351;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
extern "C" void ReaderWriterLockSlim__ctor_m7649 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C" void ReaderWriterLockSlim__cctor_m11761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
extern "C" void ReaderWriterLockSlim_EnterReadLock_m7636 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterReadLock_m11762 (ReaderWriterLockSlim_t1278 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
extern "C" void ReaderWriterLockSlim_ExitReadLock_m7637 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C" void ReaderWriterLockSlim_EnterWriteLock_m7639 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterWriteLock_m11763 (ReaderWriterLockSlim_t1278 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C" void ReaderWriterLockSlim_ExitWriteLock_m7640 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_EnterUpgradeableReadLock_m7638 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
extern "C" bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m11764 (ReaderWriterLockSlim_t1278 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
extern "C" void ReaderWriterLockSlim_ExitUpgradeableReadLock_m7641 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C" void ReaderWriterLockSlim_Dispose_m11765 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsWriteLockHeld_m7796 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
extern "C" bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m11766 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m11767 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C" int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m11768 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C" void ReaderWriterLockSlim_EnterMyLock_m11769 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C" void ReaderWriterLockSlim_EnterMyLockSpin_m11770 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C" void ReaderWriterLockSlim_ExitMyLock_m11771 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C" void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m11772 (ReaderWriterLockSlim_t1278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C" void ReaderWriterLockSlim_LazyCreateEvent_m11773 (ReaderWriterLockSlim_t1278 * __this, EventWaitHandle_t3352 ** ___waitEvent, bool ___makeAutoResetEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C" bool ReaderWriterLockSlim_WaitOnEvent_m11774 (ReaderWriterLockSlim_t1278 * __this, EventWaitHandle_t3352 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C" LockDetails_t3351 * ReaderWriterLockSlim_GetReadLockDetails_m11775 (ReaderWriterLockSlim_t1278 * __this, int32_t ___threadId, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
