﻿#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1461;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3266;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t1469  : public Expression_t1461
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t1461 * ___obj_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t * ___method_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t3266 * ___arguments_4;
};
