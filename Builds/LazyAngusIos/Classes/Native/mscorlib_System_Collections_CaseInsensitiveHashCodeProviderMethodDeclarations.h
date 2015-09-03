#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t4556;
// System.Globalization.CultureInfo
struct CultureInfo_t782;
// System.Globalization.TextInfo
struct TextInfo_t4581;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m20995 (CaseInsensitiveHashCodeProvider_t4556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m20996 (CaseInsensitiveHashCodeProvider_t4556 * __this, CultureInfo_t782 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C" void CaseInsensitiveHashCodeProvider__cctor_m20997 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_Default()
extern "C" CaseInsensitiveHashCodeProvider_t4556 * CaseInsensitiveHashCodeProvider_get_Default_m18071 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m20998 (Object_t * __this /* static, unused */, CultureInfo_t782 * ___a, CultureInfo_t782 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m20999 (Object_t * __this /* static, unused */, TextInfo_t4581 * ___info, CultureInfo_t782 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C" CaseInsensitiveHashCodeProvider_t4556 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m18013 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C" int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m21000 (CaseInsensitiveHashCodeProvider_t4556 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
