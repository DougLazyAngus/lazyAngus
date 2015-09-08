#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ElementMap
struct ElementMap_t3310;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3311;
// System.Type
struct Type_t;

// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern "C" void ElementMap__ctor_m11754 (ElementMap_t3310 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementMap::.cctor()
extern "C" void ElementMap__cctor_m11755 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern "C" ElementMap_t3310 * ElementMap_GetMap_m11756 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C" ConfigurationPropertyCollection_t3311 * ElementMap_get_Properties_m11757 (ElementMap_t3310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
