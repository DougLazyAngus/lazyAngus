#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t3352;
// System.Configuration.PropertyInformation
struct PropertyInformation_t3351;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C" void PropertyInformationCollection__ctor_m11989 (PropertyInformationCollection_t3352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C" PropertyInformation_t3351 * PropertyInformationCollection_get_Item_m11990 (PropertyInformationCollection_t3352 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C" Object_t * PropertyInformationCollection_GetEnumerator_m11991 (PropertyInformationCollection_t3352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C" void PropertyInformationCollection_Add_m11992 (PropertyInformationCollection_t3352 * __this, PropertyInformation_t3351 * ___pi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PropertyInformationCollection_GetObjectData_m11993 (PropertyInformationCollection_t3352 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
