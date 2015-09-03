#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriBuilder
struct UriBuilder_t4536;
// System.String
struct String_t;
// System.Uri
struct Uri_t771;
// System.Object
struct Object_t;

// System.Void System.UriBuilder::.ctor(System.Uri)
extern "C" void UriBuilder__ctor_m17900 (UriBuilder_t4536 * __this, Uri_t771 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriBuilder::set_Host(System.String)
extern "C" void UriBuilder_set_Host_m17901 (UriBuilder_t4536 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.UriBuilder::get_Uri()
extern "C" Uri_t771 * UriBuilder_get_Uri_m17902 (UriBuilder_t4536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C" bool UriBuilder_Equals_m17903 (UriBuilder_t4536 * __this, Object_t * ___rparam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriBuilder::GetHashCode()
extern "C" int32_t UriBuilder_GetHashCode_m17904 (UriBuilder_t4536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriBuilder::ToString()
extern "C" String_t* UriBuilder_ToString_m17905 (UriBuilder_t4536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
