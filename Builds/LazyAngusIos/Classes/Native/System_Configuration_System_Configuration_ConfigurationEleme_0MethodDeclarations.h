#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Configuration.Configuration
struct Configuration_t3307;
// System.Configuration.ElementInformation
struct ElementInformation_t3323;
// System.String
struct String_t;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t3324;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3340;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Configuration.PropertyInformation
struct PropertyInformation_t3358;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t3322;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.XmlWriter
struct XmlWriter_t3380;
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C" void ConfigurationElement__ctor_m11769 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C" Configuration_t3307 * ConfigurationElement_get_Configuration_m11770 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C" void ConfigurationElement_set_Configuration_m11771 (ConfigurationElement_t3325 * __this, Configuration_t3307 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern "C" void ConfigurationElement_InitFromProperty_m11772 (ConfigurationElement_t3325 * __this, PropertyInformation_t3358 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern "C" ElementInformation_t3323 * ConfigurationElement_get_ElementInformation_m11773 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C" String_t* ConfigurationElement_get_RawXml_m11774 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C" void ConfigurationElement_set_RawXml_m11775 (ConfigurationElement_t3325 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C" void ConfigurationElement_Init_m11776 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern "C" ConfigurationLockCollection_t3324 * ConfigurationElement_get_LockAllAttributesExcept_m11777 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern "C" ConfigurationLockCollection_t3324 * ConfigurationElement_get_LockAllElementsExcept_m11778 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern "C" ConfigurationLockCollection_t3324 * ConfigurationElement_get_LockAttributes_m11779 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern "C" ConfigurationLockCollection_t3324 * ConfigurationElement_get_LockElements_m11780 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C" void ConfigurationElement_set_LockItem_m11781 (ConfigurationElement_t3325 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern "C" void ConfigurationElement_SetPropertyValue_m11782 (ConfigurationElement_t3325 * __this, ConfigurationProperty_t3340 * ___prop, Object_t * ___value, bool ___ignoreLocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern "C" ConfigurationPropertyCollection_t3321 * ConfigurationElement_GetKeyProperties_m11783 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern "C" ConfigurationElementCollection_t3322 * ConfigurationElement_GetDefaultCollection_m11784 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C" Object_t * ConfigurationElement_get_Item_m11785 (ConfigurationElement_t3325 * __this, ConfigurationProperty_t3340 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C" void ConfigurationElement_set_Item_m11786 (ConfigurationElement_t3325 * __this, ConfigurationProperty_t3340 * ___property, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern "C" Object_t * ConfigurationElement_get_Item_m11787 (ConfigurationElement_t3325 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern "C" void ConfigurationElement_set_Item_m11788 (ConfigurationElement_t3325 * __this, String_t* ___property_name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3321 * ConfigurationElement_get_Properties_m11789 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern "C" bool ConfigurationElement_Equals_m11790 (ConfigurationElement_t3325 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern "C" int32_t ConfigurationElement_GetHashCode_m11791 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern "C" bool ConfigurationElement_HasValues_m11792 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern "C" bool ConfigurationElement_HasLocalModifications_m11793 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void ConfigurationElement_DeserializeElement_m11794 (ConfigurationElement_t3325 * __this, XmlReader_t3379 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m11795 (ConfigurationElement_t3325 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedElement_m11796 (ConfigurationElement_t3325 * __this, String_t* ___element, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern "C" Object_t * ConfigurationElement_OnRequiredPropertyNotFound_m11797 (ConfigurationElement_t3325 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C" void ConfigurationElement_PreSerialize_m11798 (ConfigurationElement_t3325 * __this, XmlWriter_t3380 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C" void ConfigurationElement_PostDeserialize_m11799 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C" void ConfigurationElement_InitializeDefault_m11800 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C" bool ConfigurationElement_IsModified_m11801 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C" void ConfigurationElement_SetReadOnly_m11802 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C" bool ConfigurationElement_IsReadOnly_m11803 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElement_Reset_m11804 (ConfigurationElement_t3325 * __this, ConfigurationElement_t3325 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern "C" void ConfigurationElement_ResetModified_m11805 (ConfigurationElement_t3325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C" bool ConfigurationElement_SerializeElement_m11806 (ConfigurationElement_t3325 * __this, XmlWriter_t3380 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern "C" bool ConfigurationElement_SerializeToXmlElement_m11807 (ConfigurationElement_t3325 * __this, XmlWriter_t3380 * ___writer, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ConfigurationElement_Unmerge_m11808 (ConfigurationElement_t3325 * __this, ConfigurationElement_t3325 * ___source, ConfigurationElement_t3325 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C" bool ConfigurationElement_HasValue_m11809 (ConfigurationElement_t3325 * __this, String_t* ___propName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern "C" void ConfigurationElement_ValidateValue_m11810 (ConfigurationElement_t3325 * __this, ConfigurationProperty_t3340 * ___p, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
