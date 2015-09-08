#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t4303;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t4302;

// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m16179 (Authorization_t4303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m16180 (Authorization_t4303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m16181 (Authorization_t4303 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m16182 (Authorization_t4303 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
