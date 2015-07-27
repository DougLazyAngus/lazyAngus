#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.FBBuildVersionAttribute
struct FBBuildVersionAttribute_t385;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Facebook.FBBuildVersionAttribute[]
struct FBBuildVersionAttributeU5BU5D_t596;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.FBBuildVersionAttribute::.ctor(System.String,System.String)
extern "C" void FBBuildVersionAttribute__ctor_m2006 (FBBuildVersionAttribute_t385 * __this, String_t* ___sdkVersion, String_t* ___buildVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.FBBuildVersionAttribute::get_Date()
extern "C" DateTime_t247  FBBuildVersionAttribute_get_Date_m2007 (FBBuildVersionAttribute_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_Hash()
extern "C" String_t* FBBuildVersionAttribute_get_Hash_m2008 (FBBuildVersionAttribute_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_SdkVersion()
extern "C" String_t* FBBuildVersionAttribute_get_SdkVersion_m2009 (FBBuildVersionAttribute_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_BuildVersion()
extern "C" String_t* FBBuildVersionAttribute_get_BuildVersion_m2010 (FBBuildVersionAttribute_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::ToString()
extern "C" String_t* FBBuildVersionAttribute_ToString_m2011 (FBBuildVersionAttribute_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.FBBuildVersionAttribute Facebook.FBBuildVersionAttribute::GetVersionAttributeOfType(System.Type)
extern "C" FBBuildVersionAttribute_t385 * FBBuildVersionAttribute_GetVersionAttributeOfType_m2012 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.FBBuildVersionAttribute[] Facebook.FBBuildVersionAttribute::getAttributes(System.Type)
extern "C" FBBuildVersionAttributeU5BU5D_t596* FBBuildVersionAttribute_getAttributes_m2013 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
