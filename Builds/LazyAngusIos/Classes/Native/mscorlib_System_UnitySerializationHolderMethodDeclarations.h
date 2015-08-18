#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t4847;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t4792;
// System.Reflection.Module
struct Module_t4518;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m20090 (UnitySerializationHolder_t4847 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m20091 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m20092 (Object_t * __this /* static, unused */, DBNull_t4792 * ___instance, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m20093 (Object_t * __this /* static, unused */, Module_t4518 * ___instance, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m20094 (UnitySerializationHolder_t4847 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m20095 (UnitySerializationHolder_t4847 * __this, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
