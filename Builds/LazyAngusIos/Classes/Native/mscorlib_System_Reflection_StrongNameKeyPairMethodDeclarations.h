#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t5012;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Object
struct Object_t;
// System.Security.Cryptography.RSA
struct RSA_t3147;
// Mono.Security.StrongName
struct StrongName_t4792;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair__ctor_m22085 (StrongNameKeyPair_t5012 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m22086 (StrongNameKeyPair_t5012 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m22087 (StrongNameKeyPair_t5012 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C" RSA_t3147 * StrongNameKeyPair_GetRSA_m22088 (StrongNameKeyPair_t5012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C" StrongName_t4792 * StrongNameKeyPair_StrongName_m22089 (StrongNameKeyPair_t5012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
