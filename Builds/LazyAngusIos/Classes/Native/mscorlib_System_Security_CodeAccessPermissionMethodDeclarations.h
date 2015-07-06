#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t2614;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t2628;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2315;
// System.Type
struct Type_t;

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C" void CodeAccessPermission__ctor_m14522 (CodeAccessPermission_t2614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C" bool CodeAccessPermission_Equals_m14523 (CodeAccessPermission_t2614 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C" int32_t CodeAccessPermission_GetHashCode_m14524 (CodeAccessPermission_t2614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::IsSubsetOf(System.Security.IPermission)
// System.String System.Security.CodeAccessPermission::ToString()
extern "C" String_t* CodeAccessPermission_ToString_m14525 (CodeAccessPermission_t2614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::ToXml()
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C" SecurityElement_t2315 * CodeAccessPermission_Element_m14526 (CodeAccessPermission_t2614 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C" void CodeAccessPermission_ThrowInvalidPermission_m14527 (Object_t * __this /* static, unused */, Object_t * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
