#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterStatus
struct TwitterStatus_t256;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t544;

// System.Void TwitterStatus::.ctor(System.Collections.IDictionary)
extern "C" void TwitterStatus__ctor_m1015 (TwitterStatus_t256 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_rawJSON()
extern "C" String_t* TwitterStatus_get_rawJSON_m1016 (TwitterStatus_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_text()
extern "C" String_t* TwitterStatus_get_text_m1017 (TwitterStatus_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_geo()
extern "C" String_t* TwitterStatus_get_geo_m1018 (TwitterStatus_t256 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
