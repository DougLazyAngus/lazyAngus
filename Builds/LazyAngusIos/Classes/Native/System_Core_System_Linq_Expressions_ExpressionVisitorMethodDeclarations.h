#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3279;
// System.Linq.Expressions.Expression
struct Expression_t1470;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3287;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3277;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3297;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3274;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3296;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1476;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3275;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3295;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1477;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1478;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3276;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3286;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3292;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3291;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3289;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3284;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3272;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3283;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3290;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3285;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3293;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3282;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m11411 (ExpressionVisitor_t3279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m11412 (ExpressionVisitor_t3279 * __this, Expression_t1470 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m11413 (ExpressionVisitor_t3279 * __this, MemberBinding_t3287 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m11414 (ExpressionVisitor_t3279 * __this, ElementInit_t3277 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m11415 (ExpressionVisitor_t3279 * __this, UnaryExpression_t3297 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m11416 (ExpressionVisitor_t3279 * __this, BinaryExpression_t3274 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m11417 (ExpressionVisitor_t3279 * __this, TypeBinaryExpression_t3296 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m11418 (ExpressionVisitor_t3279 * __this, ConstantExpression_t1476 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m11419 (ExpressionVisitor_t3279 * __this, ConditionalExpression_t3275 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m11420 (ExpressionVisitor_t3279 * __this, ParameterExpression_t3295 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m11421 (ExpressionVisitor_t3279 * __this, MemberExpression_t1477 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m11422 (ExpressionVisitor_t3279 * __this, MethodCallExpression_t1478 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m11423 (ExpressionVisitor_t3279 * __this, ReadOnlyCollection_1_t3276 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m11424 (ExpressionVisitor_t3279 * __this, MemberAssignment_t3286 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m11425 (ExpressionVisitor_t3279 * __this, MemberMemberBinding_t3292 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m11426 (ExpressionVisitor_t3279 * __this, MemberListBinding_t3291 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m11427 (ExpressionVisitor_t3279 * __this, ReadOnlyCollection_1_t3289 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m11428 (ExpressionVisitor_t3279 * __this, ReadOnlyCollection_1_t3284 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m11429 (ExpressionVisitor_t3279 * __this, LambdaExpression_t3272 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m11430 (ExpressionVisitor_t3279 * __this, NewExpression_t3283 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m11431 (ExpressionVisitor_t3279 * __this, MemberInitExpression_t3290 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m11432 (ExpressionVisitor_t3279 * __this, ListInitExpression_t3285 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m11433 (ExpressionVisitor_t3279 * __this, NewArrayExpression_t3293 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m11434 (ExpressionVisitor_t3279 * __this, InvocationExpression_t3282 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
