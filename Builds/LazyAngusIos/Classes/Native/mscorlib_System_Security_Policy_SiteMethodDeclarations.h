#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Site
struct Site_t5351;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t5251;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Object
struct Object_t;

// System.Void System.Security.Policy.Site::.ctor(System.String)
extern "C" void Site__ctor_m24054 (Site_t5351 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Site System.Security.Policy.Site::CreateFromUrl(System.String)
extern "C" Site_t5351 * Site_CreateFromUrl_m24055 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Site::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C" Object_t * Site_CreateIdentityPermission_m24056 (Site_t5351 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::Equals(System.Object)
extern "C" bool Site_Equals_m24057 (Site_t5351 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Site::GetHashCode()
extern "C" int32_t Site_GetHashCode_m24058 (Site_t5351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::ToString()
extern "C" String_t* Site_ToString_m24059 (Site_t5351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::get_Name()
extern "C" String_t* Site_get_Name_m24060 (Site_t5351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Site::IsValid(System.String)
extern "C" bool Site_IsValid_m24061 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Site::UrlToSite(System.String)
extern "C" String_t* Site_UrlToSite_m24062 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
