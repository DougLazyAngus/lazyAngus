#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3768;
// System.Linq.Expressions.Expression
struct Expression_t1548;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3757;

// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C" Expression_t1548 * BinaryExpression_get_Left_m15088 (BinaryExpression_t3768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C" Expression_t1548 * BinaryExpression_get_Right_m15089 (BinaryExpression_t3768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C" LambdaExpression_t3757 * BinaryExpression_get_Conversion_m15090 (BinaryExpression_t3768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
