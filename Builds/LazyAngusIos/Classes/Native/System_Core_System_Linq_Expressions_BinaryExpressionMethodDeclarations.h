#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t3757;
// System.Linq.Expressions.Expression
struct Expression_t1537;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3746;

// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C" Expression_t1537 * BinaryExpression_get_Left_m15018 (BinaryExpression_t3757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C" Expression_t1537 * BinaryExpression_get_Right_m15019 (BinaryExpression_t3757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C" LambdaExpression_t3746 * BinaryExpression_get_Conversion_m15020 (BinaryExpression_t3757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
