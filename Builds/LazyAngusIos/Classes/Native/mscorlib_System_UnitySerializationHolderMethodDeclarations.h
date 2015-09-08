#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t4929;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t4868;
// System.Reflection.Assembly
struct Assembly_t784;
// System.Reflection.Module
struct Module_t5024;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m20835 (UnitySerializationHolder_t4929 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m20836 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m20837 (Object_t * __this /* static, unused */, DBNull_t4868 * ___instance, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetAssemblyData(System.Reflection.Assembly,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetAssemblyData_m20838 (Object_t * __this /* static, unused */, Assembly_t784 * ___instance, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m20839 (Object_t * __this /* static, unused */, Module_t5024 * ___instance, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m20840 (UnitySerializationHolder_t4929 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m20841 (UnitySerializationHolder_t4929 * __this, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
