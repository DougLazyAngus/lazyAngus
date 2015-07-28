﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3261;
// System.Linq.Expressions.Expression
struct Expression_t1460;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3260;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" void LambdaExpression__ctor_m11284 (LambdaExpression_t3261 * __this, Type_t * ___delegateType, Expression_t1460 * ___body, ReadOnlyCollection_1_t3260 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C" Expression_t1460 * LambdaExpression_get_Body_m7365 (LambdaExpression_t3261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C" ReadOnlyCollection_1_t3260 * LambdaExpression_get_Parameters_m11285 (LambdaExpression_t3261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;