﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t1464;
// System.Linq.Expressions.Expression
struct Expression_t1461;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3261;

// System.Void System.Linq.Expressions.Expression`1<System.Object>::.ctor(System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" void Expression_1__ctor_m33863_gshared (Expression_1_t1464 * __this, Expression_t1461 * ___body, ReadOnlyCollection_1_t3261 * ___parameters, const MethodInfo* method);
#define Expression_1__ctor_m33863(__this, ___body, ___parameters, method) (( void (*) (Expression_1_t1464 *, Expression_t1461 *, ReadOnlyCollection_1_t3261 *, const MethodInfo*))Expression_1__ctor_m33863_gshared)(__this, ___body, ___parameters, method)
