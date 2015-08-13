#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoCMethod
struct MonoCMethod_t4545;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1458;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Exception
struct Exception_t57;
// System.Reflection.Binder
struct Binder_t2953;
// System.Globalization.CultureInfo
struct CultureInfo_t768;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m18051 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t1458* MonoCMethod_GetParameters_m18052 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m18053 (MonoCMethod_t4545 * __this, Object_t * ___obj, ObjectU5BU5D_t682* ___parameters, Exception_t57 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m18054 (MonoCMethod_t4545 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2953 * ___binder, ObjectU5BU5D_t682* ___parameters, CultureInfo_t768 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m18055 (MonoCMethod_t4545 * __this, int32_t ___invokeAttr, Binder_t2953 * ___binder, ObjectU5BU5D_t682* ___parameters, CultureInfo_t768 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4836  MonoCMethod_get_MethodHandle_m18056 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m18057 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m18058 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m18059 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m18060 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m18061 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoCMethod_IsDefined_m18062 (MonoCMethod_t4545 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t682* MonoCMethod_GetCustomAttributes_m18063 (MonoCMethod_t4545 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t682* MonoCMethod_GetCustomAttributes_m18064 (MonoCMethod_t4545 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m18065 (MonoCMethod_t4545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m18066 (MonoCMethod_t4545 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
