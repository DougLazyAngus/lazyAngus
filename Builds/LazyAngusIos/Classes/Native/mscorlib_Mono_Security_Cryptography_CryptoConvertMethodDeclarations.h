#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t4808;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.RSA
struct RSA_t3154;
// System.String
struct String_t;

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m19681 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m19682 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C" ByteU5BU5D_t66* CryptoConvert_GetBytesLE_m19683 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C" ByteU5BU5D_t66* CryptoConvert_Trim_m19684 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t3154 * CryptoConvert_FromCapiPrivateKeyBlob_m19685 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t66* CryptoConvert_ToCapiPrivateKeyBlob_m19686 (Object_t * __this /* static, unused */, RSA_t3154 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C" RSA_t3154 * CryptoConvert_FromCapiPublicKeyBlob_m19687 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t3154 * CryptoConvert_FromCapiPublicKeyBlob_m19688 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t66* CryptoConvert_ToCapiPublicKeyBlob_m19689 (Object_t * __this /* static, unused */, RSA_t3154 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C" RSA_t3154 * CryptoConvert_FromCapiKeyBlob_m19690 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t3154 * CryptoConvert_FromCapiKeyBlob_m19691 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C" ByteU5BU5D_t66* CryptoConvert_ToCapiKeyBlob_m19692 (Object_t * __this /* static, unused */, RSA_t3154 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C" String_t* CryptoConvert_ToHex_m19693 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C" uint8_t CryptoConvert_FromHexChar_m19694 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C" ByteU5BU5D_t66* CryptoConvert_FromHex_m19695 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
