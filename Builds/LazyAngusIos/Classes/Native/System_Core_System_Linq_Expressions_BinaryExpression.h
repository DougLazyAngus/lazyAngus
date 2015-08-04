#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1469;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3271;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t3273  : public Expression_t1469
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t1469 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t1469 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t3271 * ___conversion_4;
};
