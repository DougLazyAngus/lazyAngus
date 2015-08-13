#pragma once
#include <stdint.h>
// System.Linq.Expressions.NewExpression
struct NewExpression_t3330;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3331;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t3332  : public Expression_t1520
{
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t3330 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t3331 * ___initializers_3;
};
