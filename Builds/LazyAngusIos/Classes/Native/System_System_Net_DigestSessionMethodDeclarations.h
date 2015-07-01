#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestSession
struct DigestSession_t1473;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1513;
// System.Net.Authorization
struct Authorization_t1456;
// System.Net.WebRequest
struct WebRequest_t1484;
// System.Net.ICredentials
struct ICredentials_t1480;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C" void DigestSession__ctor_m7045 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C" void DigestSession__cctor_m7046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C" String_t* DigestSession_get_Algorithm_m7047 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C" String_t* DigestSession_get_Realm_m7048 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C" String_t* DigestSession_get_Nonce_m7049 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C" String_t* DigestSession_get_Opaque_m7050 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C" String_t* DigestSession_get_QOP_m7051 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C" String_t* DigestSession_get_CNonce_m7052 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C" bool DigestSession_Parse_m7053 (DigestSession_t1473 * __this, String_t* ___challenge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C" String_t* DigestSession_HashToHexString_m7054 (DigestSession_t1473 * __this, String_t* ___toBeHashed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C" String_t* DigestSession_HA1_m7055 (DigestSession_t1473 * __this, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_HA2_m7056 (DigestSession_t1473 * __this, HttpWebRequest_t1513 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_Response_m7057 (DigestSession_t1473 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t1513 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1456 * DigestSession_Authenticate_m7058 (DigestSession_t1473 * __this, WebRequest_t1484 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C" DateTime_t219  DigestSession_get_LastUse_m7059 (DigestSession_t1473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
