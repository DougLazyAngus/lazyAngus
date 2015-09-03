#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t5221;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t5219;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t5224;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C" void SerializableTypeMetadata__ctor_m23079 (SerializableTypeMetadata_t5221 * __this, Type_t * ___itype, SerializationInfo_t2936 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool SerializableTypeMetadata_IsCompatible_m23080 (SerializableTypeMetadata_t5221 * __this, TypeMetadata_t5219 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void SerializableTypeMetadata_WriteAssemblies_m23081 (SerializableTypeMetadata_t5221 * __this, ObjectWriter_t5224 * ___ow, BinaryWriter_t50 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void SerializableTypeMetadata_WriteTypeData_m23082 (SerializableTypeMetadata_t5221 * __this, ObjectWriter_t5224 * ___ow, BinaryWriter_t50 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void SerializableTypeMetadata_WriteObjectData_m23083 (SerializableTypeMetadata_t5221 * __this, ObjectWriter_t5224 * ___ow, BinaryWriter_t50 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C" bool SerializableTypeMetadata_get_RequiresTypes_m23084 (SerializableTypeMetadata_t5221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
