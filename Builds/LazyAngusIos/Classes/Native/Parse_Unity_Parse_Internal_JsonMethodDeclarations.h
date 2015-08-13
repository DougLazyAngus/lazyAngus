#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.Json
struct Json_t1180;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1375;
// System.Text.RegularExpressions.Match
struct Match_t1374;

// System.Object Parse.Internal.Json::Parse(System.String)
extern "C" Object_t * Json_Parse_m6445 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* Json_Encode_m6446 (Object_t * __this /* static, unused */, Object_t* ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Collections.Generic.IList`1<System.Object>)
extern "C" String_t* Json_Encode_m6447 (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::Encode(System.Object)
extern "C" String_t* Json_Encode_m6448 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json::.ctor()
extern "C" void Json__ctor_m6449 (Json_t1180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.Json::<Encode>b__0(System.Text.RegularExpressions.Match)
extern "C" String_t* Json_U3CEncodeU3Eb__0_m6450 (Object_t * __this /* static, unused */, Match_t1374 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.Json::.cctor()
extern "C" void Json__cctor_m6451 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
