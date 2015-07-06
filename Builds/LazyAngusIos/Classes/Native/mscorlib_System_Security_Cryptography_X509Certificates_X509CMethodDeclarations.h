#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1543;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C" void X509Certificate__ctor_m14168 (X509Certificate_t1543 * __this, ByteU5BU5D_t36* ___data, bool ___dates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m11087 (X509Certificate_t1543 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509Certificate__ctor_m8695 (X509Certificate_t1543 * __this, X509Certificate_t1543 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C" void X509Certificate__ctor_m8694 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate__ctor_m14169 (X509Certificate_t1543 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m9028 (X509Certificate_t1543 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m9027 (X509Certificate_t1543 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C" String_t* X509Certificate_tostr_m14170 (X509Certificate_t1543 * __this, ByteU5BU5D_t36* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" bool X509Certificate_Equals_m9029 (X509Certificate_t1543 * __this, X509Certificate_t1543 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C" ByteU5BU5D_t36* X509Certificate_GetCertHash_m9030 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C" String_t* X509Certificate_GetCertHashString_m8701 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C" String_t* X509Certificate_GetEffectiveDateString_m9031 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C" String_t* X509Certificate_GetExpirationDateString_m9032 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C" int32_t X509Certificate_GetHashCode_m9026 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C" String_t* X509Certificate_GetIssuerName_m9033 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C" String_t* X509Certificate_GetName_m9034 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C" ByteU5BU5D_t36* X509Certificate_GetPublicKey_m9035 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C" ByteU5BU5D_t36* X509Certificate_GetRawCertData_m8696 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C" String_t* X509Certificate_ToString_m14171 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C" String_t* X509Certificate_ToString_m8712 (X509Certificate_t1543 * __this, bool ___fVerbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C" String_t* X509Certificate_get_Issuer_m8715 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C" String_t* X509Certificate_get_Subject_m8714 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C" bool X509Certificate_Equals_m9025 (X509Certificate_t1543 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m8710 (X509Certificate_t1543 * __this, ByteU5BU5D_t36* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C" void X509Certificate_Reset_m8711 (X509Certificate_t1543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
