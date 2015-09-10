#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3351;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3382;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t3313;
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

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C" void ConfigurationSectionGroupCollection__ctor_m11965 (ConfigurationSectionGroupCollection_t3351 * __this, Configuration_t3307 * ___config, SectionGroupInfo_t3315 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C" KeysCollection_t3382 * ConfigurationSectionGroupCollection_get_Keys_m11966 (ConfigurationSectionGroupCollection_t3351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C" int32_t ConfigurationSectionGroupCollection_get_Count_m11967 (ConfigurationSectionGroupCollection_t3351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C" ConfigurationSectionGroup_t3313 * ConfigurationSectionGroupCollection_get_Item_m11968 (ConfigurationSectionGroupCollection_t3351 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C" Object_t * ConfigurationSectionGroupCollection_GetEnumerator_m11969 (ConfigurationSectionGroupCollection_t3351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationSectionGroupCollection_GetObjectData_m11970 (ConfigurationSectionGroupCollection_t3351 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
