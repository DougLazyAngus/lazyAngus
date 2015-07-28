﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t2652;
// System.String
struct String_t;

// System.Void System.Security.SecurityElement/SecurityAttribute::.ctor(System.String,System.String)
extern "C" void SecurityAttribute__ctor_m14717 (SecurityAttribute_t2652 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement/SecurityAttribute::get_Name()
extern "C" String_t* SecurityAttribute_get_Name_m14718 (SecurityAttribute_t2652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement/SecurityAttribute::get_Value()
extern "C" String_t* SecurityAttribute_get_Value_m14719 (SecurityAttribute_t2652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;