#pragma once
#include <stdint.h>
// System.Configuration.PropertyInformation
struct PropertyInformation_t3358;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t3359;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ElementInformation
struct  ElementInformation_t3323  : public Object_t
{
	// System.Configuration.PropertyInformation System.Configuration.ElementInformation::propertyInfo
	PropertyInformation_t3358 * ___propertyInfo_0;
	// System.Configuration.ConfigurationElement System.Configuration.ElementInformation::owner
	ConfigurationElement_t3325 * ___owner_1;
	// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::properties
	PropertyInformationCollection_t3359 * ___properties_2;
};
