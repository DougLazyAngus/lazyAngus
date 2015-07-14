#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ANMiniJSON.Json/Serializer
struct Serializer_t193;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t534;
// System.Collections.IList
struct IList_t535;

// System.Void ANMiniJSON.Json/Serializer::.ctor()
extern "C" void Serializer__ctor_m755 (Serializer_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ANMiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" String_t* Serializer_Serialize_m756 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" void Serializer_SerializeValue_m757 (Serializer_t193 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" void Serializer_SerializeObject_m758 (Serializer_t193 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" void Serializer_SerializeArray_m759 (Serializer_t193 * __this, Object_t * ___anArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" void Serializer_SerializeString_m760 (Serializer_t193 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ANMiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" void Serializer_SerializeOther_m761 (Serializer_t193 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
