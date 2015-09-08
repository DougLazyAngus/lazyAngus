#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Hash
struct Hash_t5334;
// System.Reflection.Assembly
struct Assembly_t784;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Policy.Hash::.ctor(System.Reflection.Assembly)
extern "C" void Hash__ctor_m23941 (Hash_t5334 * __this, Assembly_t784 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor()
extern "C" void Hash__ctor_m23942 (Hash_t5334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash__ctor_m23943 (Hash_t5334 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash_GetObjectData_m23944 (Hash_t5334 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Hash::ToString()
extern "C" String_t* Hash_ToString_m23945 (Hash_t5334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Policy.Hash::GetData()
extern "C" ByteU5BU5D_t66* Hash_GetData_m23946 (Hash_t5334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
