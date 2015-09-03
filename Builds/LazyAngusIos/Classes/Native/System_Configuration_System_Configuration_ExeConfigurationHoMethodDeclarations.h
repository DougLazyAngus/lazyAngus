#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ExeConfigurationHost
struct ExeConfigurationHost_t3354;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t3351;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.String
struct String_t;

// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C" void ExeConfigurationHost__ctor_m11950 (ExeConfigurationHost_t3354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C" void ExeConfigurationHost_Init_m11951 (ExeConfigurationHost_t3354 * __this, Object_t * ___root, ObjectU5BU5D_t696* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern "C" String_t* ExeConfigurationHost_GetStreamName_m11952 (ExeConfigurationHost_t3354 * __this, String_t* ___configPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C" void ExeConfigurationHost_InitForConfiguration_m11953 (ExeConfigurationHost_t3354 * __this, String_t** ___locationSubPath, String_t** ___configPath, String_t** ___locationConfigPath, Object_t * ___root, ObjectU5BU5D_t696* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
