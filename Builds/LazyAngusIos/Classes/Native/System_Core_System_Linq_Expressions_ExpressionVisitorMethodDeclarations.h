#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3343;
// System.Linq.Expressions.Expression
struct Expression_t1537;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3351;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3341;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3361;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3338;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3360;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1543;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3339;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3359;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1544;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1545;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3340;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3350;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3356;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3355;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3353;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3348;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3336;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3347;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3354;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3349;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3357;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3346;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m11812 (ExpressionVisitor_t3343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m11813 (ExpressionVisitor_t3343 * __this, Expression_t1537 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m11814 (ExpressionVisitor_t3343 * __this, MemberBinding_t3351 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m11815 (ExpressionVisitor_t3343 * __this, ElementInit_t3341 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m11816 (ExpressionVisitor_t3343 * __this, UnaryExpression_t3361 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m11817 (ExpressionVisitor_t3343 * __this, BinaryExpression_t3338 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m11818 (ExpressionVisitor_t3343 * __this, TypeBinaryExpression_t3360 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m11819 (ExpressionVisitor_t3343 * __this, ConstantExpression_t1543 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m11820 (ExpressionVisitor_t3343 * __this, ConditionalExpression_t3339 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m11821 (ExpressionVisitor_t3343 * __this, ParameterExpression_t3359 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m11822 (ExpressionVisitor_t3343 * __this, MemberExpression_t1544 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m11823 (ExpressionVisitor_t3343 * __this, MethodCallExpression_t1545 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m11824 (ExpressionVisitor_t3343 * __this, ReadOnlyCollection_1_t3340 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m11825 (ExpressionVisitor_t3343 * __this, MemberAssignment_t3350 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m11826 (ExpressionVisitor_t3343 * __this, MemberMemberBinding_t3356 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m11827 (ExpressionVisitor_t3343 * __this, MemberListBinding_t3355 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m11828 (ExpressionVisitor_t3343 * __this, ReadOnlyCollection_1_t3353 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m11829 (ExpressionVisitor_t3343 * __this, ReadOnlyCollection_1_t3348 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m11830 (ExpressionVisitor_t3343 * __this, LambdaExpression_t3336 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m11831 (ExpressionVisitor_t3343 * __this, NewExpression_t3347 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m11832 (ExpressionVisitor_t3343 * __this, MemberInitExpression_t3354 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m11833 (ExpressionVisitor_t3343 * __this, ListInitExpression_t3349 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m11834 (ExpressionVisitor_t3343 * __this, NewArrayExpression_t3357 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m11835 (ExpressionVisitor_t3343 * __this, InvocationExpression_t3346 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
