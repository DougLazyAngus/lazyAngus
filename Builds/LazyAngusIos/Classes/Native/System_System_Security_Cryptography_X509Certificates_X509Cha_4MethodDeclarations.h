﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t1608;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1603;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag
#include "System_System_Security_Cryptography_X509Certificates_X509Rev.h"
// System.Security.Cryptography.X509Certificates.X509RevocationMode
#include "System_System_Security_Cryptography_X509Certificates_X509Rev_0.h"
// System.Security.Cryptography.X509Certificates.X509VerificationFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Ver.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern "C" void X509ChainPolicy__ctor_m8090 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_ExtraStore()
extern "C" X509Certificate2Collection_t1603 * X509ChainPolicy_get_ExtraStore_m8091 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationFlag()
extern "C" int32_t X509ChainPolicy_get_RevocationFlag_m8092 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationMode()
extern "C" int32_t X509ChainPolicy_get_RevocationMode_m8093 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
extern "C" void X509ChainPolicy_set_RevocationMode_m8094 (X509ChainPolicy_t1608 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationFlags()
extern "C" int32_t X509ChainPolicy_get_VerificationFlags_m8095 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationTime()
extern "C" DateTime_t219  X509ChainPolicy_get_VerificationTime_m8096 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern "C" void X509ChainPolicy_Reset_m8097 (X509ChainPolicy_t1608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
