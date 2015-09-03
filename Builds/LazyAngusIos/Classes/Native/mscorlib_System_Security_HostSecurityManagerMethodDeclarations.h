#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.HostSecurityManager
struct HostSecurityManager_t5227;
// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Reflection.Assembly
struct Assembly_t783;
// System.Security.HostSecurityManagerOptions
#include "mscorlib_System_Security_HostSecurityManagerOptions.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C" void HostSecurityManager__ctor_m23139 (HostSecurityManager_t5227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C" int32_t HostSecurityManager_get_Flags_m23140 (HostSecurityManager_t5227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C" Evidence_t4832 * HostSecurityManager_ProvideAssemblyEvidence_m23141 (HostSecurityManager_t5227 * __this, Assembly_t783 * ___loadedAssembly, Evidence_t4832 * ___inputEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
