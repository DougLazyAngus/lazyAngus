#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3333;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t3332;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3312;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3331;
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C" void ConfigurationProperty__ctor_m11845 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C" void ConfigurationProperty__ctor_m11846 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11847 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11848 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3331 * ___converter, ConfigurationValidatorBase_t3332 * ___validation, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C" void ConfigurationProperty__ctor_m11849 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3331 * ___converter, ConfigurationValidatorBase_t3332 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C" void ConfigurationProperty__cctor_m11850 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C" Object_t * ConfigurationProperty_get_DefaultValue_m11851 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C" bool ConfigurationProperty_get_IsKey_m11852 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C" bool ConfigurationProperty_get_IsRequired_m11853 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C" bool ConfigurationProperty_get_IsDefaultCollection_m11854 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C" String_t* ConfigurationProperty_get_Name_m11855 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C" Type_t * ConfigurationProperty_get_Type_m11856 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C" ConfigurationValidatorBase_t3332 * ConfigurationProperty_get_Validator_m11857 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C" Object_t * ConfigurationProperty_ConvertFromString_m11858 (ConfigurationProperty_t3333 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C" String_t* ConfigurationProperty_ConvertToString_m11859 (ConfigurationProperty_t3333 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C" bool ConfigurationProperty_get_IsElement_m11860 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C" ConfigurationCollectionAttribute_t3312 * ConfigurationProperty_get_CollectionAttribute_m11861 (ConfigurationProperty_t3333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C" void ConfigurationProperty_set_CollectionAttribute_m11862 (ConfigurationProperty_t3333 * __this, ConfigurationCollectionAttribute_t3312 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C" void ConfigurationProperty_Validate_m11863 (ConfigurationProperty_t3333 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
