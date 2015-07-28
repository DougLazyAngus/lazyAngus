#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.HttpMethod
struct HttpMethod_t448;
// System.String
struct String_t;

// System.Void Facebook.HttpMethod::.ctor(System.String)
extern "C" void HttpMethod__ctor_m2483 (HttpMethod_t448 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.HttpMethod::.cctor()
extern "C" void HttpMethod__cctor_m2484 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.HttpMethod Facebook.HttpMethod::get_GET()
extern "C" HttpMethod_t448 * HttpMethod_get_GET_m2485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.HttpMethod Facebook.HttpMethod::get_POST()
extern "C" HttpMethod_t448 * HttpMethod_get_POST_m2486 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.HttpMethod Facebook.HttpMethod::get_DELETE()
extern "C" HttpMethod_t448 * HttpMethod_get_DELETE_m2487 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.HttpMethod::ToString()
extern "C" String_t* HttpMethod_ToString_m2488 (HttpMethod_t448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
