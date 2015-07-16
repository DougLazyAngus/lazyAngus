﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct CipherSuiteFactory_t2191;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2190;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSupportedCiphers(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" CipherSuiteCollection_t2190 * CipherSuiteFactory_GetSupportedCiphers_m10839 (Object_t * __this /* static, unused */, int32_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetTls1SupportedCiphers()
extern "C" CipherSuiteCollection_t2190 * CipherSuiteFactory_GetTls1SupportedCiphers_m10840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.CipherSuiteFactory::GetSsl3SupportedCiphers()
extern "C" CipherSuiteCollection_t2190 * CipherSuiteFactory_GetSsl3SupportedCiphers_m10841 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
