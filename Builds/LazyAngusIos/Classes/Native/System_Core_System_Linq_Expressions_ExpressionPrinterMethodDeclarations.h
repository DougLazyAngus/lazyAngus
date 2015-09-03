#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3761;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t1537;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3760;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3770;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3780;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3757;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t3779;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1543;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t3758;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3778;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1544;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1545;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3769;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3775;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3774;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3746;
// System.Linq.Expressions.NewExpression
struct NewExpression_t3766;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t3773;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t3768;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t3776;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3765;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m15029 (ExpressionPrinter_t3761 * __this, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m15030 (ExpressionPrinter_t3761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m15031 (Object_t * __this /* static, unused */, Expression_t1537 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m15032 (Object_t * __this /* static, unused */, ElementInit_t3760 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m15033 (Object_t * __this /* static, unused */, MemberBinding_t3770 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m15034 (ExpressionPrinter_t3761 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m15035 (ExpressionPrinter_t3761 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m15036 (ExpressionPrinter_t3761 * __this, String_t* ___str, ObjectU5BU5D_t696* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m15037 (ExpressionPrinter_t3761 * __this, ElementInit_t3760 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m15038 (ExpressionPrinter_t3761 * __this, UnaryExpression_t3780 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m15039 (Object_t * __this /* static, unused */, BinaryExpression_t3757 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m15040 (Object_t * __this /* static, unused */, Expression_t1537 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m15041 (ExpressionPrinter_t3761 * __this, BinaryExpression_t3757 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m15042 (ExpressionPrinter_t3761 * __this, BinaryExpression_t3757 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m15043 (ExpressionPrinter_t3761 * __this, TypeBinaryExpression_t3779 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m15044 (ExpressionPrinter_t3761 * __this, ConstantExpression_t1543 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m15045 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m15046 (ExpressionPrinter_t3761 * __this, ConditionalExpression_t3758 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m15047 (ExpressionPrinter_t3761 * __this, ParameterExpression_t3778 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m15048 (ExpressionPrinter_t3761 * __this, MemberExpression_t1544 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m15049 (ExpressionPrinter_t3761 * __this, MethodCallExpression_t1545 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m15050 (ExpressionPrinter_t3761 * __this, MemberAssignment_t3769 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m15051 (ExpressionPrinter_t3761 * __this, MemberMemberBinding_t3775 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m15052 (ExpressionPrinter_t3761 * __this, MemberListBinding_t3774 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m15053 (ExpressionPrinter_t3761 * __this, LambdaExpression_t3746 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m15054 (ExpressionPrinter_t3761 * __this, NewExpression_t3766 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m15055 (ExpressionPrinter_t3761 * __this, MemberInitExpression_t3773 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m15056 (ExpressionPrinter_t3761 * __this, ListInitExpression_t3768 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m15057 (ExpressionPrinter_t3761 * __this, NewArrayExpression_t3776 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m15058 (ExpressionPrinter_t3761 * __this, InvocationExpression_t3765 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
