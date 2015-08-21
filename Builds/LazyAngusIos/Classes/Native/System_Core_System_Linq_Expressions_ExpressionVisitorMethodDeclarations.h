#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3324;
// System.Linq.Expressions.Expression
struct Expression_t1518;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3332;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3322;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3342;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3319;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3341;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1524;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3320;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3340;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1525;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1526;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3321;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3331;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3337;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3336;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3334;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3329;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3317;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3328;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3335;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3330;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3338;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3327;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m11650 (ExpressionVisitor_t3324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m11651 (ExpressionVisitor_t3324 * __this, Expression_t1518 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m11652 (ExpressionVisitor_t3324 * __this, MemberBinding_t3332 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m11653 (ExpressionVisitor_t3324 * __this, ElementInit_t3322 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m11654 (ExpressionVisitor_t3324 * __this, UnaryExpression_t3342 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m11655 (ExpressionVisitor_t3324 * __this, BinaryExpression_t3319 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m11656 (ExpressionVisitor_t3324 * __this, TypeBinaryExpression_t3341 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m11657 (ExpressionVisitor_t3324 * __this, ConstantExpression_t1524 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m11658 (ExpressionVisitor_t3324 * __this, ConditionalExpression_t3320 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m11659 (ExpressionVisitor_t3324 * __this, ParameterExpression_t3340 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m11660 (ExpressionVisitor_t3324 * __this, MemberExpression_t1525 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m11661 (ExpressionVisitor_t3324 * __this, MethodCallExpression_t1526 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m11662 (ExpressionVisitor_t3324 * __this, ReadOnlyCollection_1_t3321 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m11663 (ExpressionVisitor_t3324 * __this, MemberAssignment_t3331 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m11664 (ExpressionVisitor_t3324 * __this, MemberMemberBinding_t3337 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m11665 (ExpressionVisitor_t3324 * __this, MemberListBinding_t3336 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m11666 (ExpressionVisitor_t3324 * __this, ReadOnlyCollection_1_t3334 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m11667 (ExpressionVisitor_t3324 * __this, ReadOnlyCollection_1_t3329 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m11668 (ExpressionVisitor_t3324 * __this, LambdaExpression_t3317 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m11669 (ExpressionVisitor_t3324 * __this, NewExpression_t3328 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m11670 (ExpressionVisitor_t3324 * __this, MemberInitExpression_t3335 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m11671 (ExpressionVisitor_t3324 * __this, ListInitExpression_t3330 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m11672 (ExpressionVisitor_t3324 * __this, NewArrayExpression_t3338 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m11673 (ExpressionVisitor_t3324 * __this, InvocationExpression_t3327 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
