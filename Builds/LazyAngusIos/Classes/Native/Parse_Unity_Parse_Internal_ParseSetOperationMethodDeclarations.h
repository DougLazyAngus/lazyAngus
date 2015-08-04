#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseSetOperation
struct ParseSetOperation_t1149;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1325;
// Parse.ParseObject
struct ParseObject_t1168;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseSetOperation::.ctor(System.Object)
extern "C" void ParseSetOperation__ctor_m6315 (ParseSetOperation_t1149 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::Encode()
extern "C" Object_t * ParseSetOperation_Encode_m6316 (ParseSetOperation_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseSetOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseSetOperation_MergeWithPrevious_m6317 (ParseSetOperation_t1149 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseSetOperation_Apply_m6318 (ParseSetOperation_t1149 * __this, Object_t * ___oldValue, ParseObject_t1168 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseSetOperation::get_Value()
extern "C" Object_t * ParseSetOperation_get_Value_m6319 (ParseSetOperation_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseSetOperation::set_Value(System.Object)
extern "C" void ParseSetOperation_set_Value_m6320 (ParseSetOperation_t1149 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
