﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t4095;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t4092;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag
#include "System_System_Security_Cryptography_X509Certificates_X509Rev.h"
// System.Security.Cryptography.X509Certificates.X509RevocationMode
#include "System_System_Security_Cryptography_X509Certificates_X509Rev_0.h"
// System.Security.Cryptography.X509Certificates.X509VerificationFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Ver.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern "C" void X509ChainPolicy__ctor_m14497 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_ExtraStore()
extern "C" X509Certificate2Collection_t4092 * X509ChainPolicy_get_ExtraStore_m14498 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationFlag()
extern "C" int32_t X509ChainPolicy_get_RevocationFlag_m14499 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationMode()
extern "C" int32_t X509ChainPolicy_get_RevocationMode_m14500 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
extern "C" void X509ChainPolicy_set_RevocationMode_m14501 (X509ChainPolicy_t4095 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationFlags()
extern "C" int32_t X509ChainPolicy_get_VerificationFlags_m14502 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationTime()
extern "C" DateTime_t287  X509ChainPolicy_get_VerificationTime_m14503 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern "C" void X509ChainPolicy_Reset_m14504 (X509ChainPolicy_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
