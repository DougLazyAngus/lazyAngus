#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3322;
// System.Linq.Expressions.Expression
struct Expression_t1521;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3320;

// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C" Expression_t1521 * BinaryExpression_get_Left_m11642 (BinaryExpression_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C" Expression_t1521 * BinaryExpression_get_Right_m11643 (BinaryExpression_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C" LambdaExpression_t3320 * BinaryExpression_get_Conversion_m11644 (BinaryExpression_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
