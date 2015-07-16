#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1524;
// System.Net.ServicePoint
struct ServicePoint_t1552;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1576;
// System.Net.WebRequest
struct WebRequest_t1539;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m7398 (DefaultCertificatePolicy_t1524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m7399 (DefaultCertificatePolicy_t1524 * __this, ServicePoint_t1552 * ___point, X509Certificate_t1576 * ___certificate, WebRequest_t1539 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
