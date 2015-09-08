#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Extensions
struct Extensions_t3768;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

// System.Boolean System.Linq.Expressions.Extensions::IsGenericInstanceOf(System.Type,System.Type)
extern "C" bool Extensions_IsGenericInstanceOf_m15096 (Object_t * __this /* static, unused */, Type_t * ___self, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsNullable(System.Type)
extern "C" bool Extensions_IsNullable_m15097 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsExpression(System.Type)
extern "C" bool Extensions_IsExpression_m15098 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsAssignableTo(System.Type,System.Type)
extern "C" bool Extensions_IsAssignableTo_m15099 (Object_t * __this /* static, unused */, Type_t * ___self, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetFirstGenericArgument(System.Type)
extern "C" Type_t * Extensions_GetFirstGenericArgument_m15100 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetNotNullableType(System.Type)
extern "C" Type_t * Extensions_GetNotNullableType_m15101 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Extensions::GetInvokeMethod(System.Type)
extern "C" MethodInfo_t * Extensions_GetInvokeMethod_m15102 (Object_t * __this /* static, unused */, Type_t * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::ArrayTypeIsAssignableTo(System.Type,System.Type)
extern "C" bool Extensions_ArrayTypeIsAssignableTo_m15103 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___candidate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
