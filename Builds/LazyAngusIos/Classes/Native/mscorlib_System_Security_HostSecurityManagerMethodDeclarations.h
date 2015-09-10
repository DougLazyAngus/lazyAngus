#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.HostSecurityManager
struct HostSecurityManager_t5238;
// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Reflection.Assembly
struct Assembly_t794;
// System.Security.HostSecurityManagerOptions
#include "mscorlib_System_Security_HostSecurityManagerOptions.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C" void HostSecurityManager__ctor_m23209 (HostSecurityManager_t5238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C" int32_t HostSecurityManager_get_Flags_m23210 (HostSecurityManager_t5238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C" Evidence_t4843 * HostSecurityManager_ProvideAssemblyEvidence_m23211 (HostSecurityManager_t5238 * __this, Assembly_t794 * ___loadedAssembly, Evidence_t4843 * ___inputEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
