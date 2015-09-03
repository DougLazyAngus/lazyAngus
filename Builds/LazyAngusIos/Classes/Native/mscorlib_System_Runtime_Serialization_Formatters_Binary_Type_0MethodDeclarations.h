#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t5219;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t5224;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.Object
struct Object_t;

// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::.ctor()
extern "C" void TypeMetadata__ctor_m23075 (TypeMetadata_t5219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
// System.Void System.Runtime.Serialization.Formatters.Binary.TypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C" bool TypeMetadata_IsCompatible_m23076 (TypeMetadata_t5219 * __this, TypeMetadata_t5219 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.TypeMetadata::get_RequiresTypes()
