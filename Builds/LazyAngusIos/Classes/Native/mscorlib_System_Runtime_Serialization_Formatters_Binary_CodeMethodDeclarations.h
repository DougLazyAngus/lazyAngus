#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct CodeGenerator_t5225;
// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4563;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern "C" void CodeGenerator__cctor_m23107 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" Type_t * CodeGenerator_GenerateMetadataType_m23108 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" Type_t * CodeGenerator_GenerateMetadataTypeInternal_m23109 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_LoadFromPtr_m23110 (Object_t * __this /* static, unused */, ILGenerator_t4563 * ___ig, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C" void CodeGenerator_EmitWriteTypeSpec_m23111 (Object_t * __this /* static, unused */, ILGenerator_t4563 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C" void CodeGenerator_EmitLoadTypeAssembly_m23112 (Object_t * __this /* static, unused */, ILGenerator_t4563 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_EmitWrite_m23113 (Object_t * __this /* static, unused */, ILGenerator_t4563 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern "C" void CodeGenerator_EmitWritePrimitiveValue_m23114 (Object_t * __this /* static, unused */, ILGenerator_t4563 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern "C" Type_t * CodeGenerator_EnumToUnderlying_m23115 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
