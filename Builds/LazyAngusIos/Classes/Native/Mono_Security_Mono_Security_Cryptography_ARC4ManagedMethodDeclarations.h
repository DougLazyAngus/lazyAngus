#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t1737;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1788;

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
extern "C" void ARC4Managed__ctor_m8791 (ARC4Managed_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
extern "C" void ARC4Managed_Finalize_m8792 (ARC4Managed_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
extern "C" void ARC4Managed_Dispose_m8793 (ARC4Managed_t1737 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
extern "C" ByteU5BU5D_t36* ARC4Managed_get_Key_m8794 (ARC4Managed_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
extern "C" void ARC4Managed_set_Key_m8795 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
extern "C" bool ARC4Managed_get_CanReuseTransform_m8796 (ARC4Managed_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * ARC4Managed_CreateEncryptor_m8797 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___rgbKey, ByteU5BU5D_t36* ___rgvIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * ARC4Managed_CreateDecryptor_m8798 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___rgbKey, ByteU5BU5D_t36* ___rgvIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
extern "C" void ARC4Managed_GenerateIV_m8799 (ARC4Managed_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
extern "C" void ARC4Managed_GenerateKey_m8800 (ARC4Managed_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
extern "C" void ARC4Managed_KeySetup_m8801 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void ARC4Managed_CheckInput_m8802 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ARC4Managed_TransformBlock_m8803 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t36* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ARC4Managed_InternalTransformBlock_m8804 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t36* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t36* ARC4Managed_TransformFinalBlock_m8805 (ARC4Managed_t1737 * __this, ByteU5BU5D_t36* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
