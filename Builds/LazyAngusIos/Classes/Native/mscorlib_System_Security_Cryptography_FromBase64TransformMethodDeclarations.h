#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.FromBase64Transform
struct FromBase64Transform_t3734;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Security.Cryptography.FromBase64TransformMode
#include "mscorlib_System_Security_Cryptography_FromBase64TransformMod.h"

// System.Void System.Security.Cryptography.FromBase64Transform::.ctor()
extern "C" void FromBase64Transform__ctor_m14821 (FromBase64Transform_t3734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::.ctor(System.Security.Cryptography.FromBase64TransformMode)
extern "C" void FromBase64Transform__ctor_m23346 (FromBase64Transform_t3734 * __this, int32_t ___whitespaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::System.IDisposable.Dispose()
extern "C" void FromBase64Transform_System_IDisposable_Dispose_m23347 (FromBase64Transform_t3734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Finalize()
extern "C" void FromBase64Transform_Finalize_m23348 (FromBase64Transform_t3734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.FromBase64Transform::get_CanReuseTransform()
extern "C" bool FromBase64Transform_get_CanReuseTransform_m23349 (FromBase64Transform_t3734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::Dispose(System.Boolean)
extern "C" void FromBase64Transform_Dispose_m23350 (FromBase64Transform_t3734 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.FromBase64Transform::lookup(System.Byte)
extern "C" uint8_t FromBase64Transform_lookup_m23351 (FromBase64Transform_t3734 * __this, uint8_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::ProcessBlock(System.Byte[],System.Int32)
extern "C" int32_t FromBase64Transform_ProcessBlock_m23352 (FromBase64Transform_t3734 * __this, ByteU5BU5D_t66* ___output, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.FromBase64Transform::CheckInputParameters(System.Byte[],System.Int32,System.Int32)
extern "C" void FromBase64Transform_CheckInputParameters_m23353 (FromBase64Transform_t3734 * __this, ByteU5BU5D_t66* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.FromBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t FromBase64Transform_TransformBlock_m23354 (FromBase64Transform_t3734 * __this, ByteU5BU5D_t66* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t66* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.FromBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t66* FromBase64Transform_TransformFinalBlock_m23355 (FromBase64Transform_t3734 * __this, ByteU5BU5D_t66* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
