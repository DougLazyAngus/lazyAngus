﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ElementMap
struct ElementMap_t3309;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Type
struct Type_t;

// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern "C" void ElementMap__ctor_m11741 (ElementMap_t3309 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementMap::.cctor()
extern "C" void ElementMap__cctor_m11742 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern "C" ElementMap_t3309 * ElementMap_GetMap_m11743 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * ElementMap_get_Properties_m11744 (ElementMap_t3309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;