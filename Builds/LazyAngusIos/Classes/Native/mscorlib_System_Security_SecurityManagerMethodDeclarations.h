﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t2712;
// System.Security.PermissionSet
struct PermissionSet_t2497;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m15341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m15342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t2497 * SecurityManager_Decode_m15343 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t2497 * SecurityManager_Decode_m15344 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
