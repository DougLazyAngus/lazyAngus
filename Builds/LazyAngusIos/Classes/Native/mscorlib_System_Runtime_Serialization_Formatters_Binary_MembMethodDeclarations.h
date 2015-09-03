#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t5222;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t5224;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberTypeMetadata__ctor_m23085 (MemberTypeMetadata_t5222 * __this, Type_t * ___type, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C" void MemberTypeMetadata_WriteAssemblies_m23086 (MemberTypeMetadata_t5222 * __this, ObjectWriter_t5224 * ___ow, BinaryWriter_t50 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C" void MemberTypeMetadata_WriteTypeData_m23087 (MemberTypeMetadata_t5222 * __this, ObjectWriter_t5224 * ___ow, BinaryWriter_t50 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C" void MemberTypeMetadata_WriteObjectData_m23088 (MemberTypeMetadata_t5222 * __this, ObjectWriter_t5224 * ___ow, BinaryWriter_t50 * ___writer, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
