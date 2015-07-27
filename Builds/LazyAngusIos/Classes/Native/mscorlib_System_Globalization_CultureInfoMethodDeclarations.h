#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t667;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t2351;
// System.Globalization.CompareInfo
struct CompareInfo_t1673;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t412;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2438;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C" void CultureInfo__ctor_m13539 (CultureInfo_t667 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C" void CultureInfo__ctor_m13540 (CultureInfo_t667 * __this, int32_t ___culture, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m13541 (CultureInfo_t667 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C" void CultureInfo__ctor_m3542 (CultureInfo_t667 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
extern "C" void CultureInfo__ctor_m13542 (CultureInfo_t667 * __this, String_t* ___name, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m13543 (CultureInfo_t667 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C" void CultureInfo__ctor_m13544 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C" void CultureInfo__cctor_m13545 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" CultureInfo_t667 * CultureInfo_get_InvariantCulture_m3474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" CultureInfo_t667 * CultureInfo_get_CurrentCulture_m9617 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" CultureInfo_t667 * CultureInfo_get_CurrentUICulture_m9618 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C" CultureInfo_t667 * CultureInfo_ConstructCurrentCulture_m13546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C" CultureInfo_t667 * CultureInfo_ConstructCurrentUICulture_m13547 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C" int32_t CultureInfo_get_LCID_m13548 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C" String_t* CultureInfo_get_Name_m13549 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C" CultureInfo_t667 * CultureInfo_get_Parent_m13550 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C" TextInfo_t2351 * CultureInfo_get_TextInfo_m13551 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C" String_t* CultureInfo_get_IcuName_m13552 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C" bool CultureInfo_Equals_m13553 (CultureInfo_t667 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C" int32_t CultureInfo_GetHashCode_m13554 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C" String_t* CultureInfo_ToString_m13555 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C" CompareInfo_t1673 * CultureInfo_get_CompareInfo_m13556 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C" bool CultureInfo_get_IsNeutralCulture_m13557 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C" void CultureInfo_CheckNeutral_m13558 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C" NumberFormatInfo_t412 * CultureInfo_get_NumberFormat_m13559 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C" DateTimeFormatInfo_t2438 * CultureInfo_get_DateTimeFormat_m13560 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C" bool CultureInfo_get_IsReadOnly_m13561 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C" Object_t * CultureInfo_GetFormat_m13562 (CultureInfo_t667 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C" void CultureInfo_Construct_m13563 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C" bool CultureInfo_ConstructInternalLocaleFromName_m13564 (CultureInfo_t667 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C" bool CultureInfo_ConstructInternalLocaleFromLcid_m13565 (CultureInfo_t667 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m13566 (Object_t * __this /* static, unused */, CultureInfo_t667 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C" bool CultureInfo_construct_internal_locale_from_lcid_m13567 (CultureInfo_t667 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C" bool CultureInfo_construct_internal_locale_from_name_m13568 (CultureInfo_t667 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_construct_internal_locale_from_current_locale_m13569 (Object_t * __this /* static, unused */, CultureInfo_t667 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C" void CultureInfo_construct_datetime_format_m13570 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C" void CultureInfo_construct_number_format_m13571 (CultureInfo_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C" void CultureInfo_ConstructInvariant_m13572 (CultureInfo_t667 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C" TextInfo_t2351 * CultureInfo_CreateTextInfo_m13573 (CultureInfo_t667 * __this, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C" CultureInfo_t667 * CultureInfo_CreateCulture_m13574 (Object_t * __this /* static, unused */, String_t* ___name, bool ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
