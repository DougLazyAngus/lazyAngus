#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3758;
// System.Linq.Expressions.Expression
struct Expression_t1538;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3747;

// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C" Expression_t1538 * BinaryExpression_get_Left_m15031 (BinaryExpression_t3758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C" Expression_t1538 * BinaryExpression_get_Right_m15032 (BinaryExpression_t3758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C" LambdaExpression_t3747 * BinaryExpression_get_Conversion_m15033 (BinaryExpression_t3758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
