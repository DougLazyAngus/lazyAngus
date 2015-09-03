#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongName
struct StrongName_t5341;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t5313;
// System.Version
struct Version_t1401;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.StrongName::.ctor(System.Security.Permissions.StrongNamePublicKeyBlob,System.String,System.Version)
extern "C" void StrongName__ctor_m23993 (StrongName_t5341 * __this, StrongNamePublicKeyBlob_t5313 * ___blob, String_t* ___name, Version_t1401 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::get_Name()
extern "C" String_t* StrongName_get_Name_m23994 (StrongName_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t5313 * StrongName_get_PublicKey_m23995 (StrongName_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C" Version_t1401 * StrongName_get_Version_m23996 (StrongName_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.StrongName::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * StrongName_CreateIdentityPermission_m23997 (StrongName_t5341 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C" bool StrongName_Equals_m23998 (StrongName_t5341 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C" int32_t StrongName_GetHashCode_m23999 (StrongName_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C" String_t* StrongName_ToString_m24000 (StrongName_t5341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
