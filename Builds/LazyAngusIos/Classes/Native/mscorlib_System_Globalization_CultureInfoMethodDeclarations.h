#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t585;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t2272;
// System.Globalization.CompareInfo
struct CompareInfo_t1717;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t369;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2359;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C" void CultureInfo__ctor_m12769 (CultureInfo_t585 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C" void CultureInfo__ctor_m12770 (CultureInfo_t585 * __this, int32_t ___culture, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m12771 (CultureInfo_t585 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C" void CultureInfo__ctor_m2833 (CultureInfo_t585 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
extern "C" void CultureInfo__ctor_m12772 (CultureInfo_t585 * __this, String_t* ___name, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m12773 (CultureInfo_t585 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C" void CultureInfo__ctor_m12774 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C" void CultureInfo__cctor_m12775 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" CultureInfo_t585 * CultureInfo_get_InvariantCulture_m2765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" CultureInfo_t585 * CultureInfo_get_CurrentCulture_m11081 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" CultureInfo_t585 * CultureInfo_get_CurrentUICulture_m11082 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C" CultureInfo_t585 * CultureInfo_ConstructCurrentCulture_m12776 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C" CultureInfo_t585 * CultureInfo_ConstructCurrentUICulture_m12777 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C" int32_t CultureInfo_get_LCID_m12778 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C" String_t* CultureInfo_get_Name_m12779 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C" CultureInfo_t585 * CultureInfo_get_Parent_m12780 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C" TextInfo_t2272 * CultureInfo_get_TextInfo_m12781 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C" String_t* CultureInfo_get_IcuName_m12782 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C" bool CultureInfo_Equals_m12783 (CultureInfo_t585 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C" int32_t CultureInfo_GetHashCode_m12784 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C" String_t* CultureInfo_ToString_m12785 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C" CompareInfo_t1717 * CultureInfo_get_CompareInfo_m12786 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C" bool CultureInfo_get_IsNeutralCulture_m12787 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C" void CultureInfo_CheckNeutral_m12788 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C" NumberFormatInfo_t369 * CultureInfo_get_NumberFormat_m12789 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C" DateTimeFormatInfo_t2359 * CultureInfo_get_DateTimeFormat_m12790 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C" bool CultureInfo_get_IsReadOnly_m12791 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C" Object_t * CultureInfo_GetFormat_m12792 (CultureInfo_t585 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C" void CultureInfo_Construct_m12793 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C" bool CultureInfo_ConstructInternalLocaleFromName_m12794 (CultureInfo_t585 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C" bool CultureInfo_ConstructInternalLocaleFromLcid_m12795 (CultureInfo_t585 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m12796 (Object_t * __this /* static, unused */, CultureInfo_t585 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C" bool CultureInfo_construct_internal_locale_from_lcid_m12797 (CultureInfo_t585 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C" bool CultureInfo_construct_internal_locale_from_name_m12798 (CultureInfo_t585 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_construct_internal_locale_from_current_locale_m12799 (Object_t * __this /* static, unused */, CultureInfo_t585 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C" void CultureInfo_construct_datetime_format_m12800 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C" void CultureInfo_construct_number_format_m12801 (CultureInfo_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C" void CultureInfo_ConstructInvariant_m12802 (CultureInfo_t585 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C" TextInfo_t2272 * CultureInfo_CreateTextInfo_m12803 (CultureInfo_t585 * __this, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C" CultureInfo_t585 * CultureInfo_CreateCulture_m12804 (Object_t * __this /* static, unused */, String_t* ___name, bool ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
