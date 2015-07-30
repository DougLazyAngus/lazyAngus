#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestSession
struct DigestSession_t3978;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3809;
// System.Net.Authorization
struct Authorization_t3963;
// System.Net.WebRequest
struct WebRequest_t3251;
// System.Net.ICredentials
struct ICredentials_t3233;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C" void DigestSession__ctor_m13495 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C" void DigestSession__cctor_m13496 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C" String_t* DigestSession_get_Algorithm_m13497 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C" String_t* DigestSession_get_Realm_m13498 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C" String_t* DigestSession_get_Nonce_m13499 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C" String_t* DigestSession_get_Opaque_m13500 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C" String_t* DigestSession_get_QOP_m13501 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C" String_t* DigestSession_get_CNonce_m13502 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C" bool DigestSession_Parse_m13503 (DigestSession_t3978 * __this, String_t* ___challenge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C" String_t* DigestSession_HashToHexString_m13504 (DigestSession_t3978 * __this, String_t* ___toBeHashed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C" String_t* DigestSession_HA1_m13505 (DigestSession_t3978 * __this, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_HA2_m13506 (DigestSession_t3978 * __this, HttpWebRequest_t3809 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_Response_m13507 (DigestSession_t3978 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t3809 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t3963 * DigestSession_Authenticate_m13508 (DigestSession_t3978 * __this, WebRequest_t3251 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C" DateTime_t287  DigestSession_get_LastUse_m13509 (DigestSession_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
