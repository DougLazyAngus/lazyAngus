﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseRemoveOperation
struct ParseRemoveOperation_t1140;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t652;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1317;
// Parse.ParseObject
struct ParseObject_t1160;
// System.String
struct String_t;

// System.Void Parse.Internal.ParseRemoveOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.Object>)
extern "C" void ParseRemoveOperation__ctor_m6249 (ParseRemoveOperation_t1140 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Encode()
extern "C" Object_t * ParseRemoveOperation_Encode_m6250 (ParseRemoveOperation_t1140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRemoveOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseRemoveOperation_MergeWithPrevious_m6251 (ParseRemoveOperation_t1140 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRemoveOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseRemoveOperation_Apply_m6252 (ParseRemoveOperation_t1140 * __this, Object_t * ___oldValue, ParseObject_t1160 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.Internal.ParseRemoveOperation::get_Objects()
extern "C" Object_t* ParseRemoveOperation_get_Objects_m6253 (ParseRemoveOperation_t1140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
