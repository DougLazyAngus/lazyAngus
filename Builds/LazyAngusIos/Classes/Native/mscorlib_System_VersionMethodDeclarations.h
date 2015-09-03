#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Version
struct Version_t1401;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m20829 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C" void Version__ctor_m7807 (Version_t1401 * __this, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m18103 (Version_t1401 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m20830 (Version_t1401 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m20831 (Version_t1401 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m20832 (Version_t1401 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m20833 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m18107 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m18108 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m20834 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
extern "C" Object_t * Version_Clone_m20835 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" int32_t Version_CompareTo_m20836 (Version_t1401 * __this, Object_t * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C" bool Version_Equals_m20837 (Version_t1401 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m20838 (Version_t1401 * __this, Version_t1401 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m20839 (Version_t1401 * __this, Version_t1401 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m20840 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C" String_t* Version_ToString_m20841 (Version_t1401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C" Version_t1401 * Version_CreateFromString_m20842 (Object_t * __this /* static, unused */, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m18104 (Object_t * __this /* static, unused */, Version_t1401 * ___v1, Version_t1401 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m18105 (Object_t * __this /* static, unused */, Version_t1401 * ___v1, Version_t1401 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" bool Version_op_LessThan_m18106 (Object_t * __this /* static, unused */, Version_t1401 * ___v1, Version_t1401 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
