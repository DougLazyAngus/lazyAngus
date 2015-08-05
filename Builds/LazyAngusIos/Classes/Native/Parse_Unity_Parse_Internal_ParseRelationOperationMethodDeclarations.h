#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.ParseRelationOperation
struct ParseRelationOperation_t1149;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t661;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1216;
// System.Object
struct Object_t;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1327;
// Parse.ParseObject
struct ParseObject_t1170;

// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.String>,System.String)
extern "C" void ParseRelationOperation__ctor_m6314 (ParseRelationOperation_t1149 * __this, Object_t* ___adds, Object_t* ___removes, String_t* ___targetClassName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseRelationOperation::.ctor(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>,System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
extern "C" void ParseRelationOperation__ctor_m6315 (ParseRelationOperation_t1149 * __this, Object_t* ___adds, Object_t* ___removes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Encode()
extern "C" Object_t * ParseRelationOperation_Encode_m6316 (ParseRelationOperation_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.Internal.ParseRelationOperation::MergeWithPrevious(Parse.Internal.IParseFieldOperation)
extern "C" Object_t * ParseRelationOperation_MergeWithPrevious_m6317 (ParseRelationOperation_t1149 * __this, Object_t * ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::Apply(System.Object,Parse.ParseObject,System.String)
extern "C" Object_t * ParseRelationOperation_Apply_m6318 (ParseRelationOperation_t1149 * __this, Object_t * ___oldValue, ParseObject_t1170 * ___obj, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::get_TargetClassName()
extern "C" String_t* ParseRelationOperation_get_TargetClassName_m6319 (ParseRelationOperation_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.ParseRelationOperation::IdsFromObjects(System.Collections.Generic.IEnumerable`1<Parse.ParseObject>)
extern "C" Object_t* ParseRelationOperation_IdsFromObjects_m6320 (ParseRelationOperation_t1149 * __this, Object_t* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::<.ctor>b__0(Parse.ParseObject)
extern "C" String_t* ParseRelationOperation_U3C_ctorU3Eb__0_m6321 (Object_t * __this /* static, unused */, ParseObject_t1170 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__5(System.String)
extern "C" Object_t * ParseRelationOperation_U3CEncodeU3Eb__5_m6322 (ParseRelationOperation_t1149 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.ParseRelationOperation::<Encode>b__6(System.String)
extern "C" Object_t * ParseRelationOperation_U3CEncodeU3Eb__6_m6323 (ParseRelationOperation_t1149 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.ParseRelationOperation::<IdsFromObjects>b__7(Parse.ParseObject)
extern "C" String_t* ParseRelationOperation_U3CIdsFromObjectsU3Eb__7_m6324 (Object_t * __this /* static, unused */, ParseObject_t1170 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
