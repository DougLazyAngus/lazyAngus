#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Cookie
struct Cookie_t4357;
// System.String
struct String_t;
// System.Uri
struct Uri_t782;
// System.Int32[]
struct Int32U5BU5D_t484;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.Cookie::.ctor()
extern "C" void Cookie__ctor_m16483 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String)
extern "C" void Cookie__ctor_m16484 (Cookie_t4357 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.cctor()
extern "C" void Cookie__cctor_m16485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Comment()
extern "C" String_t* Cookie_get_Comment_m16486 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Comment(System.String)
extern "C" void Cookie_set_Comment_m16487 (Cookie_t4357 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Cookie::get_CommentUri()
extern "C" Uri_t782 * Cookie_get_CommentUri_m16488 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_CommentUri(System.Uri)
extern "C" void Cookie_set_CommentUri_m16489 (Cookie_t4357 * __this, Uri_t782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Discard()
extern "C" bool Cookie_get_Discard_m16490 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Discard(System.Boolean)
extern "C" void Cookie_set_Discard_m16491 (Cookie_t4357 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Domain()
extern "C" String_t* Cookie_get_Domain_m16492 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Domain(System.String)
extern "C" void Cookie_set_Domain_m16493 (Cookie_t4357 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_ExactDomain()
extern "C" bool Cookie_get_ExactDomain_m16494 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C" void Cookie_set_ExactDomain_m16495 (Cookie_t4357 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Expired()
extern "C" bool Cookie_get_Expired_m16496 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_Expires()
extern "C" DateTime_t287  Cookie_get_Expires_m16497 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expires(System.DateTime)
extern "C" void Cookie_set_Expires_m16498 (Cookie_t4357 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_HttpOnly()
extern "C" bool Cookie_get_HttpOnly_m16499 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C" void Cookie_set_HttpOnly_m16500 (Cookie_t4357 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Name()
extern "C" String_t* Cookie_get_Name_m16501 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Name(System.String)
extern "C" void Cookie_set_Name_m16502 (Cookie_t4357 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Path()
extern "C" String_t* Cookie_get_Path_m16503 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Path(System.String)
extern "C" void Cookie_set_Path_m16504 (Cookie_t4357 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Port()
extern "C" String_t* Cookie_get_Port_m16505 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Port(System.String)
extern "C" void Cookie_set_Port_m16506 (Cookie_t4357 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Net.Cookie::get_Ports()
extern "C" Int32U5BU5D_t484* Cookie_get_Ports_m16507 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Secure()
extern "C" bool Cookie_get_Secure_m16508 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Secure(System.Boolean)
extern "C" void Cookie_set_Secure_m16509 (Cookie_t4357 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_TimeStamp()
extern "C" DateTime_t287  Cookie_get_TimeStamp_m16510 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Value()
extern "C" String_t* Cookie_get_Value_m16511 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Value(System.String)
extern "C" void Cookie_set_Value_m16512 (Cookie_t4357 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::get_Version()
extern "C" int32_t Cookie_get_Version_m16513 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Version(System.Int32)
extern "C" void Cookie_set_Version_m16514 (Cookie_t4357 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::Equals(System.Object)
extern "C" bool Cookie_Equals_m16515 (Cookie_t4357 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::GetHashCode()
extern "C" int32_t Cookie_GetHashCode_m16516 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t Cookie_hash_m16517 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString()
extern "C" String_t* Cookie_ToString_m16518 (Cookie_t4357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString(System.Uri)
extern "C" String_t* Cookie_ToString_m16519 (Cookie_t4357 * __this, Uri_t782 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsNullOrEmpty(System.String)
extern "C" bool Cookie_IsNullOrEmpty_m16520 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
