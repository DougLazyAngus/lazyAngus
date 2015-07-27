#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t2081;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2073;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C" void X509Extension__ctor_m10953 (X509Extension_t2081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m10954 (X509Extension_t2081 * __this, String_t* ___oid, ByteU5BU5D_t36* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m10955 (X509Extension_t2081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C" void X509Extension_set_Critical_m10956 (X509Extension_t2081 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509Extension_CopyFrom_m10957 (X509Extension_t2081 * __this, AsnEncodedData_t2073 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C" String_t* X509Extension_FormatUnkownData_m10958 (X509Extension_t2081 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
