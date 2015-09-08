#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Permissions.UIPermission
struct UIPermission_t5320;
// System.Security.IPermission
struct IPermission_t5244;
// System.Security.SecurityElement
struct SecurityElement_t4831;
// System.Security.Permissions.UIPermissionClipboard
#include "mscorlib_System_Security_Permissions_UIPermissionClipboard.h"
// System.Security.Permissions.UIPermissionWindow
#include "mscorlib_System_Security_Permissions_UIPermissionWindow.h"
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C" void UIPermission__ctor_m23813 (UIPermission_t5320 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C" void UIPermission__ctor_m23814 (UIPermission_t5320 * __this, int32_t ___windowFlag, int32_t ___clipboardFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Clipboard(System.Security.Permissions.UIPermissionClipboard)
extern "C" void UIPermission_set_Clipboard_m23815 (UIPermission_t5320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Window(System.Security.Permissions.UIPermissionWindow)
extern "C" void UIPermission_set_Window_m23816 (UIPermission_t5320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Copy()
extern "C" Object_t * UIPermission_Copy_m23817 (UIPermission_t5320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::FromXml(System.Security.SecurityElement)
extern "C" void UIPermission_FromXml_m23818 (UIPermission_t5320 * __this, SecurityElement_t4831 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Intersect(System.Security.IPermission)
extern "C" Object_t * UIPermission_Intersect_m23819 (UIPermission_t5320 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool UIPermission_IsSubsetOf_m23820 (UIPermission_t5320 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsUnrestricted()
extern "C" bool UIPermission_IsUnrestricted_m23821 (UIPermission_t5320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UIPermission::ToXml()
extern "C" SecurityElement_t4831 * UIPermission_ToXml_m23822 (UIPermission_t5320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Union(System.Security.IPermission)
extern "C" Object_t * UIPermission_Union_m23823 (UIPermission_t5320 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsEmpty(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C" bool UIPermission_IsEmpty_m23824 (UIPermission_t5320 * __this, int32_t ___w, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UIPermission System.Security.Permissions.UIPermission::Cast(System.Security.IPermission)
extern "C" UIPermission_t5320 * UIPermission_Cast_m23825 (UIPermission_t5320 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
