#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3276;
// System.Linq.Expressions.Expression
struct Expression_t1467;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3284;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3274;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3294;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3271;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3293;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1473;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3272;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3292;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1474;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1475;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3273;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3283;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3289;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3288;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3286;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3281;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3269;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3280;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3287;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3282;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3290;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3279;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m11388 (ExpressionVisitor_t3276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m11389 (ExpressionVisitor_t3276 * __this, Expression_t1467 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m11390 (ExpressionVisitor_t3276 * __this, MemberBinding_t3284 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m11391 (ExpressionVisitor_t3276 * __this, ElementInit_t3274 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m11392 (ExpressionVisitor_t3276 * __this, UnaryExpression_t3294 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m11393 (ExpressionVisitor_t3276 * __this, BinaryExpression_t3271 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m11394 (ExpressionVisitor_t3276 * __this, TypeBinaryExpression_t3293 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m11395 (ExpressionVisitor_t3276 * __this, ConstantExpression_t1473 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m11396 (ExpressionVisitor_t3276 * __this, ConditionalExpression_t3272 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m11397 (ExpressionVisitor_t3276 * __this, ParameterExpression_t3292 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m11398 (ExpressionVisitor_t3276 * __this, MemberExpression_t1474 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m11399 (ExpressionVisitor_t3276 * __this, MethodCallExpression_t1475 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m11400 (ExpressionVisitor_t3276 * __this, ReadOnlyCollection_1_t3273 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m11401 (ExpressionVisitor_t3276 * __this, MemberAssignment_t3283 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m11402 (ExpressionVisitor_t3276 * __this, MemberMemberBinding_t3289 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m11403 (ExpressionVisitor_t3276 * __this, MemberListBinding_t3288 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m11404 (ExpressionVisitor_t3276 * __this, ReadOnlyCollection_1_t3286 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m11405 (ExpressionVisitor_t3276 * __this, ReadOnlyCollection_1_t3281 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m11406 (ExpressionVisitor_t3276 * __this, LambdaExpression_t3269 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m11407 (ExpressionVisitor_t3276 * __this, NewExpression_t3280 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m11408 (ExpressionVisitor_t3276 * __this, MemberInitExpression_t3287 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m11409 (ExpressionVisitor_t3276 * __this, ListInitExpression_t3282 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m11410 (ExpressionVisitor_t3276 * __this, NewArrayExpression_t3290 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m11411 (ExpressionVisitor_t3276 * __this, InvocationExpression_t3279 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
