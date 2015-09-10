#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Hash
struct Hash_t5344;
// System.Reflection.Assembly
struct Assembly_t794;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Policy.Hash::.ctor(System.Reflection.Assembly)
extern "C" void Hash__ctor_m23998 (Hash_t5344 * __this, Assembly_t794 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor()
extern "C" void Hash__ctor_m23999 (Hash_t5344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash__ctor_m24000 (Hash_t5344 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash_GetObjectData_m24001 (Hash_t5344 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Hash::ToString()
extern "C" String_t* Hash_ToString_m24002 (Hash_t5344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Policy.Hash::GetData()
extern "C" ByteU5BU5D_t66* Hash_GetData_m24003 (Hash_t5344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
