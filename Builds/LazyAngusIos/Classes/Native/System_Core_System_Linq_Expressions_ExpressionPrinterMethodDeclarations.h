#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t3772;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t1548;
// System.Linq.Expressions.ElementInit
struct ElementInit_t3771;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3781;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t707;
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
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t3780;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3786;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3785;
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

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" void ExpressionPrinter__ctor_m15099 (ExpressionPrinter_t3772 * __this, StringBuilder_t261 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" void ExpressionPrinter__ctor_m15100 (ExpressionPrinter_t3772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" String_t* ExpressionPrinter_ToString_m15101 (Object_t * __this /* static, unused */, Expression_t1548 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" String_t* ExpressionPrinter_ToString_m15102 (Object_t * __this /* static, unused */, ElementInit_t3771 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" String_t* ExpressionPrinter_ToString_m15103 (Object_t * __this /* static, unused */, MemberBinding_t3781 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" void ExpressionPrinter_Print_m15104 (ExpressionPrinter_t3772 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" void ExpressionPrinter_Print_m15105 (ExpressionPrinter_t3772 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" void ExpressionPrinter_Print_m15106 (ExpressionPrinter_t3772 * __this, String_t* ___str, ObjectU5BU5D_t707* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" void ExpressionPrinter_VisitElementInitializer_m15107 (ExpressionPrinter_t3772 * __this, ElementInit_t3771 * ___initializer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" void ExpressionPrinter_VisitUnary_m15108 (ExpressionPrinter_t3772 * __this, UnaryExpression_t3791 * ___unary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" String_t* ExpressionPrinter_OperatorToString_m15109 (Object_t * __this /* static, unused */, BinaryExpression_t3768 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" bool ExpressionPrinter_IsBoolean_m15110 (Object_t * __this /* static, unused */, Expression_t1548 * ___expression, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_PrintArrayIndex_m15111 (ExpressionPrinter_t3772 * __this, BinaryExpression_t3768 * ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" void ExpressionPrinter_VisitBinary_m15112 (ExpressionPrinter_t3772 * __this, BinaryExpression_t3768 * ___binary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" void ExpressionPrinter_VisitTypeIs_m15113 (ExpressionPrinter_t3772 * __this, TypeBinaryExpression_t3790 * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" void ExpressionPrinter_VisitConstant_m15114 (ExpressionPrinter_t3772 * __this, ConstantExpression_t1554 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" bool ExpressionPrinter_HasStringRepresentation_m15115 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" void ExpressionPrinter_VisitConditional_m15116 (ExpressionPrinter_t3772 * __this, ConditionalExpression_t3769 * ___conditional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" void ExpressionPrinter_VisitParameter_m15117 (ExpressionPrinter_t3772 * __this, ParameterExpression_t3789 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" void ExpressionPrinter_VisitMemberAccess_m15118 (ExpressionPrinter_t3772 * __this, MemberExpression_t1555 * ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" void ExpressionPrinter_VisitMethodCall_m15119 (ExpressionPrinter_t3772 * __this, MethodCallExpression_t1556 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" void ExpressionPrinter_VisitMemberAssignment_m15120 (ExpressionPrinter_t3772 * __this, MemberAssignment_t3780 * ___assignment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" void ExpressionPrinter_VisitMemberMemberBinding_m15121 (ExpressionPrinter_t3772 * __this, MemberMemberBinding_t3786 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" void ExpressionPrinter_VisitMemberListBinding_m15122 (ExpressionPrinter_t3772 * __this, MemberListBinding_t3785 * ___binding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" void ExpressionPrinter_VisitLambda_m15123 (ExpressionPrinter_t3772 * __this, LambdaExpression_t3757 * ___lambda, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" void ExpressionPrinter_VisitNew_m15124 (ExpressionPrinter_t3772 * __this, NewExpression_t3777 * ___nex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" void ExpressionPrinter_VisitMemberInit_m15125 (ExpressionPrinter_t3772 * __this, MemberInitExpression_t3784 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" void ExpressionPrinter_VisitListInit_m15126 (ExpressionPrinter_t3772 * __this, ListInitExpression_t3779 * ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" void ExpressionPrinter_VisitNewArray_m15127 (ExpressionPrinter_t3772 * __this, NewArrayExpression_t3787 * ___newArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" void ExpressionPrinter_VisitInvocation_m15128 (ExpressionPrinter_t3772 * __this, InvocationExpression_t3776 * ___invocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
