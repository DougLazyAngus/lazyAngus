﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.OSX509Certificates
struct OSX509Certificates_t4080;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.IntPtr[]
struct IntPtrU5BU5D_t2906;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3809;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Security.X509.OSX509Certificates/SecTrustResult
#include "System_Mono_Security_X509_OSX509Certificates_SecTrustResult.h"

// System.Void Mono.Security.X509.OSX509Certificates::.cctor()
extern "C" void OSX509Certificates__cctor_m14361 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C" IntPtr_t OSX509Certificates_SecCertificateCreateWithData_m14362 (Object_t * __this /* static, unused */, IntPtr_t ___allocator, IntPtr_t ___nsdataRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustCreateWithCertificates(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C" int32_t OSX509Certificates_SecTrustCreateWithCertificates_m14363 (Object_t * __this /* static, unused */, IntPtr_t ___certOrCertArray, IntPtr_t ___policies, IntPtr_t* ___sectrustref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecPolicyCreateSSL(System.Int32,System.IntPtr)
extern "C" IntPtr_t OSX509Certificates_SecPolicyCreateSSL_m14364 (Object_t * __this /* static, unused */, int32_t ___server, IntPtr_t ___cfStringHostname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustEvaluate(System.IntPtr,Mono.Security.X509.OSX509Certificates/SecTrustResult&)
extern "C" int32_t OSX509Certificates_SecTrustEvaluate_m14365 (Object_t * __this /* static, unused */, IntPtr_t ___secTrustRef, int32_t* ___secTrustResultTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFDataCreate(System.IntPtr,System.Byte*,System.IntPtr)
extern "C" IntPtr_t OSX509Certificates_CFDataCreate_m14366 (Object_t * __this /* static, unused */, IntPtr_t ___allocator, uint8_t* ___bytes, IntPtr_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.OSX509Certificates::CFRelease(System.IntPtr)
extern "C" void OSX509Certificates_CFRelease_m14367 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFArrayCreate(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IntPtr_t OSX509Certificates_CFArrayCreate_m14368 (Object_t * __this /* static, unused */, IntPtr_t ___allocator, IntPtr_t ___values, IntPtr_t ___numValues, IntPtr_t ___callbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::MakeCFData(System.Byte[])
extern "C" IntPtr_t OSX509Certificates_MakeCFData_m14369 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::FromIntPtrs(System.IntPtr[])
extern "C" IntPtr_t OSX509Certificates_FromIntPtrs_m14370 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t2906* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C" int32_t OSX509Certificates_TrustEvaluateSsl_m14371 (Object_t * __this /* static, unused */, X509CertificateCollection_t3809 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::_TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C" int32_t OSX509Certificates__TrustEvaluateSsl_m14372 (Object_t * __this /* static, unused */, X509CertificateCollection_t3809 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
