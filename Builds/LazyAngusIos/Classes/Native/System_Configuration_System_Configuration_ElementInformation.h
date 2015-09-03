#pragma once
#include <stdint.h>
// System.Configuration.PropertyInformation
struct PropertyInformation_t3347;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t3348;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ElementInformation
struct  ElementInformation_t3312  : public Object_t
{
	// System.Configuration.PropertyInformation System.Configuration.ElementInformation::propertyInfo
	PropertyInformation_t3347 * ___propertyInfo_0;
	// System.Configuration.ConfigurationElement System.Configuration.ElementInformation::owner
	ConfigurationElement_t3314 * ___owner_1;
	// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::properties
	PropertyInformationCollection_t3348 * ___properties_2;
};
