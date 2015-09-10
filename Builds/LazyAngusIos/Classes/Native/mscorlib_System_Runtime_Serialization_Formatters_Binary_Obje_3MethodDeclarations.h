#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t5235;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t5183;
// System.IO.BinaryWriter
struct BinaryWriter_t50;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t5399;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t5230;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t794;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C" void ObjectWriter__ctor_m23160 (ObjectWriter_t5235 * __this, Object_t * ___surrogateSelector, StreamingContext_t2948  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::.cctor()
extern "C" void ObjectWriter__cctor_m23161 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectGraph(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C" void ObjectWriter_WriteObjectGraph_m23162 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Object_t * ___obj, HeaderU5BU5D_t5399* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::QueueObject(System.Object)
extern "C" void ObjectWriter_QueueObject_m23163 (ObjectWriter_t5235 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteQueuedObjects(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteQueuedObjects_m23164 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectInstance(System.IO.BinaryWriter,System.Object,System.Boolean)
extern "C" void ObjectWriter_WriteObjectInstance_m23165 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Object_t * ___obj, bool ___isValueObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSerializationEnd(System.IO.BinaryWriter)
extern "C" void ObjectWriter_WriteSerializationEnd_m23166 (Object_t * __this /* static, unused */, BinaryWriter_t50 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObject(System.IO.BinaryWriter,System.Int64,System.Object)
extern "C" void ObjectWriter_WriteObject_m23167 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetObjectData(System.Object,System.Runtime.Serialization.Formatters.Binary.TypeMetadata&,System.Object&)
extern "C" void ObjectWriter_GetObjectData_m23168 (ObjectWriter_t5235 * __this, Object_t * ___obj, TypeMetadata_t5230 ** ___metadata, Object_t ** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CreateMemberTypeMetadata(System.Type)
extern "C" TypeMetadata_t5230 * ObjectWriter_CreateMemberTypeMetadata_m23169 (ObjectWriter_t5235 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteArray_m23170 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteGenericArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteGenericArray_m23171 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteObjectArray_m23172 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteStringArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WriteStringArray_m23173 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveTypeArray(System.IO.BinaryWriter,System.Int64,System.Array)
extern "C" void ObjectWriter_WritePrimitiveTypeArray_m23174 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::BlockWrite(System.IO.BinaryWriter,System.Array,System.Int32)
extern "C" void ObjectWriter_BlockWrite_m23175 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Array_t * ___array, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteSingleDimensionArrayElements(System.IO.BinaryWriter,System.Array,System.Type)
extern "C" void ObjectWriter_WriteSingleDimensionArrayElements_m23176 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Array_t * ___array, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteNullFiller(System.IO.BinaryWriter,System.Int32)
extern "C" void ObjectWriter_WriteNullFiller_m23177 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int32_t ___numNulls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteObjectReference(System.IO.BinaryWriter,System.Int64)
extern "C" void ObjectWriter_WriteObjectReference_m23178 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteValue(System.IO.BinaryWriter,System.Type,System.Object)
extern "C" void ObjectWriter_WriteValue_m23179 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Type_t * ___valueType, Object_t * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteString(System.IO.BinaryWriter,System.Int64,System.String)
extern "C" void ObjectWriter_WriteString_m23180 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, int64_t ___id, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssembly(System.IO.BinaryWriter,System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_WriteAssembly_m23181 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Assembly_t794 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteAssemblyName(System.IO.BinaryWriter,System.String)
extern "C" int32_t ObjectWriter_WriteAssemblyName_m23182 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyId(System.Reflection.Assembly)
extern "C" int32_t ObjectWriter_GetAssemblyId_m23183 (ObjectWriter_t5235 * __this, Assembly_t794 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetAssemblyNameId(System.String)
extern "C" int32_t ObjectWriter_GetAssemblyNameId_m23184 (ObjectWriter_t5235 * __this, String_t* ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::RegisterAssembly(System.String,System.Boolean&)
extern "C" int32_t ObjectWriter_RegisterAssembly_m23185 (ObjectWriter_t5235 * __this, String_t* ___assembly, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WritePrimitiveValue(System.IO.BinaryWriter,System.Object)
extern "C" void ObjectWriter_WritePrimitiveValue_m23186 (Object_t * __this /* static, unused */, BinaryWriter_t50 * ___writer, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeCode(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeCode_m23187 (Object_t * __this /* static, unused */, BinaryWriter_t50 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.Binary.TypeTag System.Runtime.Serialization.Formatters.Binary.ObjectWriter::GetTypeTag(System.Type)
extern "C" uint8_t ObjectWriter_GetTypeTag_m23188 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectWriter::WriteTypeSpec(System.IO.BinaryWriter,System.Type)
extern "C" void ObjectWriter_WriteTypeSpec_m23189 (ObjectWriter_t5235 * __this, BinaryWriter_t50 * ___writer, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
