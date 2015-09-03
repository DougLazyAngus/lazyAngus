#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t3258;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3257;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1314;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C" void RSACryptoServiceProvider__ctor_m23475 (RSACryptoServiceProvider_t3258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider__ctor_m11486 (RSACryptoServiceProvider_t3258 * __this, CspParameters_t3257 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void RSACryptoServiceProvider__ctor_m11509 (RSACryptoServiceProvider_t3258 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C" void RSACryptoServiceProvider__cctor_m23476 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider_Common_m23477 (RSACryptoServiceProvider_t3258 * __this, int32_t ___dwKeySize, CspParameters_t3257 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C" void RSACryptoServiceProvider_Finalize_m23478 (RSACryptoServiceProvider_t3258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C" int32_t RSACryptoServiceProvider_get_KeySize_m23479 (RSACryptoServiceProvider_t3258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C" bool RSACryptoServiceProvider_get_PublicOnly_m18134 (RSACryptoServiceProvider_t3258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t66* RSACryptoServiceProvider_DecryptValue_m23480 (RSACryptoServiceProvider_t3258 * __this, ByteU5BU5D_t66* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t66* RSACryptoServiceProvider_EncryptValue_m23481 (RSACryptoServiceProvider_t3258 * __this, ByteU5BU5D_t66* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" RSAParameters_t3224  RSACryptoServiceProvider_ExportParameters_m23482 (RSACryptoServiceProvider_t3258 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSACryptoServiceProvider_ImportParameters_m23483 (RSACryptoServiceProvider_t3258 * __this, RSAParameters_t3224  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSACryptoServiceProvider::GetHashNameFromOID(System.String)
extern "C" String_t* RSACryptoServiceProvider_GetHashNameFromOID_m23484 (RSACryptoServiceProvider_t3258 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C" bool RSACryptoServiceProvider_VerifyHash_m23485 (RSACryptoServiceProvider_t3258 * __this, ByteU5BU5D_t66* ___rgbHash, String_t* ___str, ByteU5BU5D_t66* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void RSACryptoServiceProvider_Dispose_m23486 (RSACryptoServiceProvider_t3258 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void RSACryptoServiceProvider_OnKeyGenerated_m23487 (RSACryptoServiceProvider_t3258 * __this, Object_t * ___sender, EventArgs_t1314 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
