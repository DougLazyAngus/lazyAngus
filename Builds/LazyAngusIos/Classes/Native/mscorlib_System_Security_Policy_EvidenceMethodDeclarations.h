#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence
struct Evidence_t4832;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Reflection.Assembly
struct Assembly_t783;

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C" void Evidence__ctor_m23893 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::.ctor(System.Security.Policy.Evidence)
extern "C" void Evidence__ctor_m23894 (Evidence_t4832 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C" int32_t Evidence_get_Count_m23895 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C" bool Evidence_get_IsSynchronized_m23896 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C" Object_t * Evidence_get_SyncRoot_m23897 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C" ArrayList_t712 * Evidence_get_HostEvidenceList_m23898 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C" ArrayList_t712 * Evidence_get_AssemblyEvidenceList_m23899 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddAssembly(System.Object)
extern "C" void Evidence_AddAssembly_m23900 (Evidence_t4832 * __this, Object_t * ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddHost(System.Object)
extern "C" void Evidence_AddHost_m23901 (Evidence_t4832 * __this, Object_t * ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C" void Evidence_CopyTo_m23902 (Evidence_t4832 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C" bool Evidence_Equals_m23903 (Evidence_t4832 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C" Object_t * Evidence_GetEnumerator_m23904 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C" int32_t Evidence_GetHashCode_m23905 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetHostEnumerator()
extern "C" Object_t * Evidence_GetHostEnumerator_m23906 (Evidence_t4832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::Merge(System.Security.Policy.Evidence)
extern "C" void Evidence_Merge_m23907 (Evidence_t4832 * __this, Evidence_t4832 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::IsAuthenticodePresent(System.Reflection.Assembly)
extern "C" bool Evidence_IsAuthenticodePresent_m23908 (Object_t * __this /* static, unused */, Assembly_t783 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.Policy.Evidence::GetDefaultHostEvidence(System.Reflection.Assembly)
extern "C" Evidence_t4832 * Evidence_GetDefaultHostEvidence_m23909 (Object_t * __this /* static, unused */, Assembly_t783 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
