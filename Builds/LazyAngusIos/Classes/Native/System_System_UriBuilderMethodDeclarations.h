#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriBuilder
struct UriBuilder_t4547;
// System.String
struct String_t;
// System.Uri
struct Uri_t782;
// System.Object
struct Object_t;

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C" void UriBuilder__ctor_m17970 (UriBuilder_t4547 * __this, Uri_t782 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C" void UriBuilder_set_Host_m17971 (UriBuilder_t4547 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C" Uri_t782 * UriBuilder_get_Uri_m17972 (UriBuilder_t4547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C" bool UriBuilder_Equals_m17973 (UriBuilder_t4547 * __this, Object_t * ___rparam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C" int32_t UriBuilder_GetHashCode_m17974 (UriBuilder_t4547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C" String_t* UriBuilder_ToString_m17975 (UriBuilder_t4547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
