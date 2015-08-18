#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t4740;
// System.Security.PermissionSet
struct PermissionSet_t4528;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m18983 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m18984 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t4528 * SecurityManager_Decode_m18985 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t4528 * SecurityManager_Decode_m18986 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
