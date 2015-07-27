#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OneSignalPush.MiniJSON.Json/Serializer
struct Serializer_t342;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t585;
// System.Collections.IList
struct IList_t586;

// System.Void OneSignalPush.MiniJSON.Json/Serializer::.ctor()
extern "C" void Serializer__ctor_m1826 (Serializer_t342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" String_t* Serializer_Serialize_m1827 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" void Serializer_SerializeValue_m1828 (Serializer_t342 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" void Serializer_SerializeObject_m1829 (Serializer_t342 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" void Serializer_SerializeArray_m1830 (Serializer_t342 * __this, Object_t * ___anArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" void Serializer_SerializeString_m1831 (Serializer_t342 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" void Serializer_SerializeOther_m1832 (Serializer_t342 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
