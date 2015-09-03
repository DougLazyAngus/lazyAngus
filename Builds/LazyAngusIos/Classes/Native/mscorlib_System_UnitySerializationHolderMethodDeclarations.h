#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t4928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t4867;
// System.Reflection.Assembly
struct Assembly_t783;
// System.Reflection.Module
struct Module_t5023;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m20822 (UnitySerializationHolder_t4928 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m20823 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m20824 (Object_t * __this /* static, unused */, DBNull_t4867 * ___instance, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetAssemblyData(System.Reflection.Assembly,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetAssemblyData_m20825 (Object_t * __this /* static, unused */, Assembly_t783 * ___instance, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m20826 (Object_t * __this /* static, unused */, Module_t5023 * ___instance, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m20827 (UnitySerializationHolder_t4928 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m20828 (UnitySerializationHolder_t4928 * __this, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
