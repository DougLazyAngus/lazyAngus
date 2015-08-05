#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t721;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t4336;
// System.Globalization.CompareInfo
struct CompareInfo_t3228;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t452;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t4424;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C" void CultureInfo__ctor_m16923 (CultureInfo_t721 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C" void CultureInfo__ctor_m16924 (CultureInfo_t721 * __this, int32_t ___culture, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m16925 (CultureInfo_t721 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C" void CultureInfo__ctor_m3902 (CultureInfo_t721 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
extern "C" void CultureInfo__ctor_m16926 (CultureInfo_t721 * __this, String_t* ___name, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m16927 (CultureInfo_t721 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C" void CultureInfo__ctor_m16928 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C" void CultureInfo__cctor_m16929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" CultureInfo_t721 * CultureInfo_get_InvariantCulture_m3835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" CultureInfo_t721 * CultureInfo_get_CurrentCulture_m12944 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" CultureInfo_t721 * CultureInfo_get_CurrentUICulture_m12945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C" CultureInfo_t721 * CultureInfo_ConstructCurrentCulture_m16930 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C" CultureInfo_t721 * CultureInfo_ConstructCurrentUICulture_m16931 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C" int32_t CultureInfo_get_LCID_m16932 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C" String_t* CultureInfo_get_Name_m16933 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C" CultureInfo_t721 * CultureInfo_get_Parent_m16934 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C" TextInfo_t4336 * CultureInfo_get_TextInfo_m16935 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C" String_t* CultureInfo_get_IcuName_m16936 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C" bool CultureInfo_Equals_m16937 (CultureInfo_t721 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C" int32_t CultureInfo_GetHashCode_m16938 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C" String_t* CultureInfo_ToString_m16939 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C" CompareInfo_t3228 * CultureInfo_get_CompareInfo_m16940 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C" bool CultureInfo_get_IsNeutralCulture_m16941 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C" void CultureInfo_CheckNeutral_m16942 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C" NumberFormatInfo_t452 * CultureInfo_get_NumberFormat_m16943 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C" DateTimeFormatInfo_t4424 * CultureInfo_get_DateTimeFormat_m16944 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C" bool CultureInfo_get_IsReadOnly_m16945 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C" Object_t * CultureInfo_GetFormat_m16946 (CultureInfo_t721 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C" void CultureInfo_Construct_m16947 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C" bool CultureInfo_ConstructInternalLocaleFromName_m16948 (CultureInfo_t721 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C" bool CultureInfo_ConstructInternalLocaleFromLcid_m16949 (CultureInfo_t721 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m16950 (Object_t * __this /* static, unused */, CultureInfo_t721 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C" bool CultureInfo_construct_internal_locale_from_lcid_m16951 (CultureInfo_t721 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C" bool CultureInfo_construct_internal_locale_from_name_m16952 (CultureInfo_t721 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_construct_internal_locale_from_current_locale_m16953 (Object_t * __this /* static, unused */, CultureInfo_t721 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C" void CultureInfo_construct_datetime_format_m16954 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C" void CultureInfo_construct_number_format_m16955 (CultureInfo_t721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C" void CultureInfo_ConstructInvariant_m16956 (CultureInfo_t721 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C" TextInfo_t4336 * CultureInfo_CreateTextInfo_m16957 (CultureInfo_t721 * __this, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C" CultureInfo_t721 * CultureInfo_CreateCulture_m16958 (Object_t * __this /* static, unused */, String_t* ___name, bool ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
