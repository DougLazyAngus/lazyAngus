#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t1412;
// System.Runtime.Remoting.Contexts.Context
struct Context_t4553;
// System.Globalization.CultureInfo
struct CultureInfo_t721;
// System.String
struct String_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t4558;
// System.Threading.ThreadStart
struct ThreadStart_t4156;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t2095;
// System.MulticastDelegate
struct MulticastDelegate_t388;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Object
struct Object_t;
// System.Threading.CompressedStack
struct CompressedStack_t4689;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C" void Thread__ctor_m14869 (Thread_t1412 * __this, ThreadStart_t4156 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
extern "C" void Thread__ctor_m7539 (Thread_t1412 * __this, ParameterizedThreadStart_t2095 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C" void Thread__cctor_m19021 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t4553 * Thread_get_CurrentContext_m19022 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1412 * Thread_CurrentThread_internal_m19023 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" Thread_t1412 * Thread_get_CurrentThread_m7204 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m19024 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort_internal()
extern "C" void Thread_ResetAbort_internal_m19025 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort()
extern "C" void Thread_ResetAbort_m14848 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
extern "C" void Thread_Sleep_internal_m19026 (Object_t * __this /* static, unused */, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" void Thread_Sleep_m11587 (Object_t * __this /* static, unused */, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C" IntPtr_t Thread_Thread_internal_m19027 (Thread_t1412 * __this, MulticastDelegate_t388 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C" void Thread_Thread_init_m19028 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t721 * Thread_GetCachedCurrentCulture_m19029 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t66* Thread_GetSerializedCurrentCulture_m19030 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m19031 (Thread_t1412 * __this, CultureInfo_t721 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t721 * Thread_GetCachedCurrentUICulture_m19032 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t66* Thread_GetSerializedCurrentUICulture_m19033 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m19034 (Thread_t1412 * __this, CultureInfo_t721 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" CultureInfo_t721 * Thread_get_CurrentCulture_m19035 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C" CultureInfo_t721 * Thread_get_CurrentUICulture_m19036 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C" void Thread_set_IsBackground_m19037 (Thread_t1412 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C" void Thread_SetName_internal_m19038 (Thread_t1412 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C" void Thread_set_Name_m19039 (Thread_t1412 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C" void Thread_Abort_internal_m19040 (Thread_t1412 * __this, Object_t * ___stateInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
extern "C" void Thread_Abort_m14853 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SpinWait_nop()
extern "C" void Thread_SpinWait_nop_m19041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SpinWait(System.Int32)
extern "C" void Thread_SpinWait_m11586 (Object_t * __this /* static, unused */, int32_t ___iterations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C" void Thread_Start_m7540 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m19042 (Thread_t1412 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m19043 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C" void Thread_SetState_m19044 (Thread_t1412 * __this, int32_t ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C" void Thread_ClrState_m19045 (Thread_t1412 * __this, int32_t ___clr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C" int32_t Thread_GetNewManagedId_m19046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m19047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C" ExecutionContext_t4558 * Thread_get_ExecutionContext_m19048 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" int32_t Thread_get_ManagedThreadId_m7205 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m19049 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C" CompressedStack_t4689 * Thread_GetCompressedStack_m19050 (Thread_t1412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
