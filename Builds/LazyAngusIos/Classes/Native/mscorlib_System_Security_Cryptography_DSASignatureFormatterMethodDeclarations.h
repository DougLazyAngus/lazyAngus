#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t2658;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1848;

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C" void DSASignatureFormatter__ctor_m14999 (DSASignatureFormatter_t2658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t36* DSASignatureFormatter_CreateSignature_m15000 (DSASignatureFormatter_t2658 * __this, ByteU5BU5D_t36* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureFormatter_SetHashAlgorithm_m15001 (DSASignatureFormatter_t2658 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureFormatter_SetKey_m15002 (DSASignatureFormatter_t2658 * __this, AsymmetricAlgorithm_t1848 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
