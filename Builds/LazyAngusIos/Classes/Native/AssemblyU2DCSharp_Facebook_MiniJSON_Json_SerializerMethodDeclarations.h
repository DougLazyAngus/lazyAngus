#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.MiniJSON.Json/Serializer
struct Serializer_t409;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t584;
// System.Collections.IList
struct IList_t585;

// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
extern "C" void Serializer__ctor_m2230 (Serializer_t409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" String_t* Serializer_Serialize_m2231 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" void Serializer_SerializeValue_m2232 (Serializer_t409 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" void Serializer_SerializeObject_m2233 (Serializer_t409 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" void Serializer_SerializeArray_m2234 (Serializer_t409 * __this, Object_t * ___anArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" void Serializer_SerializeString_m2235 (Serializer_t409 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" void Serializer_SerializeOther_m2236 (Serializer_t409 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
