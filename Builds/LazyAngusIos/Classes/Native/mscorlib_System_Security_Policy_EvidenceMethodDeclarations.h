#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence
struct Evidence_t4843;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Reflection.Assembly
struct Assembly_t794;

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C" void Evidence__ctor_m23963 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::.ctor(System.Security.Policy.Evidence)
extern "C" void Evidence__ctor_m23964 (Evidence_t4843 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C" int32_t Evidence_get_Count_m23965 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C" bool Evidence_get_IsSynchronized_m23966 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C" Object_t * Evidence_get_SyncRoot_m23967 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C" ArrayList_t723 * Evidence_get_HostEvidenceList_m23968 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C" ArrayList_t723 * Evidence_get_AssemblyEvidenceList_m23969 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddAssembly(System.Object)
extern "C" void Evidence_AddAssembly_m23970 (Evidence_t4843 * __this, Object_t * ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddHost(System.Object)
extern "C" void Evidence_AddHost_m23971 (Evidence_t4843 * __this, Object_t * ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C" void Evidence_CopyTo_m23972 (Evidence_t4843 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C" bool Evidence_Equals_m23973 (Evidence_t4843 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C" Object_t * Evidence_GetEnumerator_m23974 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C" int32_t Evidence_GetHashCode_m23975 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetHostEnumerator()
extern "C" Object_t * Evidence_GetHostEnumerator_m23976 (Evidence_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::Merge(System.Security.Policy.Evidence)
extern "C" void Evidence_Merge_m23977 (Evidence_t4843 * __this, Evidence_t4843 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::IsAuthenticodePresent(System.Reflection.Assembly)
extern "C" bool Evidence_IsAuthenticodePresent_m23978 (Object_t * __this /* static, unused */, Assembly_t794 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.Policy.Evidence::GetDefaultHostEvidence(System.Reflection.Assembly)
extern "C" Evidence_t4843 * Evidence_GetDefaultHostEvidence_m23979 (Object_t * __this /* static, unused */, Assembly_t794 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
