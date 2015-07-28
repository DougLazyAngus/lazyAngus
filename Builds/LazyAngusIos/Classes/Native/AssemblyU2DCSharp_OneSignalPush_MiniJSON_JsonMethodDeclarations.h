#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignalPush.MiniJSON.Json
struct Json_t383;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Object OneSignalPush.MiniJSON.Json::Deserialize(System.String)
extern "C" Object_t * Json_Deserialize_m2104 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json::Serialize(System.Object)
extern "C" String_t* Json_Serialize_m2105 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
