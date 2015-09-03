#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t4302;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t4301;

// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m16166 (Authorization_t4302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m16167 (Authorization_t4302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m16168 (Authorization_t4302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m16169 (Authorization_t4302 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
