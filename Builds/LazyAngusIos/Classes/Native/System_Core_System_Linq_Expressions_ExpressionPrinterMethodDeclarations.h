#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3325;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t1520;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3324;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3334;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t682;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3344;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3321;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3343;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1526;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3322;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3342;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1527;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1528;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3333;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3339;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3338;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3319;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3330;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3337;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3332;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3340;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3329;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m11631 (ExpressionPrinter_t3325 * __this, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m11632 (ExpressionPrinter_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m11633 (Object_t * __this /* static, unused */, Expression_t1520 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m11634 (Object_t * __this /* static, unused */, ElementInit_t3324 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m11635 (Object_t * __this /* static, unused */, MemberBinding_t3334 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m11636 (ExpressionPrinter_t3325 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m11637 (ExpressionPrinter_t3325 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m11638 (ExpressionPrinter_t3325 * __this, String_t* ___str, ObjectU5BU5D_t682* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m11639 (ExpressionPrinter_t3325 * __this, ElementInit_t3324 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m11640 (ExpressionPrinter_t3325 * __this, UnaryExpression_t3344 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m11641 (Object_t * __this /* static, unused */, BinaryExpression_t3321 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m11642 (Object_t * __this /* static, unused */, Expression_t1520 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m11643 (ExpressionPrinter_t3325 * __this, BinaryExpression_t3321 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m11644 (ExpressionPrinter_t3325 * __this, BinaryExpression_t3321 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m11645 (ExpressionPrinter_t3325 * __this, TypeBinaryExpression_t3343 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m11646 (ExpressionPrinter_t3325 * __this, ConstantExpression_t1526 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m11647 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m11648 (ExpressionPrinter_t3325 * __this, ConditionalExpression_t3322 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m11649 (ExpressionPrinter_t3325 * __this, ParameterExpression_t3342 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m11650 (ExpressionPrinter_t3325 * __this, MemberExpression_t1527 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m11651 (ExpressionPrinter_t3325 * __this, MethodCallExpression_t1528 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m11652 (ExpressionPrinter_t3325 * __this, MemberAssignment_t3333 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m11653 (ExpressionPrinter_t3325 * __this, MemberMemberBinding_t3339 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m11654 (ExpressionPrinter_t3325 * __this, MemberListBinding_t3338 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m11655 (ExpressionPrinter_t3325 * __this, LambdaExpression_t3319 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m11656 (ExpressionPrinter_t3325 * __this, NewExpression_t3330 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m11657 (ExpressionPrinter_t3325 * __this, MemberInitExpression_t3337 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m11658 (ExpressionPrinter_t3325 * __this, ListInitExpression_t3332 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m11659 (ExpressionPrinter_t3325 * __this, NewArrayExpression_t3340 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m11660 (ExpressionPrinter_t3325 * __this, InvocationExpression_t3329 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
