#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseAddOperation
struct ParseAddOperation_t1207;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t728;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1397;
// Parse.ParseObject
struct ParseObject_t1242;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseAddOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C" void ParseAddOperation__ctor_m6629 (ParseAddOperation_t1207 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddOperation::Encode()
extern "C" Object_t * ParseAddOperation_Encode_m6630 (ParseAddOperation_t1207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseAddOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseAddOperation_MergeWithPrevious_m6631 (ParseAddOperation_t1207 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseAddOperation_Apply_m6632 (ParseAddOperation_t1207 * __this, Object_t * ___oldValue, ParseObject_t1242 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseAddOperation::get_Objects()
extern "C" Object_t* ParseAddOperation_get_Objects_m6633 (ParseAddOperation_t1207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
