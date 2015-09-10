#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3773;
// System.Linq.Expressions.Expression
struct Expression_t1548;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3781;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3771;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3791;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3768;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3790;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1554;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3769;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3789;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1555;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1556;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3770;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3780;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3786;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3785;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3783;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3778;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3757;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3777;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3784;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3779;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3787;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3776;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m15129 (ExpressionVisitor_t3773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m15130 (ExpressionVisitor_t3773 * __this, Expression_t1548 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m15131 (ExpressionVisitor_t3773 * __this, MemberBinding_t3781 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m15132 (ExpressionVisitor_t3773 * __this, ElementInit_t3771 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m15133 (ExpressionVisitor_t3773 * __this, UnaryExpression_t3791 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m15134 (ExpressionVisitor_t3773 * __this, BinaryExpression_t3768 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m15135 (ExpressionVisitor_t3773 * __this, TypeBinaryExpression_t3790 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m15136 (ExpressionVisitor_t3773 * __this, ConstantExpression_t1554 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m15137 (ExpressionVisitor_t3773 * __this, ConditionalExpression_t3769 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m15138 (ExpressionVisitor_t3773 * __this, ParameterExpression_t3789 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m15139 (ExpressionVisitor_t3773 * __this, MemberExpression_t1555 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m15140 (ExpressionVisitor_t3773 * __this, MethodCallExpression_t1556 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m15141 (ExpressionVisitor_t3773 * __this, ReadOnlyCollection_1_t3770 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m15142 (ExpressionVisitor_t3773 * __this, MemberAssignment_t3780 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m15143 (ExpressionVisitor_t3773 * __this, MemberMemberBinding_t3786 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m15144 (ExpressionVisitor_t3773 * __this, MemberListBinding_t3785 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m15145 (ExpressionVisitor_t3773 * __this, ReadOnlyCollection_1_t3783 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m15146 (ExpressionVisitor_t3773 * __this, ReadOnlyCollection_1_t3778 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m15147 (ExpressionVisitor_t3773 * __this, LambdaExpression_t3757 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m15148 (ExpressionVisitor_t3773 * __this, NewExpression_t3777 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m15149 (ExpressionVisitor_t3773 * __this, MemberInitExpression_t3784 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m15150 (ExpressionVisitor_t3773 * __this, ListInitExpression_t3779 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m15151 (ExpressionVisitor_t3773 * __this, NewArrayExpression_t3787 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m15152 (ExpressionVisitor_t3773 * __this, InvocationExpression_t3776 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
