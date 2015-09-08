#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t4560;
// System.Globalization.CultureInfo
struct CultureInfo_t786;
// System.Globalization.TextInfo
struct TextInfo_t4585;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m21008 (CaseInsensitiveHashCodeProvider_t4560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m21009 (CaseInsensitiveHashCodeProvider_t4560 * __this, CultureInfo_t786 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C" void CaseInsensitiveHashCodeProvider__cctor_m21010 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_Default()
extern "C" CaseInsensitiveHashCodeProvider_t4560 * CaseInsensitiveHashCodeProvider_get_Default_m18084 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m21011 (Object_t * __this /* static, unused */, CultureInfo_t786 * ___a, CultureInfo_t786 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m21012 (Object_t * __this /* static, unused */, TextInfo_t4585 * ___info, CultureInfo_t786 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C" CaseInsensitiveHashCodeProvider_t4560 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m18026 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C" int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m21013 (CaseInsensitiveHashCodeProvider_t4560 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
