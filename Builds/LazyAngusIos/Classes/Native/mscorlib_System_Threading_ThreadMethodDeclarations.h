#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t1467;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2489;
// System.Globalization.CultureInfo
struct CultureInfo_t585;
// System.Threading.ExecutionContext
struct ExecutionContext_t2494;
// System.Threading.ThreadStart
struct ThreadStart_t1719;
// System.MulticastDelegate
struct MulticastDelegate_t388;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
struct Object_t;
// System.Threading.CompressedStack
struct CompressedStack_t2625;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C" void Thread__ctor_m8612 (Thread_t1467 * __this, ThreadStart_t1719 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C" void Thread__cctor_m14846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t2489 * Thread_get_CurrentContext_m14847 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1467 * Thread_CurrentThread_internal_m14848 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" Thread_t1467 * Thread_get_CurrentThread_m8565 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m14849 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort_internal()
extern "C" void Thread_ResetAbort_internal_m14850 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort()
extern "C" void Thread_ResetAbort_m8566 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C" IntPtr_t Thread_Thread_internal_m14851 (Thread_t1467 * __this, MulticastDelegate_t388 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C" void Thread_Thread_init_m14852 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t585 * Thread_GetCachedCurrentCulture_m14853 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t36* Thread_GetSerializedCurrentCulture_m14854 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m14855 (Thread_t1467 * __this, CultureInfo_t585 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t585 * Thread_GetCachedCurrentUICulture_m14856 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t36* Thread_GetSerializedCurrentUICulture_m14857 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m14858 (Thread_t1467 * __this, CultureInfo_t585 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" CultureInfo_t585 * Thread_get_CurrentCulture_m14859 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C" CultureInfo_t585 * Thread_get_CurrentUICulture_m14860 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C" void Thread_Abort_internal_m14861 (Thread_t1467 * __this, Object_t * ___stateInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
extern "C" void Thread_Abort_m8571 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C" void Thread_Start_m8613 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m14862 (Thread_t1467 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m14863 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C" int32_t Thread_GetNewManagedId_m14864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m14865 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C" ExecutionContext_t2494 * Thread_get_ExecutionContext_m14866 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" int32_t Thread_get_ManagedThreadId_m14867 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m14868 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C" CompressedStack_t2625 * Thread_GetCompressedStack_m14869 (Thread_t1467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
