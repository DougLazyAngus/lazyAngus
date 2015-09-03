#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Configuration.ElementInformation
struct ElementInformation_t3312;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t3313;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.PropertyInformation
struct PropertyInformation_t3347;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t3311;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.XmlWriter
struct XmlWriter_t3369;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C" void ConfigurationElement__ctor_m11699 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C" Configuration_t3296 * ConfigurationElement_get_Configuration_m11700 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C" void ConfigurationElement_set_Configuration_m11701 (ConfigurationElement_t3314 * __this, Configuration_t3296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C" void ConfigurationElement_InitFromProperty_m11702 (ConfigurationElement_t3314 * __this, PropertyInformation_t3347 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C" ElementInformation_t3312 * ConfigurationElement_get_ElementInformation_m11703 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C" String_t* ConfigurationElement_get_RawXml_m11704 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C" void ConfigurationElement_set_RawXml_m11705 (ConfigurationElement_t3314 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C" void ConfigurationElement_Init_m11706 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C" ConfigurationLockCollection_t3313 * ConfigurationElement_get_LockAllAttributesExcept_m11707 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C" ConfigurationLockCollection_t3313 * ConfigurationElement_get_LockAllElementsExcept_m11708 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C" ConfigurationLockCollection_t3313 * ConfigurationElement_get_LockAttributes_m11709 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C" ConfigurationLockCollection_t3313 * ConfigurationElement_get_LockElements_m11710 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C" void ConfigurationElement_set_LockItem_m11711 (ConfigurationElement_t3314 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C" void ConfigurationElement_SetPropertyValue_m11712 (ConfigurationElement_t3314 * __this, ConfigurationProperty_t3329 * ___prop, Object_t * ___value, bool ___ignoreLocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C" ConfigurationPropertyCollection_t3310 * ConfigurationElement_GetKeyProperties_m11713 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C" ConfigurationElementCollection_t3311 * ConfigurationElement_GetDefaultCollection_m11714 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C" Object_t * ConfigurationElement_get_Item_m11715 (ConfigurationElement_t3314 * __this, ConfigurationProperty_t3329 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C" void ConfigurationElement_set_Item_m11716 (ConfigurationElement_t3314 * __this, ConfigurationProperty_t3329 * ___property, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C" Object_t * ConfigurationElement_get_Item_m11717 (ConfigurationElement_t3314 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C" void ConfigurationElement_set_Item_m11718 (ConfigurationElement_t3314 * __this, String_t* ___property_name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * ConfigurationElement_get_Properties_m11719 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C" bool ConfigurationElement_Equals_m11720 (ConfigurationElement_t3314 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C" int32_t ConfigurationElement_GetHashCode_m11721 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C" bool ConfigurationElement_HasValues_m11722 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C" bool ConfigurationElement_HasLocalModifications_m11723 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void ConfigurationElement_DeserializeElement_m11724 (ConfigurationElement_t3314 * __this, XmlReader_t3368 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m11725 (ConfigurationElement_t3314 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedElement_m11726 (ConfigurationElement_t3314 * __this, String_t* ___element, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C" Object_t * ConfigurationElement_OnRequiredPropertyNotFound_m11727 (ConfigurationElement_t3314 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C" void ConfigurationElement_PreSerialize_m11728 (ConfigurationElement_t3314 * __this, XmlWriter_t3369 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C" void ConfigurationElement_PostDeserialize_m11729 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C" void ConfigurationElement_InitializeDefault_m11730 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C" bool ConfigurationElement_IsModified_m11731 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C" void ConfigurationElement_SetReadOnly_m11732 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C" bool ConfigurationElement_IsReadOnly_m11733 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElement_Reset_m11734 (ConfigurationElement_t3314 * __this, ConfigurationElement_t3314 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C" void ConfigurationElement_ResetModified_m11735 (ConfigurationElement_t3314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C" bool ConfigurationElement_SerializeElement_m11736 (ConfigurationElement_t3314 * __this, XmlWriter_t3369 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C" bool ConfigurationElement_SerializeToXmlElement_m11737 (ConfigurationElement_t3314 * __this, XmlWriter_t3369 * ___writer, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ConfigurationElement_Unmerge_m11738 (ConfigurationElement_t3314 * __this, ConfigurationElement_t3314 * ___source, ConfigurationElement_t3314 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C" bool ConfigurationElement_HasValue_m11739 (ConfigurationElement_t3314 * __this, String_t* ___propName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C" void ConfigurationElement_ValidateValue_m11740 (ConfigurationElement_t3314 * __this, ConfigurationProperty_t3329 * ___p, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
