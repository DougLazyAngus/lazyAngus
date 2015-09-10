#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t4407;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3223;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3157;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3290;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3289;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3162;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C" void ChainValidationHelper__ctor_m16893 (ChainValidationHelper_t4407 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C" void ChainValidationHelper__cctor_m16894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C" String_t* ChainValidationHelper_get_Host_m16895 (ChainValidationHelper_t4407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3223 * ChainValidationHelper_ValidateChain_m16896 (ChainValidationHelper_t4407 * __this, X509CertificateCollection_t3157 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetStatusFromChain_m16897 (Object_t * __this /* static, unused */, X509Chain_t3290 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetErrorsFromChain_m16898 (Object_t * __this /* static, unused */, X509Chain_t3290 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool ChainValidationHelper_CheckCertificateUsage_m16899 (Object_t * __this /* static, unused */, X509Certificate2_t3289 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C" bool ChainValidationHelper_CheckServerIdentity_m16900 (Object_t * __this /* static, unused */, X509Certificate_t3162 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C" bool ChainValidationHelper_CheckDomainName_m16901 (Object_t * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C" bool ChainValidationHelper_Match_m16902 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
