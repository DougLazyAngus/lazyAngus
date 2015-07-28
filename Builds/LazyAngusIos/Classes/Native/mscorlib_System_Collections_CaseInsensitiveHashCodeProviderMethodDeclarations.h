#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t4136;
// System.Globalization.CultureInfo
struct CultureInfo_t711;
// System.Globalization.TextInfo
struct TextInfo_t4325;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m16607 (CaseInsensitiveHashCodeProvider_t4136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m16608 (CaseInsensitiveHashCodeProvider_t4136 * __this, CultureInfo_t711 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C" void CaseInsensitiveHashCodeProvider__cctor_m16609 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m16610 (Object_t * __this /* static, unused */, CultureInfo_t711 * ___a, CultureInfo_t711 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m16611 (Object_t * __this /* static, unused */, TextInfo_t4325 * ___info, CultureInfo_t711 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C" CaseInsensitiveHashCodeProvider_t4136 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m14740 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C" int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m16612 (CaseInsensitiveHashCodeProvider_t4136 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
