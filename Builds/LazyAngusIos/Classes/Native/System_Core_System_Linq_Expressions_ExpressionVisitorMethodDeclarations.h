#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3327;
// System.Linq.Expressions.Expression
struct Expression_t1521;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3335;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3325;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3345;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3322;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3344;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1527;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3323;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3343;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1528;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1529;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3324;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3334;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3340;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3339;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3337;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3332;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3320;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3331;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3338;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3333;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3341;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3330;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m11683 (ExpressionVisitor_t3327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m11684 (ExpressionVisitor_t3327 * __this, Expression_t1521 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m11685 (ExpressionVisitor_t3327 * __this, MemberBinding_t3335 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m11686 (ExpressionVisitor_t3327 * __this, ElementInit_t3325 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m11687 (ExpressionVisitor_t3327 * __this, UnaryExpression_t3345 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m11688 (ExpressionVisitor_t3327 * __this, BinaryExpression_t3322 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m11689 (ExpressionVisitor_t3327 * __this, TypeBinaryExpression_t3344 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m11690 (ExpressionVisitor_t3327 * __this, ConstantExpression_t1527 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m11691 (ExpressionVisitor_t3327 * __this, ConditionalExpression_t3323 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m11692 (ExpressionVisitor_t3327 * __this, ParameterExpression_t3343 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m11693 (ExpressionVisitor_t3327 * __this, MemberExpression_t1528 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m11694 (ExpressionVisitor_t3327 * __this, MethodCallExpression_t1529 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m11695 (ExpressionVisitor_t3327 * __this, ReadOnlyCollection_1_t3324 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m11696 (ExpressionVisitor_t3327 * __this, MemberAssignment_t3334 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m11697 (ExpressionVisitor_t3327 * __this, MemberMemberBinding_t3340 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m11698 (ExpressionVisitor_t3327 * __this, MemberListBinding_t3339 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m11699 (ExpressionVisitor_t3327 * __this, ReadOnlyCollection_1_t3337 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m11700 (ExpressionVisitor_t3327 * __this, ReadOnlyCollection_1_t3332 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m11701 (ExpressionVisitor_t3327 * __this, LambdaExpression_t3320 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m11702 (ExpressionVisitor_t3327 * __this, NewExpression_t3331 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m11703 (ExpressionVisitor_t3327 * __this, MemberInitExpression_t3338 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m11704 (ExpressionVisitor_t3327 * __this, ListInitExpression_t3333 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m11705 (ExpressionVisitor_t3327 * __this, NewArrayExpression_t3341 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m11706 (ExpressionVisitor_t3327 * __this, InvocationExpression_t3330 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
