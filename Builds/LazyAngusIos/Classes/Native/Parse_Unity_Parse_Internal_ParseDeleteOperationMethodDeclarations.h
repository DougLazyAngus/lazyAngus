#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseDeleteOperation
struct ParseDeleteOperation_t1136;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1323;
// Parse.ParseObject
struct ParseObject_t1166;
// System.String
struct String_t;

// Parse.Internal.ParseDeleteOperation Parse.Internal.ParseDeleteOperation::get_Instance()
extern "C" ParseDeleteOperation_t1136 * ParseDeleteOperation_get_Instance_m6200 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseDeleteOperation::.ctor()
extern "C" void ParseDeleteOperation__ctor_m6201 (ParseDeleteOperation_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDeleteOperation::Encode()
extern "C" Object_t * ParseDeleteOperation_Encode_m6202 (ParseDeleteOperation_t1136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseDeleteOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseDeleteOperation_MergeWithPrevious_m6203 (ParseDeleteOperation_t1136 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseDeleteOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseDeleteOperation_Apply_m6204 (ParseDeleteOperation_t1136 * __this, Object_t * ___oldValue, ParseObject_t1166 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseDeleteOperation::.cctor()
extern "C" void ParseDeleteOperation__cctor_m6205 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
