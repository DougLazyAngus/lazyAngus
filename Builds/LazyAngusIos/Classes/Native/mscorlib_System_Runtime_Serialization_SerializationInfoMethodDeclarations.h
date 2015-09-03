#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t5201;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t5202;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern "C" void SerializationInfo__ctor_m22985 (SerializationInfo_t2936 * __this, Type_t * ___type, Object_t * ___converter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::get_AssemblyName()
extern "C" String_t* SerializationInfo_get_AssemblyName_m22986 (SerializationInfo_t2936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::get_FullTypeName()
extern "C" String_t* SerializationInfo_get_FullTypeName_m22987 (SerializationInfo_t2936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::get_MemberCount()
extern "C" int32_t SerializationInfo_get_MemberCount_m22988 (SerializationInfo_t2936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C" void SerializationInfo_AddValue_m18020 (SerializationInfo_t2936 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" Object_t * SerializationInfo_GetValue_m14760 (SerializationInfo_t2936 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" void SerializationInfo_SetType_m22989 (SerializationInfo_t2936 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern "C" SerializationInfoEnumerator_t5202 * SerializationInfo_GetEnumerator_m22990 (SerializationInfo_t2936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern "C" void SerializationInfo_AddValue_m22991 (SerializationInfo_t2936 * __this, String_t* ___name, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" void SerializationInfo_AddValue_m12077 (SerializationInfo_t2936 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" void SerializationInfo_AddValue_m14820 (SerializationInfo_t2936 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern "C" void SerializationInfo_AddValue_m22992 (SerializationInfo_t2936 * __this, String_t* ___name, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern "C" void SerializationInfo_AddValue_m22993 (SerializationInfo_t2936 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt32)
extern "C" void SerializationInfo_AddValue_m22994 (SerializationInfo_t2936 * __this, String_t* ___name, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern "C" void SerializationInfo_AddValue_m18095 (SerializationInfo_t2936 * __this, String_t* ___name, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C" void SerializationInfo_AddValue_m22995 (SerializationInfo_t2936 * __this, String_t* ___name, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" void SerializationInfo_AddValue_m11514 (SerializationInfo_t2936 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" bool SerializationInfo_GetBoolean_m14819 (SerializationInfo_t2936 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern "C" int16_t SerializationInfo_GetInt16_m22996 (SerializationInfo_t2936 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" int32_t SerializationInfo_GetInt32_m12073 (SerializationInfo_t2936 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern "C" int64_t SerializationInfo_GetInt64_m18094 (SerializationInfo_t2936 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" String_t* SerializationInfo_GetString_m12072 (SerializationInfo_t2936 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Runtime.Serialization.SerializationInfo::GetUInt32(System.String)
extern "C" uint32_t SerializationInfo_GetUInt32_m22997 (SerializationInfo_t2936 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
