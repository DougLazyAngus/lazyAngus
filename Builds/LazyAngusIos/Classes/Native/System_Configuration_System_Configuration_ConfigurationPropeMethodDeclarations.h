#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3340;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t3339;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3319;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3338;
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C" void ConfigurationProperty__ctor_m11902 (ConfigurationProperty_t3340 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C" void ConfigurationProperty__ctor_m11903 (ConfigurationProperty_t3340 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11904 (ConfigurationProperty_t3340 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11905 (ConfigurationProperty_t3340 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3338 * ___converter, ConfigurationValidatorBase_t3339 * ___validation, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C" void ConfigurationProperty__ctor_m11906 (ConfigurationProperty_t3340 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3338 * ___converter, ConfigurationValidatorBase_t3339 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C" void ConfigurationProperty__cctor_m11907 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C" Object_t * ConfigurationProperty_get_DefaultValue_m11908 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C" bool ConfigurationProperty_get_IsKey_m11909 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C" bool ConfigurationProperty_get_IsRequired_m11910 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C" bool ConfigurationProperty_get_IsDefaultCollection_m11911 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C" String_t* ConfigurationProperty_get_Name_m11912 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C" Type_t * ConfigurationProperty_get_Type_m11913 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C" ConfigurationValidatorBase_t3339 * ConfigurationProperty_get_Validator_m11914 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C" Object_t * ConfigurationProperty_ConvertFromString_m11915 (ConfigurationProperty_t3340 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C" String_t* ConfigurationProperty_ConvertToString_m11916 (ConfigurationProperty_t3340 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C" bool ConfigurationProperty_get_IsElement_m11917 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C" ConfigurationCollectionAttribute_t3319 * ConfigurationProperty_get_CollectionAttribute_m11918 (ConfigurationProperty_t3340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C" void ConfigurationProperty_set_CollectionAttribute_m11919 (ConfigurationProperty_t3340 * __this, ConfigurationCollectionAttribute_t3319 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C" void ConfigurationProperty_Validate_m11920 (ConfigurationProperty_t3340 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
