#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptographicException
struct CryptographicException_t3870;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Cryptography.CryptographicException::.ctor()
extern "C" void CryptographicException__ctor_m18342 (CryptographicException_t3870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" void CryptographicException__ctor_m12896 (CryptographicException_t3870 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
extern "C" void CryptographicException__ctor_m12916 (CryptographicException_t3870 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
extern "C" void CryptographicException__ctor_m18343 (CryptographicException_t3870 * __this, String_t* ___format, String_t* ___insert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CryptographicException__ctor_m18344 (CryptographicException_t3870 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
