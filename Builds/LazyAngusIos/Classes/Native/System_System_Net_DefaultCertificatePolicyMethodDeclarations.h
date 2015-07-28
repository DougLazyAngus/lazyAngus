#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t3969;
// System.Net.ServicePoint
struct ServicePoint_t3877;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3825;
// System.Net.WebRequest
struct WebRequest_t3244;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m13435 (DefaultCertificatePolicy_t3969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m13436 (DefaultCertificatePolicy_t3969 * __this, ServicePoint_t3877 * ___point, X509Certificate_t3825 * ___certificate, WebRequest_t3244 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
