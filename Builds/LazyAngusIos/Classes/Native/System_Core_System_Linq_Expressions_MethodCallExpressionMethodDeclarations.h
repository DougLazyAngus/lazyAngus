#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1475;
// System.Linq.Expressions.Expression
struct Expression_t1467;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3273;

// System.Void System.Linq.Expressions.MethodCallExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" void MethodCallExpression__ctor_m11435 (MethodCallExpression_t1475 * __this, Expression_t1467 * ___obj, MethodInfo_t * ___method, ReadOnlyCollection_1_t3273 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::get_Object()
extern "C" Expression_t1467 * MethodCallExpression_get_Object_m11436 (MethodCallExpression_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::get_Method()
extern "C" MethodInfo_t * MethodCallExpression_get_Method_m7412 (MethodCallExpression_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::get_Arguments()
extern "C" ReadOnlyCollection_1_t3273 * MethodCallExpression_get_Arguments_m11437 (MethodCallExpression_t1475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
