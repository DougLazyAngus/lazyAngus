#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t5164;
// System.Collections.IDictionary
struct IDictionary_t710;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t5174;
// System.Reflection.MethodBase
struct MethodBase_t1553;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"

// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern "C" Object_t * MonoMethodMessage_get_Properties_m22909 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern "C" int32_t MonoMethodMessage_get_ArgCount_m22910 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t707* MonoMethodMessage_get_Args_m22911 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t5174 * MonoMethodMessage_get_LogicalCallContext_m22912 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t1553 * MonoMethodMessage_get_MethodBase_m22913 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C" String_t* MonoMethodMessage_get_MethodName_m22914 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m22915 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C" String_t* MonoMethodMessage_get_TypeName_m22916 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m22917 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m22918 (MonoMethodMessage_t5164 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern "C" Object_t * MonoMethodMessage_GetArg_m22919 (MonoMethodMessage_t5164 * __this, int32_t ___arg_num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t57 * MonoMethodMessage_get_Exception_m22920 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m22921 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t707* MonoMethodMessage_get_OutArgs_m22922 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m22923 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern "C" int32_t MonoMethodMessage_get_CallType_m22924 (MonoMethodMessage_t5164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
