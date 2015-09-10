#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3348;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3382;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3347;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t3307;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3315;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionCollection__ctor_m11954 (ConfigurationSectionCollection_t3348 * __this, Configuration_t3307 * ___config, SectionGroupInfo_t3315 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C" KeysCollection_t3382 * ConfigurationSectionCollection_get_Keys_m11955 (ConfigurationSectionCollection_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C" int32_t ConfigurationSectionCollection_get_Count_m11956 (ConfigurationSectionCollection_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C" ConfigurationSection_t3347 * ConfigurationSectionCollection_get_Item_m11957 (ConfigurationSectionCollection_t3348 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C" Object_t * ConfigurationSectionCollection_GetEnumerator_m11958 (ConfigurationSectionCollection_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationSectionCollection_GetObjectData_m11959 (ConfigurationSectionCollection_t3348 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
