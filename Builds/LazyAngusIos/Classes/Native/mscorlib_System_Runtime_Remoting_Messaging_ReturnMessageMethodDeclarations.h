#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ReturnMessage
struct ReturnMessage_t5185;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t5174;
// System.Reflection.MethodBase
struct MethodBase_t1553;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t710;
// System.Exception
struct Exception_t57;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t5439;

// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m22934 (ReturnMessage_t5185 * __this, Object_t * ___ret, ObjectU5BU5D_t707* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t5174 * ___callCtx, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern "C" void ReturnMessage__ctor_m22935 (ReturnMessage_t5185 * __this, Exception_t57 * ___e, Object_t * ___mcm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936 (ReturnMessage_t5185 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_ArgCount()
extern "C" int32_t ReturnMessage_get_ArgCount_m22937 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t707* ReturnMessage_get_Args_m22938 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t5174 * ReturnMessage_get_LogicalCallContext_m22939 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t1553 * ReturnMessage_get_MethodBase_m22940 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m22941 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern "C" Object_t * ReturnMessage_get_MethodSignature_m22942 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern "C" Object_t * ReturnMessage_get_Properties_m22943 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m22944 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m22945 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m22946 (ReturnMessage_t5185 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::GetArg(System.Int32)
extern "C" Object_t * ReturnMessage_GetArg_m22947 (ReturnMessage_t5185 * __this, int32_t ___argNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t57 * ReturnMessage_get_Exception_m22948 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgCount()
extern "C" int32_t ReturnMessage_get_OutArgCount_m22949 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t707* ReturnMessage_get_OutArgs_m22950 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m22951 (ReturnMessage_t5185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
