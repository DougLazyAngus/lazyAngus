#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t2491;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2774;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2489;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m13809 (SynchronizationAttribute_t2491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C" void SynchronizationAttribute__ctor_m13810 (SynchronizationAttribute_t2491 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C" void SynchronizationAttribute_set_Locked_m13811 (SynchronizationAttribute_t2491 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C" void SynchronizationAttribute_ReleaseLock_m13812 (SynchronizationAttribute_t2491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m13813 (SynchronizationAttribute_t2491 * __this, Object_t * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool SynchronizationAttribute_IsContextOK_m13814 (SynchronizationAttribute_t2491 * __this, Context_t2489 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern "C" void SynchronizationAttribute_ExitContext_m13815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern "C" void SynchronizationAttribute_EnterContext_m13816 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
