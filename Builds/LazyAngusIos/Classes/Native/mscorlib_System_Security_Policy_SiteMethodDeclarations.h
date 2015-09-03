#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Site
struct Site_t5340;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5240;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.Site::.ctor(System.String)
extern "C" void Site__ctor_m23984 (Site_t5340 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Site System.Security.Policy.Site::CreateFromUrl(System.String)
extern "C" Site_t5340 * Site_CreateFromUrl_m23985 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Site::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * Site_CreateIdentityPermission_m23986 (Site_t5340 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::Equals(System.Object)
extern "C" bool Site_Equals_m23987 (Site_t5340 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Site::GetHashCode()
extern "C" int32_t Site_GetHashCode_m23988 (Site_t5340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::ToString()
extern "C" String_t* Site_ToString_m23989 (Site_t5340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::get_Name()
extern "C" String_t* Site_get_Name_m23990 (Site_t5340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::IsValid(System.String)
extern "C" bool Site_IsValid_m23991 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::UrlToSite(System.String)
extern "C" String_t* Site_UrlToSite_m23992 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
