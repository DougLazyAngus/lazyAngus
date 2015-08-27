﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseAddUniqueOperation
struct ParseAddUniqueOperation_t1191;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t711;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1377;
// Parse.ParseObject
struct ParseObject_t1222;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseAddUniqueOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C" void ParseAddUniqueOperation__ctor_m6488 (ParseAddUniqueOperation_t1191 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Encode()
extern "C" Object_t * ParseAddUniqueOperation_Encode_m6489 (ParseAddUniqueOperation_t1191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseAddUniqueOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseAddUniqueOperation_MergeWithPrevious_m6490 (ParseAddUniqueOperation_t1191 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseAddUniqueOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseAddUniqueOperation_Apply_m6491 (ParseAddUniqueOperation_t1191 * __this, Object_t * ___oldValue, ParseObject_t1222 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseAddUniqueOperation::get_Objects()
extern "C" Object_t* ParseAddUniqueOperation_get_Objects_m6492 (ParseAddUniqueOperation_t1191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
