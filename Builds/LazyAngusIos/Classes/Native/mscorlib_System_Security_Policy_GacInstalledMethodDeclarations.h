﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.GacInstalled
struct GacInstalled_t5332;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.Security.Policy.GacInstalled::.ctor()
extern "C" void GacInstalled__ctor_m23923 (GacInstalled_t5332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.GacInstalled::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * GacInstalled_CreateIdentityPermission_m23924 (GacInstalled_t5332 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.GacInstalled::Equals(System.Object)
extern "C" bool GacInstalled_Equals_m23925 (GacInstalled_t5332 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.GacInstalled::GetHashCode()
extern "C" int32_t GacInstalled_GetHashCode_m23926 (GacInstalled_t5332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.GacInstalled::ToString()
extern "C" String_t* GacInstalled_ToString_m23927 (GacInstalled_t5332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;