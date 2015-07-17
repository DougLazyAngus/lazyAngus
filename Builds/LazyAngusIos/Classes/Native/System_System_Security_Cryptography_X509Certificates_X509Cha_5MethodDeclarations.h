#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t2086;
struct X509ChainStatus_t2086_marshaled;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509ChainStatus__ctor_m10928 (X509ChainStatus_t2086 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
extern "C" int32_t X509ChainStatus_get_Status_m10929 (X509ChainStatus_t2086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509ChainStatus_set_Status_m10930 (X509ChainStatus_t2086 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_StatusInformation(System.String)
extern "C" void X509ChainStatus_set_StatusInformation_m10931 (X509ChainStatus_t2086 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" String_t* X509ChainStatus_GetInformation_m10932 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void X509ChainStatus_t2086_marshal(const X509ChainStatus_t2086& unmarshaled, X509ChainStatus_t2086_marshaled& marshaled);
void X509ChainStatus_t2086_marshal_back(const X509ChainStatus_t2086_marshaled& marshaled, X509ChainStatus_t2086& unmarshaled);
void X509ChainStatus_t2086_marshal_cleanup(X509ChainStatus_t2086_marshaled& marshaled);
