﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t2011;
// System.Net.ServicePoint
struct ServicePoint_t1883;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1830;
// System.Net.WebRequest
struct WebRequest_t1704;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m10217 (DefaultCertificatePolicy_t2011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m10218 (DefaultCertificatePolicy_t2011 * __this, ServicePoint_t1883 * ___point, X509Certificate_t1830 * ___certificate, WebRequest_t1704 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
