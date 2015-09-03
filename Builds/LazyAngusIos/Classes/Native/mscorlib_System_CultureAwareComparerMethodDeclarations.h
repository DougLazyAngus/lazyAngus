#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CultureAwareComparer
struct CultureAwareComparer_t4909;
// System.Globalization.CultureInfo
struct CultureInfo_t782;
// System.String
struct String_t;

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C" void CultureAwareComparer__ctor_m20701 (CultureAwareComparer_t4909 * __this, CultureInfo_t782 * ___ci, bool ___ignore_case, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m20702 (CultureAwareComparer_t4909 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C" bool CultureAwareComparer_Equals_m20703 (CultureAwareComparer_t4909 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C" int32_t CultureAwareComparer_GetHashCode_m20704 (CultureAwareComparer_t4909 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
