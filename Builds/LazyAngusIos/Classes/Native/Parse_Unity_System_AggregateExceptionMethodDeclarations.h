﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AggregateException
struct AggregateException_t1339;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1338;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1414;
// System.String
struct String_t;

// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern "C" void AggregateException__ctor_m7229 (AggregateException_t1339 * __this, Object_t* ___innerExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C" ReadOnlyCollection_1_t1338 * AggregateException_get_InnerExceptions_m7230 (AggregateException_t1339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C" void AggregateException_set_InnerExceptions_m7231 (AggregateException_t1339 * __this, ReadOnlyCollection_1_t1338 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.AggregateException::Flatten()
extern "C" AggregateException_t1339 * AggregateException_Flatten_m7232 (AggregateException_t1339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AggregateException::ToString()
extern "C" String_t* AggregateException_ToString_m7233 (AggregateException_t1339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
