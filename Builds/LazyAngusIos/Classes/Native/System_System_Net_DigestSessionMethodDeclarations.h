#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestSession
struct DigestSession_t2013;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1806;
// System.Net.Authorization
struct Authorization_t1998;
// System.Net.WebRequest
struct WebRequest_t1704;
// System.Net.ICredentials
struct ICredentials_t1682;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C" void DigestSession__ctor_m10234 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C" void DigestSession__cctor_m10235 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C" String_t* DigestSession_get_Algorithm_m10236 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C" String_t* DigestSession_get_Realm_m10237 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C" String_t* DigestSession_get_Nonce_m10238 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C" String_t* DigestSession_get_Opaque_m10239 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C" String_t* DigestSession_get_QOP_m10240 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C" String_t* DigestSession_get_CNonce_m10241 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C" bool DigestSession_Parse_m10242 (DigestSession_t2013 * __this, String_t* ___challenge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C" String_t* DigestSession_HashToHexString_m10243 (DigestSession_t2013 * __this, String_t* ___toBeHashed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C" String_t* DigestSession_HA1_m10244 (DigestSession_t2013 * __this, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_HA2_m10245 (DigestSession_t2013 * __this, HttpWebRequest_t1806 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_Response_m10246 (DigestSession_t2013 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t1806 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1998 * DigestSession_Authenticate_m10247 (DigestSession_t2013 * __this, WebRequest_t1704 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C" DateTime_t247  DigestSession_get_LastUse_m10248 (DigestSession_t2013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
