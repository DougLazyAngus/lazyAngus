#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3824;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C" void X509Certificate__ctor_m18256 (X509Certificate_t3824 * __this, ByteU5BU5D_t66* ___data, bool ___dates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m12887 (X509Certificate_t3824 * __this, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509Certificate__ctor_m14834 (X509Certificate_t3824 * __this, X509Certificate_t3824 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C" void X509Certificate__ctor_m14833 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate__ctor_m18257 (X509Certificate_t3824 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m15187 (X509Certificate_t3824 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m15186 (X509Certificate_t3824 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C" String_t* X509Certificate_tostr_m18258 (X509Certificate_t3824 * __this, ByteU5BU5D_t66* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" bool X509Certificate_Equals_m15188 (X509Certificate_t3824 * __this, X509Certificate_t3824 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C" ByteU5BU5D_t66* X509Certificate_GetCertHash_m15189 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C" String_t* X509Certificate_GetCertHashString_m14837 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C" String_t* X509Certificate_GetEffectiveDateString_m15190 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C" String_t* X509Certificate_GetExpirationDateString_m15191 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C" int32_t X509Certificate_GetHashCode_m15185 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C" String_t* X509Certificate_GetIssuerName_m15192 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C" String_t* X509Certificate_GetName_m15193 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C" ByteU5BU5D_t66* X509Certificate_GetPublicKey_m15194 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C" ByteU5BU5D_t66* X509Certificate_GetRawCertData_m14835 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C" String_t* X509Certificate_ToString_m18259 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C" String_t* X509Certificate_ToString_m14840 (X509Certificate_t3824 * __this, bool ___fVerbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C" String_t* X509Certificate_get_Issuer_m14842 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C" String_t* X509Certificate_get_Subject_m14841 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C" bool X509Certificate_Equals_m15184 (X509Certificate_t3824 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate_Import_m14838 (X509Certificate_t3824 * __this, ByteU5BU5D_t66* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C" void X509Certificate_Reset_m14839 (X509Certificate_t3824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
