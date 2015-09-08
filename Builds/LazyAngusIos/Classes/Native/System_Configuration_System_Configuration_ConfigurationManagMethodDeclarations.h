#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationManager
struct ConfigurationManager_t3330;
// System.Configuration.Internal.IInternalConfigConfigurationFactory
struct IInternalConfigConfigurationFactory_t3374;
// System.Configuration.Internal.IInternalConfigSystem
struct IInternalConfigSystem_t3329;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t787;
// System.Configuration.Configuration
struct Configuration_t3300;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationUserLevel
#include "System_Configuration_System_Configuration_ConfigurationUserL.h"

// System.Void System.Configuration.ConfigurationManager::.cctor()
extern "C" void ConfigurationManager__cctor_m11839 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationManager::GetAssemblyInfo(System.Reflection.Assembly)
extern "C" String_t* ConfigurationManager_GetAssemblyInfo_m11840 (Object_t * __this /* static, unused */, Assembly_t787 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationManager::OpenExeConfigurationInternal(System.Configuration.ConfigurationUserLevel,System.Reflection.Assembly,System.String)
extern "C" Configuration_t3300 * ConfigurationManager_OpenExeConfigurationInternal_m11841 (Object_t * __this /* static, unused */, int32_t ___userLevel, Assembly_t787 * ___calling_assembly, String_t* ___exePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigConfigurationFactory System.Configuration.ConfigurationManager::get_ConfigurationFactory()
extern "C" Object_t * ConfigurationManager_get_ConfigurationFactory_m11842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::get_ConfigurationSystem()
extern "C" Object_t * ConfigurationManager_get_ConfigurationSystem_m11843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern "C" Object_t * ConfigurationManager_GetSection_m11844 (Object_t * __this /* static, unused */, String_t* ___sectionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
