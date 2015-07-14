#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ANMiniJSON.Json
struct Json_t194;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Object ANMiniJSON.Json::Deserialize(System.String)
extern "C" Object_t * Json_Deserialize_m762 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ANMiniJSON.Json::Serialize(System.Object)
extern "C" String_t* Json_Serialize_m763 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
