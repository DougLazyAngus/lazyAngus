#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.PropertyInformation
struct PropertyInformation_t3358;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3340;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigi.h"

// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C" void PropertyInformation__ctor_m12026 (PropertyInformation_t3358 * __this, ConfigurationElement_t3325 * ___owner, ConfigurationProperty_t3340 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C" Object_t * PropertyInformation_get_DefaultValue_m12027 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C" bool PropertyInformation_get_IsKey_m12028 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C" bool PropertyInformation_get_IsModified_m12029 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C" void PropertyInformation_set_IsModified_m12030 (PropertyInformation_t3358 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C" bool PropertyInformation_get_IsRequired_m12031 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C" String_t* PropertyInformation_get_Name_m12032 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C" Type_t * PropertyInformation_get_Type_m12033 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_Value()
extern "C" Object_t * PropertyInformation_get_Value_m12034 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C" void PropertyInformation_set_Value_m12035 (PropertyInformation_t3358 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern "C" void PropertyInformation_Reset_m12036 (PropertyInformation_t3358 * __this, PropertyInformation_t3358 * ___parentProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C" bool PropertyInformation_get_IsElement_m12037 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C" int32_t PropertyInformation_get_ValueOrigin_m12038 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C" String_t* PropertyInformation_GetStringValue_m12039 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C" void PropertyInformation_SetStringValue_m12040 (PropertyInformation_t3358 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C" ConfigurationProperty_t3340 * PropertyInformation_get_Property_m12041 (PropertyInformation_t3358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
