#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.SortKey
struct SortKey_t2353;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Object
struct Object_t;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Globalization.CompareOptions)
extern "C" void SortKey__ctor_m12770 (SortKey_t2353 * __this, int32_t ___lcid, String_t* ___source, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Byte[],System.Globalization.CompareOptions,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void SortKey__ctor_m12771 (SortKey_t2353 * __this, int32_t ___lcid, String_t* ___source, ByteU5BU5D_t36* ___buffer, int32_t ___opt, int32_t ___lv1Length, int32_t ___lv2Length, int32_t ___lv3Length, int32_t ___kanaSmallLength, int32_t ___markTypeLength, int32_t ___katakanaLength, int32_t ___kanaWidthLength, int32_t ___identLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::Compare(System.Globalization.SortKey,System.Globalization.SortKey)
extern "C" int32_t SortKey_Compare_m12772 (Object_t * __this /* static, unused */, SortKey_t2353 * ___sortkey1, SortKey_t2353 * ___sortkey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::get_OriginalString()
extern "C" String_t* SortKey_get_OriginalString_m12773 (SortKey_t2353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Globalization.SortKey::get_KeyData()
extern "C" ByteU5BU5D_t36* SortKey_get_KeyData_m12774 (SortKey_t2353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.SortKey::Equals(System.Object)
extern "C" bool SortKey_Equals_m12775 (SortKey_t2353 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::GetHashCode()
extern "C" int32_t SortKey_GetHashCode_m12776 (SortKey_t2353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::ToString()
extern "C" String_t* SortKey_ToString_m12777 (SortKey_t2353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
