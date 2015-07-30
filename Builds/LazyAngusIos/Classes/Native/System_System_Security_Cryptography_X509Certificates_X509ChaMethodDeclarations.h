#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3887;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t4046;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t4047;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t4050;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t4043;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3886;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t4049;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3850;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t3769;
// Mono.Security.X509.X509Extension
struct X509Extension_t3770;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3768;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m12923 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C" void X509Chain__ctor_m14147 (X509Chain_t3887 * __this, bool ___useMachineContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C" void X509Chain__cctor_m14148 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C" X509ChainPolicy_t4046 * X509Chain_get_ChainPolicy_m14149 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern "C" void X509Chain_set_ChainPolicy_m14150 (X509Chain_t3887 * __this, X509ChainPolicy_t4046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::get_ChainStatus()
extern "C" X509ChainStatusU5BU5D_t4047* X509Chain_get_ChainStatus_m14151 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_Build_m12924 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C" void X509Chain_Reset_m14152 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C" X509Store_t4050 * X509Chain_get_Roots_m14153 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C" X509Store_t4050 * X509Chain_get_CertificateAuthorities_m14154 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C" X509Certificate2Collection_t4043 * X509Chain_get_CertificateCollection_m14155 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Chain_BuildChainFrom_m14156 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" X509Certificate2_t3886 * X509Chain_SelectBestFromCollection_m14157 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___child, X509Certificate2Collection_t4043 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Certificate2_t3886 * X509Chain_FindParent_m14158 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsChainComplete_m14159 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsSelfIssued_m14160 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_ValidateChain_m14161 (X509Chain_t3887 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C" void X509Chain_Process_m14162 (X509Chain_t3887 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C" void X509Chain_PrepareForNextCertificate_m14163 (X509Chain_t3887 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C" void X509Chain_WrapUp_m14164 (X509Chain_t3887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C" void X509Chain_ProcessCertificateExtensions_m14165 (X509Chain_t3887 * __this, X509ChainElement_t4049 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Chain_IsSignedWith_m14166 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___signed, AsymmetricAlgorithm_t3850 * ___pubkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetSubjectKeyIdentifier_m14167 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m14168 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m14169 (X509Chain_t3887 * __this, X509Crl_t3769 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m14170 (X509Chain_t3887 * __this, X509Extension_t3770 * ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_CheckRevocationOnChain_m14171 (X509Chain_t3887 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m14172 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, int32_t ___ca, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m14173 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___certificate, X509Certificate2_t3886 * ___ca_cert, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Crl_t3769 * X509Chain_FindCrl_m14174 (X509Chain_t3887 * __this, X509Certificate2_t3886 * ___caCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C" bool X509Chain_ProcessCrlExtensions_m14175 (X509Chain_t3887 * __this, X509Crl_t3769 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C" bool X509Chain_ProcessCrlEntryExtensions_m14176 (X509Chain_t3887 * __this, X509CrlEntry_t3768 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
