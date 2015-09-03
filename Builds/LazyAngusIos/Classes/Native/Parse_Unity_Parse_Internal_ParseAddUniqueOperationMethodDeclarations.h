#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseAddUniqueOperation
struct ParseAddUniqueOperation_t1207;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t724;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1393;
// Parse.ParseObject
struct ParseObject_t1238;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseAddUniqueOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C" void ParseAddUniqueOperation__ctor_m6624 (ParseAddUniqueOperation_t1207 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Encode()
extern "C" Object_t * ParseAddUniqueOperation_Encode_m6625 (ParseAddUniqueOperation_t1207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseAddUniqueOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseAddUniqueOperation_MergeWithPrevious_m6626 (ParseAddUniqueOperation_t1207 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseAddUniqueOperation_Apply_m6627 (ParseAddUniqueOperation_t1207 * __this, Object_t * ___oldValue, ParseObject_t1238 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseAddUniqueOperation::get_Objects()
extern "C" Object_t* ParseAddUniqueOperation_get_Objects_m6628 (ParseAddUniqueOperation_t1207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
