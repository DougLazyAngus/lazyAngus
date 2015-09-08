#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3330;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigi.h"
// System.Configuration.PropertyInformation
struct  PropertyInformation_t3348  : public Object_t
{
	// System.Boolean System.Configuration.PropertyInformation::isModified
	bool ___isModified_0;
	// System.Object System.Configuration.PropertyInformation::val
	Object_t * ___val_1;
	// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::origin
	int32_t ___origin_2;
	// System.Configuration.ConfigurationElement System.Configuration.PropertyInformation::owner
	ConfigurationElement_t3315 * ___owner_3;
	// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::property
	ConfigurationProperty_t3330 * ___property_4;
};
