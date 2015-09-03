#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct CodeGenerator_t5214;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4552;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern "C" void CodeGenerator__cctor_m23037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" Type_t * CodeGenerator_GenerateMetadataType_m23038 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" Type_t * CodeGenerator_GenerateMetadataTypeInternal_m23039 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_LoadFromPtr_m23040 (Object_t * __this /* static, unused */, ILGenerator_t4552 * ___ig, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C" void CodeGenerator_EmitWriteTypeSpec_m23041 (Object_t * __this /* static, unused */, ILGenerator_t4552 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C" void CodeGenerator_EmitLoadTypeAssembly_m23042 (Object_t * __this /* static, unused */, ILGenerator_t4552 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_EmitWrite_m23043 (Object_t * __this /* static, unused */, ILGenerator_t4552 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_EmitWritePrimitiveValue_m23044 (Object_t * __this /* static, unused */, ILGenerator_t4552 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern "C" Type_t * CodeGenerator_EnumToUnderlying_m23045 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
