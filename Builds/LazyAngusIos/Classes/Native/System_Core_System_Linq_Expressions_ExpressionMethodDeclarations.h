#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Expression
struct Expression_t1470;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1333;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1478;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t1474;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t3313;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1476;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1477;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3271;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t3314;
// System.Reflection.MethodBase
struct MethodBase_t1475;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3276;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3297;
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C" void Expression__ctor_m11356 (Expression_t1470 * __this, int32_t ___node_type, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C" int32_t Expression_get_NodeType_m11357 (Expression_t1470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C" Type_t * Expression_get_Type_m11358 (Expression_t1470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
extern "C" String_t* Expression_ToString_m11359 (Expression_t1470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
extern "C" bool Expression_IsAssignableToParameterType_m11360 (Object_t * __this /* static, unused */, Type_t * ___type, ParameterInfo_t1333 * ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
extern "C" MethodCallExpression_t1478 * Expression_Call_m7430 (Object_t * __this /* static, unused */, Expression_t1470 * ___instance, MethodInfo_t * ___method, ExpressionU5BU5D_t1474* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C" MethodCallExpression_t1478 * Expression_Call_m11361 (Object_t * __this /* static, unused */, Expression_t1470 * ___instance, MethodInfo_t * ___method, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
extern "C" ConstantExpression_t1476 * Expression_Constant_m7427 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
extern "C" ConstantExpression_t1476 * Expression_Constant_m11362 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.Reflection.FieldInfo)
extern "C" MemberExpression_t1477 * Expression_Field_m7429 (Object_t * __this /* static, unused */, Expression_t1470 * ___expression, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
extern "C" bool Expression_CanAssign_m11363 (Object_t * __this /* static, unused */, Type_t * ___target, Type_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" Expression_t1470 * Expression_CheckLambda_m11364 (Object_t * __this /* static, unused */, Type_t * ___delegateType, Expression_t1470 * ___body, ReadOnlyCollection_1_t3271 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CreateArgumentList(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C" Object_t* Expression_CreateArgumentList_m11365 (Object_t * __this /* static, unused */, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
extern "C" void Expression_CheckNonGenericMethod_m11366 (Object_t * __this /* static, unused */, MethodBase_t1475 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CheckMethodArguments(System.Reflection.MethodBase,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
extern "C" ReadOnlyCollection_1_t3276 * Expression_CheckMethodArguments_m11367 (Object_t * __this /* static, unused */, MethodBase_t1475 * ___method, Object_t* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C" UnaryExpression_t3297 * Expression_Quote_m11368 (Object_t * __this /* static, unused */, Expression_t1470 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
