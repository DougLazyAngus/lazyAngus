#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2767;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t2712;
// System.Reflection.Module
struct Module_t2433;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m15821 (UnitySerializationHolder_t2767 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m15822 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m15823 (Object_t * __this /* static, unused */, DBNull_t2712 * ___instance, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m15824 (Object_t * __this /* static, unused */, Module_t2433 * ___instance, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m15825 (UnitySerializationHolder_t2767 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m15826 (UnitySerializationHolder_t2767 * __this, StreamingContext_t1248  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
