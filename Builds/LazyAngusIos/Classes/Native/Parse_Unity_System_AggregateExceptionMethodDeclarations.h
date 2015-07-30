#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AggregateException
struct AggregateException_t1285;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t1284;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t1360;
// System.String
struct String_t;

// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern "C" void AggregateException__ctor_m6936 (AggregateException_t1285 * __this, Object_t* ___innerExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C" ReadOnlyCollection_1_t1284 * AggregateException_get_InnerExceptions_m6937 (AggregateException_t1285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C" void AggregateException_set_InnerExceptions_m6938 (AggregateException_t1285 * __this, ReadOnlyCollection_1_t1284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.AggregateException::Flatten()
extern "C" AggregateException_t1285 * AggregateException_Flatten_m6939 (AggregateException_t1285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AggregateException::ToString()
extern "C" String_t* AggregateException_ToString_m6940 (AggregateException_t1285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
