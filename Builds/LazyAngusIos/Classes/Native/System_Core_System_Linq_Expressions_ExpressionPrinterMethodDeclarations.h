#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3279;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t1471;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3278;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3288;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t638;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3298;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3275;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3297;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1477;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3276;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3296;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1478;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1479;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3287;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3293;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3292;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3273;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3284;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3291;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3286;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3294;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3283;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m11389 (ExpressionPrinter_t3279 * __this, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m11390 (ExpressionPrinter_t3279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m11391 (Object_t * __this /* static, unused */, Expression_t1471 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m11392 (Object_t * __this /* static, unused */, ElementInit_t3278 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m11393 (Object_t * __this /* static, unused */, MemberBinding_t3288 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m11394 (ExpressionPrinter_t3279 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m11395 (ExpressionPrinter_t3279 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m11396 (ExpressionPrinter_t3279 * __this, String_t* ___str, ObjectU5BU5D_t638* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m11397 (ExpressionPrinter_t3279 * __this, ElementInit_t3278 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m11398 (ExpressionPrinter_t3279 * __this, UnaryExpression_t3298 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m11399 (Object_t * __this /* static, unused */, BinaryExpression_t3275 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m11400 (Object_t * __this /* static, unused */, Expression_t1471 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m11401 (ExpressionPrinter_t3279 * __this, BinaryExpression_t3275 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m11402 (ExpressionPrinter_t3279 * __this, BinaryExpression_t3275 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m11403 (ExpressionPrinter_t3279 * __this, TypeBinaryExpression_t3297 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m11404 (ExpressionPrinter_t3279 * __this, ConstantExpression_t1477 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m11405 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m11406 (ExpressionPrinter_t3279 * __this, ConditionalExpression_t3276 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m11407 (ExpressionPrinter_t3279 * __this, ParameterExpression_t3296 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m11408 (ExpressionPrinter_t3279 * __this, MemberExpression_t1478 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m11409 (ExpressionPrinter_t3279 * __this, MethodCallExpression_t1479 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m11410 (ExpressionPrinter_t3279 * __this, MemberAssignment_t3287 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m11411 (ExpressionPrinter_t3279 * __this, MemberMemberBinding_t3293 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m11412 (ExpressionPrinter_t3279 * __this, MemberListBinding_t3292 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m11413 (ExpressionPrinter_t3279 * __this, LambdaExpression_t3273 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m11414 (ExpressionPrinter_t3279 * __this, NewExpression_t3284 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m11415 (ExpressionPrinter_t3279 * __this, MemberInitExpression_t3291 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m11416 (ExpressionPrinter_t3279 * __this, ListInitExpression_t3286 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m11417 (ExpressionPrinter_t3279 * __this, NewArrayExpression_t3294 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m11418 (ExpressionPrinter_t3279 * __this, InvocationExpression_t3283 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
