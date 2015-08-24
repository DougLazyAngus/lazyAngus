#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterStatus
struct TwitterStatus_t324;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t686;

// System.Void TwitterStatus::.ctor(System.Collections.IDictionary)
extern "C" void TwitterStatus__ctor_m1688 (TwitterStatus_t324 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_rawJSON()
extern "C" String_t* TwitterStatus_get_rawJSON_m1689 (TwitterStatus_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_text()
extern "C" String_t* TwitterStatus_get_text_m1690 (TwitterStatus_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_geo()
extern "C" String_t* TwitterStatus_get_geo_m1691 (TwitterStatus_t324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
