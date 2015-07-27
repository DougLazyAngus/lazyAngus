#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TwitterStatus
struct TwitterStatus_t284;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t585;

// System.Void TwitterStatus::.ctor(System.Collections.IDictionary)
extern "C" void TwitterStatus__ctor_m1417 (TwitterStatus_t284 * __this, Object_t * ___JSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_rawJSON()
extern "C" String_t* TwitterStatus_get_rawJSON_m1418 (TwitterStatus_t284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_text()
extern "C" String_t* TwitterStatus_get_text_m1419 (TwitterStatus_t284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TwitterStatus::get_geo()
extern "C" String_t* TwitterStatus_get_geo_m1420 (TwitterStatus_t284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
