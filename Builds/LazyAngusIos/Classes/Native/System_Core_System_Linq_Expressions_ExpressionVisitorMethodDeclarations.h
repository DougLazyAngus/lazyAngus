#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t3763;
// System.Linq.Expressions.Expression
struct Expression_t1538;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3771;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3761;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3781;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3758;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3780;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1544;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3759;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3779;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1545;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1546;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3760;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3770;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3776;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3775;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t3773;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3768;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3747;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3767;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3774;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3769;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3777;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3766;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" void ExpressionVisitor__ctor_m15072 (ExpressionVisitor_t3763 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" void ExpressionVisitor_Visit_m15073 (ExpressionVisitor_t3763 * __this, Expression_t1538 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" void ExpressionVisitor_VisitBinding_m15074 (ExpressionVisitor_t3763 * __this, MemberBinding_t3771 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionVisitor_VisitElementInitializer_m15075 (ExpressionVisitor_t3763 * __this, ElementInit_t3761 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionVisitor_VisitUnary_m15076 (ExpressionVisitor_t3763 * __this, UnaryExpression_t3781 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionVisitor_VisitBinary_m15077 (ExpressionVisitor_t3763 * __this, BinaryExpression_t3758 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionVisitor_VisitTypeIs_m15078 (ExpressionVisitor_t3763 * __this, TypeBinaryExpression_t3780 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionVisitor_VisitConstant_m15079 (ExpressionVisitor_t3763 * __this, ConstantExpression_t1544 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionVisitor_VisitConditional_m15080 (ExpressionVisitor_t3763 * __this, ConditionalExpression_t3759 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionVisitor_VisitParameter_m15081 (ExpressionVisitor_t3763 * __this, ParameterExpression_t3779 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionVisitor_VisitMemberAccess_m15082 (ExpressionVisitor_t3763 * __this, MemberExpression_t1545 * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionVisitor_VisitMethodCall_m15083 (ExpressionVisitor_t3763 * __this, MethodCallExpression_t1546 * ___methodCall, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void ExpressionVisitor_VisitExpressionList_m15084 (ExpressionVisitor_t3763 * __this, ReadOnlyCollection_1_t3760 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionVisitor_VisitMemberAssignment_m15085 (ExpressionVisitor_t3763 * __this, MemberAssignment_t3770 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionVisitor_VisitMemberMemberBinding_m15086 (ExpressionVisitor_t3763 * __this, MemberMemberBinding_t3776 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionVisitor_VisitMemberListBinding_m15087 (ExpressionVisitor_t3763 * __this, MemberListBinding_t3775 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" void ExpressionVisitor_VisitBindingList_m15088 (ExpressionVisitor_t3763 * __this, ReadOnlyCollection_1_t3773 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" void ExpressionVisitor_VisitElementInitializerList_m15089 (ExpressionVisitor_t3763 * __this, ReadOnlyCollection_1_t3768 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionVisitor_VisitLambda_m15090 (ExpressionVisitor_t3763 * __this, LambdaExpression_t3747 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionVisitor_VisitNew_m15091 (ExpressionVisitor_t3763 * __this, NewExpression_t3767 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionVisitor_VisitMemberInit_m15092 (ExpressionVisitor_t3763 * __this, MemberInitExpression_t3774 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionVisitor_VisitListInit_m15093 (ExpressionVisitor_t3763 * __this, ListInitExpression_t3769 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionVisitor_VisitNewArray_m15094 (ExpressionVisitor_t3763 * __this, NewArrayExpression_t3777 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionVisitor_VisitInvocation_m15095 (ExpressionVisitor_t3763 * __this, InvocationExpression_t3766 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
