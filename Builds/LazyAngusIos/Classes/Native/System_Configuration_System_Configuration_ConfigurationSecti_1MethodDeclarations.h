#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3341;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3375;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3340;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t3300;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3308;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionCollection__ctor_m11897 (ConfigurationSectionCollection_t3341 * __this, Configuration_t3300 * ___config, SectionGroupInfo_t3308 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C" KeysCollection_t3375 * ConfigurationSectionCollection_get_Keys_m11898 (ConfigurationSectionCollection_t3341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C" int32_t ConfigurationSectionCollection_get_Count_m11899 (ConfigurationSectionCollection_t3341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C" ConfigurationSection_t3340 * ConfigurationSectionCollection_get_Item_m11900 (ConfigurationSectionCollection_t3341 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C" Object_t * ConfigurationSectionCollection_GetEnumerator_m11901 (ConfigurationSectionCollection_t3341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationSectionCollection_GetObjectData_m11902 (ConfigurationSectionCollection_t3341 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
