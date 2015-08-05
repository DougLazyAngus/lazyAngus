#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CultureAwareComparer
struct CultureAwareComparer_t4792;
// System.Globalization.CultureInfo
struct CultureInfo_t719;
// System.String
struct String_t;

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C" void CultureAwareComparer__ctor_m19778 (CultureAwareComparer_t4792 * __this, CultureInfo_t719 * ___ci, bool ___ignore_case, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m19779 (CultureAwareComparer_t4792 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C" bool CultureAwareComparer_Equals_m19780 (CultureAwareComparer_t4792 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C" int32_t CultureAwareComparer_GetHashCode_m19781 (CultureAwareComparer_t4792 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
