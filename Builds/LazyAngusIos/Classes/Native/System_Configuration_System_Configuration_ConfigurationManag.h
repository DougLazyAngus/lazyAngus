#pragma once
#include <stdint.h>
// System.Configuration.InternalConfigurationFactory
struct InternalConfigurationFactory_t3325;
// System.Configuration.Internal.IInternalConfigSystem
struct IInternalConfigSystem_t3326;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationManager
struct  ConfigurationManager_t3327  : public Object_t
{
};
struct ConfigurationManager_t3327_StaticFields{
	// System.Configuration.InternalConfigurationFactory System.Configuration.ConfigurationManager::configFactory
	InternalConfigurationFactory_t3325 * ___configFactory_0;
	// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::configSystem
	Object_t * ___configSystem_1;
	// System.Object System.Configuration.ConfigurationManager::lockobj
	Object_t * ___lockobj_2;
};
