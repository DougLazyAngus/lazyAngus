#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Cookie
struct Cookie_t3972;
// System.String
struct String_t;
// System.Uri
struct Uri_t708;
// System.Int32[]
struct Int32U5BU5D_t549;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.Cookie::.ctor()
extern "C" void Cookie__ctor_m13436 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String)
extern "C" void Cookie__ctor_m13437 (Cookie_t3972 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.cctor()
extern "C" void Cookie__cctor_m13438 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Comment()
extern "C" String_t* Cookie_get_Comment_m13439 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Comment(System.String)
extern "C" void Cookie_set_Comment_m13440 (Cookie_t3972 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Cookie::get_CommentUri()
extern "C" Uri_t708 * Cookie_get_CommentUri_m13441 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_CommentUri(System.Uri)
extern "C" void Cookie_set_CommentUri_m13442 (Cookie_t3972 * __this, Uri_t708 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Discard()
extern "C" bool Cookie_get_Discard_m13443 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Discard(System.Boolean)
extern "C" void Cookie_set_Discard_m13444 (Cookie_t3972 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Domain()
extern "C" String_t* Cookie_get_Domain_m13445 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Domain(System.String)
extern "C" void Cookie_set_Domain_m13446 (Cookie_t3972 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_ExactDomain()
extern "C" bool Cookie_get_ExactDomain_m13447 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C" void Cookie_set_ExactDomain_m13448 (Cookie_t3972 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Expired()
extern "C" bool Cookie_get_Expired_m13449 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_Expires()
extern "C" DateTime_t287  Cookie_get_Expires_m13450 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expires(System.DateTime)
extern "C" void Cookie_set_Expires_m13451 (Cookie_t3972 * __this, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_HttpOnly()
extern "C" bool Cookie_get_HttpOnly_m13452 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C" void Cookie_set_HttpOnly_m13453 (Cookie_t3972 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Name()
extern "C" String_t* Cookie_get_Name_m13454 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Name(System.String)
extern "C" void Cookie_set_Name_m13455 (Cookie_t3972 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Path()
extern "C" String_t* Cookie_get_Path_m13456 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Path(System.String)
extern "C" void Cookie_set_Path_m13457 (Cookie_t3972 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Port()
extern "C" String_t* Cookie_get_Port_m13458 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Port(System.String)
extern "C" void Cookie_set_Port_m13459 (Cookie_t3972 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Net.Cookie::get_Ports()
extern "C" Int32U5BU5D_t549* Cookie_get_Ports_m13460 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Secure()
extern "C" bool Cookie_get_Secure_m13461 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Secure(System.Boolean)
extern "C" void Cookie_set_Secure_m13462 (Cookie_t3972 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_TimeStamp()
extern "C" DateTime_t287  Cookie_get_TimeStamp_m13463 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Value()
extern "C" String_t* Cookie_get_Value_m13464 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Value(System.String)
extern "C" void Cookie_set_Value_m13465 (Cookie_t3972 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::get_Version()
extern "C" int32_t Cookie_get_Version_m13466 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Version(System.Int32)
extern "C" void Cookie_set_Version_m13467 (Cookie_t3972 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::Equals(System.Object)
extern "C" bool Cookie_Equals_m13468 (Cookie_t3972 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::GetHashCode()
extern "C" int32_t Cookie_GetHashCode_m13469 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t Cookie_hash_m13470 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString()
extern "C" String_t* Cookie_ToString_m13471 (Cookie_t3972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString(System.Uri)
extern "C" String_t* Cookie_ToString_m13472 (Cookie_t3972 * __this, Uri_t708 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsNullOrEmpty(System.String)
extern "C" bool Cookie_IsNullOrEmpty_m13473 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
