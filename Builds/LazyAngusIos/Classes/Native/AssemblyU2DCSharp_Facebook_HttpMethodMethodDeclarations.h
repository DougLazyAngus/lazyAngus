#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.HttpMethod
struct HttpMethod_t408;
// System.String
struct String_t;

// System.Void Facebook.HttpMethod::.ctor(System.String)
extern "C" void HttpMethod__ctor_m2212 (HttpMethod_t408 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.HttpMethod::.cctor()
extern "C" void HttpMethod__cctor_m2213 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.HttpMethod Facebook.HttpMethod::get_GET()
extern "C" HttpMethod_t408 * HttpMethod_get_GET_m2214 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.HttpMethod Facebook.HttpMethod::get_POST()
extern "C" HttpMethod_t408 * HttpMethod_get_POST_m2215 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.HttpMethod Facebook.HttpMethod::get_DELETE()
extern "C" HttpMethod_t408 * HttpMethod_get_DELETE_m2216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.HttpMethod::ToString()
extern "C" String_t* HttpMethod_ToString_m2217 (HttpMethod_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
