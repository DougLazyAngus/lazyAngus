#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1548;
// System.Linq.Expressions.Expression
struct Expression_t1541;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.MemberExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MemberInfo,System.Type)
extern "C" void MemberExpression__ctor_m15112 (MemberExpression_t1548 * __this, Expression_t1541 * ___expression, MemberInfo_t * ___member, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C" Expression_t1541 * MemberExpression_get_Expression_m15113 (MemberExpression_t1548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C" MemberInfo_t * MemberExpression_get_Member_m15114 (MemberExpression_t1548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
