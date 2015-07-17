#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.MiniJSON.Json
struct Json_t411;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void Facebook.MiniJSON.Json::.cctor()
extern "C" void Json__cctor_m2237 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
extern "C" Object_t * Json_Deserialize_m2238 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json::Serialize(System.Object)
extern "C" String_t* Json_Serialize_m2239 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
