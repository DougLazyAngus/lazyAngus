﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Authorization
struct Authorization_t1997;
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t1996;

// System.Void System.Net.Authorization::.ctor(System.String)
extern "C" void Authorization__ctor_m10114 (Authorization_t1997 * __this, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean)
extern "C" void Authorization__ctor_m10115 (Authorization_t1997 * __this, String_t* ___token, bool ___complete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::.ctor(System.String,System.Boolean,System.String)
extern "C" void Authorization__ctor_m10116 (Authorization_t1997 * __this, String_t* ___token, bool ___complete, String_t* ___connectionGroupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Authorization::get_Message()
extern "C" String_t* Authorization_get_Message_m10117 (Authorization_t1997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Authorization::get_Complete()
extern "C" bool Authorization_get_Complete_m10118 (Authorization_t1997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IAuthenticationModule System.Net.Authorization::get_Module()
extern "C" Object_t * Authorization_get_Module_m10119 (Authorization_t1997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Authorization::set_Module(System.Net.IAuthenticationModule)
extern "C" void Authorization_set_Module_m10120 (Authorization_t1997 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
