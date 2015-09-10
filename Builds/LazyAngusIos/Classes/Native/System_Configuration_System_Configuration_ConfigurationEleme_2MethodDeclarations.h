#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t3322;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Configuration.PropertyInformation
struct PropertyInformation_t3358;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Xml.XmlWriter
struct XmlWriter_t3380;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationEleme.h"
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"

// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern "C" void ConfigurationElementCollection__ctor_m11818 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m11819 (ConfigurationElementCollection_t3322 * __this, Array_t * ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern "C" void ConfigurationElementCollection_InitFromProperty_m11820 (ConfigurationElementCollection_t3322 * __this, PropertyInformation_t3358 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C" int32_t ConfigurationElementCollection_get_CollectionType_m11821 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C" bool ConfigurationElementCollection_get_IsBasic_m11822 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C" bool ConfigurationElementCollection_get_IsAlternate_m11823 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C" int32_t ConfigurationElementCollection_get_Count_m11824 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern "C" String_t* ConfigurationElementCollection_get_ElementName_m11825 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C" void ConfigurationElementCollection_set_EmitClear_m11826 (ConfigurationElementCollection_t3322 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsSynchronized()
extern "C" bool ConfigurationElementCollection_get_IsSynchronized_m11827 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationElementCollection_get_SyncRoot_m11828 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C" bool ConfigurationElementCollection_get_ThrowOnDuplicate_m11829 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C" String_t* ConfigurationElementCollection_get_AddElementName_m11830 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C" String_t* ConfigurationElementCollection_get_ClearElementName_m11831 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C" String_t* ConfigurationElementCollection_get_RemoveElementName_m11832 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElementCollection_BaseAdd_m11833 (ConfigurationElementCollection_t3322 * __this, ConfigurationElement_t3325 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern "C" void ConfigurationElementCollection_BaseAdd_m11834 (ConfigurationElementCollection_t3322 * __this, ConfigurationElement_t3325 * ___element, bool ___throwIfExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern "C" void ConfigurationElementCollection_BaseClear_m11835 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern "C" ConfigurationElement_t3325 * ConfigurationElementCollection_BaseGet_m11836 (ConfigurationElementCollection_t3322 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern "C" ConfigurationElement_t3325 * ConfigurationElementCollection_BaseGet_m11837 (ConfigurationElementCollection_t3322 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C" int32_t ConfigurationElementCollection_BaseIndexOf_m11838 (ConfigurationElementCollection_t3322 * __this, ConfigurationElement_t3325 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern "C" int32_t ConfigurationElementCollection_IndexOfKey_m11839 (ConfigurationElementCollection_t3322 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern "C" void ConfigurationElementCollection_BaseRemove_m11840 (ConfigurationElementCollection_t3322 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern "C" void ConfigurationElementCollection_BaseRemoveAt_m11841 (ConfigurationElementCollection_t3322 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern "C" bool ConfigurationElementCollection_CompareKeys_m11842 (ConfigurationElementCollection_t3322 * __this, Object_t * ___key1, Object_t * ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement()
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C" ConfigurationElement_t3325 * ConfigurationElementCollection_CreateNewElement_m11843 (ConfigurationElementCollection_t3322 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C" ConfigurationElement_t3325 * ConfigurationElementCollection_CreateNewElementInternal_m11844 (ConfigurationElementCollection_t3322 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern "C" bool ConfigurationElementCollection_Equals_m11845 (ConfigurationElementCollection_t3322 * __this, Object_t * ___compareTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C" int32_t ConfigurationElementCollection_GetHashCode_m11846 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C" Object_t * ConfigurationElementCollection_GetEnumerator_m11847 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C" bool ConfigurationElementCollection_IsElementName_m11848 (ConfigurationElementCollection_t3322 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C" bool ConfigurationElementCollection_IsElementRemovable_m11849 (ConfigurationElementCollection_t3322 * __this, ConfigurationElement_t3325 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C" bool ConfigurationElementCollection_IsModified_m11850 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C" bool ConfigurationElementCollection_IsReadOnly_m11851 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C" bool ConfigurationElementCollection_HasValues_m11852 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElementCollection_Reset_m11853 (ConfigurationElementCollection_t3322 * __this, ConfigurationElement_t3325 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C" void ConfigurationElementCollection_ResetModified_m11854 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C" void ConfigurationElementCollection_SetReadOnly_m11855 (ConfigurationElementCollection_t3322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern "C" bool ConfigurationElementCollection_SerializeElement_m11856 (ConfigurationElementCollection_t3322 * __this, XmlWriter_t3380 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m11857 (ConfigurationElementCollection_t3322 * __this, String_t* ___elementName, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ConfigurationElementCollection_Unmerge_m11858 (ConfigurationElementCollection_t3322 * __this, ConfigurationElement_t3325 * ___sourceElement, ConfigurationElement_t3325 * ___parentElement, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
