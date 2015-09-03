#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t3328;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3308;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3327;
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C" void ConfigurationProperty__ctor_m11832 (ConfigurationProperty_t3329 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C" void ConfigurationProperty__ctor_m11833 (ConfigurationProperty_t3329 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11834 (ConfigurationProperty_t3329 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11835 (ConfigurationProperty_t3329 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3327 * ___converter, ConfigurationValidatorBase_t3328 * ___validation, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C" void ConfigurationProperty__ctor_m11836 (ConfigurationProperty_t3329 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3327 * ___converter, ConfigurationValidatorBase_t3328 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C" void ConfigurationProperty__cctor_m11837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C" Object_t * ConfigurationProperty_get_DefaultValue_m11838 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C" bool ConfigurationProperty_get_IsKey_m11839 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C" bool ConfigurationProperty_get_IsRequired_m11840 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C" bool ConfigurationProperty_get_IsDefaultCollection_m11841 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C" String_t* ConfigurationProperty_get_Name_m11842 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C" Type_t * ConfigurationProperty_get_Type_m11843 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C" ConfigurationValidatorBase_t3328 * ConfigurationProperty_get_Validator_m11844 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C" Object_t * ConfigurationProperty_ConvertFromString_m11845 (ConfigurationProperty_t3329 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C" String_t* ConfigurationProperty_ConvertToString_m11846 (ConfigurationProperty_t3329 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C" bool ConfigurationProperty_get_IsElement_m11847 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C" ConfigurationCollectionAttribute_t3308 * ConfigurationProperty_get_CollectionAttribute_m11848 (ConfigurationProperty_t3329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C" void ConfigurationProperty_set_CollectionAttribute_m11849 (ConfigurationProperty_t3329 * __this, ConfigurationCollectionAttribute_t3308 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C" void ConfigurationProperty_Validate_m11850 (ConfigurationProperty_t3329 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
