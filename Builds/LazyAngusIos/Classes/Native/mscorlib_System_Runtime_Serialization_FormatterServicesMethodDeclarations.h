#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FormatterServices
struct FormatterServices_t5192;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t5226;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern "C" ObjectU5BU5D_t707* FormatterServices_GetObjectData_m22984 (Object_t * __this /* static, unused */, Object_t * ___obj, MemberInfoU5BU5D_t5226* ___members, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" MemberInfoU5BU5D_t5226* FormatterServices_GetSerializableMembers_m22985 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern "C" void FormatterServices_GetFields_m22986 (Object_t * __this /* static, unused */, Type_t * ___reflectedType, Type_t * ___type, ArrayList_t723 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetUninitializedObject_m22987 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetSafeUninitializedObject_m22988 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
