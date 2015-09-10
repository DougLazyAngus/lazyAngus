#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t5232;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t5230;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t5235;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C" void SerializableTypeMetadata__ctor_m23149 (SerializableTypeMetadata_t5232 * __this, Type_t * ___itype, SerializationInfo_t2947 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool SerializableTypeMetadata_IsCompatible_m23150 (SerializableTypeMetadata_t5232 * __this, TypeMetadata_t5230 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void SerializableTypeMetadata_WriteAssemblies_m23151 (SerializableTypeMetadata_t5232 * __this, ObjectWriter_t5235 * ___ow, BinaryWriter_t50 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void SerializableTypeMetadata_WriteTypeData_m23152 (SerializableTypeMetadata_t5232 * __this, ObjectWriter_t5235 * ___ow, BinaryWriter_t50 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void SerializableTypeMetadata_WriteObjectData_m23153 (SerializableTypeMetadata_t5232 * __this, ObjectWriter_t5235 * ___ow, BinaryWriter_t50 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C" bool SerializableTypeMetadata_get_RequiresTypes_m23154 (SerializableTypeMetadata_t5232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
