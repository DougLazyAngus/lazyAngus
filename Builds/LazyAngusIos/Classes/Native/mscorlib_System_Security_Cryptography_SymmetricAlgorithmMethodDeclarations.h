#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3140;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3139;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3179;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C" void SymmetricAlgorithm__ctor_m11488 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C" void SymmetricAlgorithm_System_IDisposable_Dispose_m11585 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C" void SymmetricAlgorithm_Finalize_m11474 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C" void SymmetricAlgorithm_Clear_m11499 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C" void SymmetricAlgorithm_Dispose_m11605 (SymmetricAlgorithm_t3140 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C" int32_t SymmetricAlgorithm_get_BlockSize_m11586 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C" void SymmetricAlgorithm_set_BlockSize_m11587 (SymmetricAlgorithm_t3140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C" int32_t SymmetricAlgorithm_get_FeedbackSize_m11588 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C" ByteU5BU5D_t66* SymmetricAlgorithm_get_IV_m23567 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C" void SymmetricAlgorithm_set_IV_m23568 (SymmetricAlgorithm_t3140 * __this, ByteU5BU5D_t66* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C" ByteU5BU5D_t66* SymmetricAlgorithm_get_Key_m11606 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C" void SymmetricAlgorithm_set_Key_m11607 (SymmetricAlgorithm_t3140 * __this, ByteU5BU5D_t66* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C" int32_t SymmetricAlgorithm_get_KeySize_m11589 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C" void SymmetricAlgorithm_set_KeySize_m11590 (SymmetricAlgorithm_t3140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C" KeySizesU5BU5D_t3139* SymmetricAlgorithm_get_LegalKeySizes_m11591 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C" int32_t SymmetricAlgorithm_get_Mode_m11592 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C" void SymmetricAlgorithm_set_Mode_m11593 (SymmetricAlgorithm_t3140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C" int32_t SymmetricAlgorithm_get_Padding_m11594 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C" void SymmetricAlgorithm_set_Padding_m11595 (SymmetricAlgorithm_t3140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateDecryptor_m11596 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateEncryptor_m11597 (SymmetricAlgorithm_t3140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C" SymmetricAlgorithm_t3140 * SymmetricAlgorithm_Create_m11498 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
