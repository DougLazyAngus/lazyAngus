#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseRemoveOperation
struct ParseRemoveOperation_t1199;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t708;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1374;
// Parse.ParseObject
struct ParseObject_t1219;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseRemoveOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C" void ParseRemoveOperation__ctor_m6558 (ParseRemoveOperation_t1199 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Encode()
extern "C" Object_t * ParseRemoveOperation_Encode_m6559 (ParseRemoveOperation_t1199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRemoveOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseRemoveOperation_MergeWithPrevious_m6560 (ParseRemoveOperation_t1199 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseRemoveOperation_Apply_m6561 (ParseRemoveOperation_t1199 * __this, Object_t * ___oldValue, ParseObject_t1219 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseRemoveOperation::get_Objects()
extern "C" Object_t* ParseRemoveOperation_get_Objects_m6562 (ParseRemoveOperation_t1199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
