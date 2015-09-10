#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3338;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t3339;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3319;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"
// System.Configuration.ConfigurationProperty
struct  ConfigurationProperty_t3340  : public Object_t
{
	// System.String System.Configuration.ConfigurationProperty::name
	String_t* ___name_1;
	// System.Type System.Configuration.ConfigurationProperty::type
	Type_t * ___type_2;
	// System.Object System.Configuration.ConfigurationProperty::default_value
	Object_t * ___default_value_3;
	// System.ComponentModel.TypeConverter System.Configuration.ConfigurationProperty::converter
	TypeConverter_t3338 * ___converter_4;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::validation
	ConfigurationValidatorBase_t3339 * ___validation_5;
	// System.Configuration.ConfigurationPropertyOptions System.Configuration.ConfigurationProperty::flags
	int32_t ___flags_6;
	// System.String System.Configuration.ConfigurationProperty::description
	String_t* ___description_7;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::collectionAttribute
	ConfigurationCollectionAttribute_t3319 * ___collectionAttribute_8;
};
struct ConfigurationProperty_t3340_StaticFields{
	// System.Object System.Configuration.ConfigurationProperty::NoDefaultValue
	Object_t * ___NoDefaultValue_0;
};
