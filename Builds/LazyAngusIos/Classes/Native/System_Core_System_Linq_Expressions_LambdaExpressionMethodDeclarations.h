#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3273;
// System.Linq.Expressions.Expression
struct Expression_t1471;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t3272;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" void LambdaExpression__ctor_m11359 (LambdaExpression_t3273 * __this, Type_t * ___delegateType, Expression_t1471 * ___body, ReadOnlyCollection_1_t3272 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C" Expression_t1471 * LambdaExpression_get_Body_m7436 (LambdaExpression_t3273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C" ReadOnlyCollection_1_t3272 * LambdaExpression_get_Parameters_m11360 (LambdaExpression_t3273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
