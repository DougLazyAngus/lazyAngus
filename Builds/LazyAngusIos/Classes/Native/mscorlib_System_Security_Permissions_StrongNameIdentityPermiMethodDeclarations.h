#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t5325;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5324;
// System.String
struct String_t;
// System.Version
struct Version_t1412;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP
#include "mscorlib_System_Security_Permissions_StrongNameIdentityPermi.h"

// System.Void System.Security.Permissions.StrongNameIdentityPermission/SNIP::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void SNIP__ctor_m23839 (SNIP_t5325 * __this, StrongNamePublicKeyBlob_t5324 * ___pk, String_t* ___name, Version_t1412 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNameIdentityPermission/SNIP System.Security.Permissions.StrongNameIdentityPermission/SNIP::CreateDefault()
extern "C" SNIP_t5325  SNIP_CreateDefault_m23840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsNameSubsetOf(System.String)
extern "C" bool SNIP_IsNameSubsetOf_m23841 (SNIP_t5325 * __this, String_t* ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.StrongNameIdentityPermission/SNIP::IsSubsetOf(System.Security.Permissions.StrongNameIdentityPermission/SNIP)
extern "C" bool SNIP_IsSubsetOf_m23842 (SNIP_t5325 * __this, SNIP_t5325  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
