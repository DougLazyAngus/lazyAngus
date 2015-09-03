#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t5008;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Object
struct Object_t;
// System.Security.Cryptography.RSA
struct RSA_t3143;
// Mono.Security.StrongName
struct StrongName_t4788;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair__ctor_m22072 (StrongNameKeyPair_t5008 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m22073 (StrongNameKeyPair_t5008 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m22074 (StrongNameKeyPair_t5008 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C" RSA_t3143 * StrongNameKeyPair_GetRSA_m22075 (StrongNameKeyPair_t5008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C" StrongName_t4788 * StrongNameKeyPair_StrongName_m22076 (StrongNameKeyPair_t5008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
