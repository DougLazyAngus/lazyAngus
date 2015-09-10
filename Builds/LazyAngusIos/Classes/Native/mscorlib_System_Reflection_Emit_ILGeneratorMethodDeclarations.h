#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4563;
// System.Reflection.Module
struct Module_t5034;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t5081;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t4489;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1409;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1231;
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C" void ILGenerator__ctor_m22401 (ILGenerator_t4563 * __this, Module_t5034 * ___m, Object_t * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C" void ILGenerator__cctor_m22402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C" void ILGenerator_add_token_fixup_m22403 (ILGenerator_t4563 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C" void ILGenerator_make_room_m22404 (ILGenerator_t4563 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C" void ILGenerator_emit_int_m22405 (ILGenerator_t4563 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_ll_emit_m22406 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C" int32_t ILGenerator_target_len_m22407 (Object_t * __this /* static, unused */, OpCode_t4594  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C" LocalBuilder_t4489 * ILGenerator_DeclareLocal_m22408 (ILGenerator_t4563 * __this, Type_t * ___localType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C" LocalBuilder_t4489 * ILGenerator_DeclareLocal_m22409 (ILGenerator_t4563 * __this, Type_t * ___localType, bool ___pinned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C" Label_t4485  ILGenerator_DefineLabel_m22410 (ILGenerator_t4563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_Emit_m22411 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C" void ILGenerator_Emit_m22412 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, uint8_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C" void ILGenerator_Emit_m22413 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, ConstructorInfo_t1409 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C" void ILGenerator_Emit_m22414 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C" void ILGenerator_Emit_m22415 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, int32_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int64)
extern "C" void ILGenerator_Emit_m22416 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, int64_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C" void ILGenerator_Emit_m22417 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, Label_t4485  ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C" void ILGenerator_Emit_m22418 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, LocalBuilder_t4489 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C" void ILGenerator_Emit_m22419 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C" void ILGenerator_Emit_m22420 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, MethodInfo_t * ___method, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C" void ILGenerator_Emit_m22421 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C" void ILGenerator_Emit_m22422 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, Type_t * ___cls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C" void ILGenerator_EmitCall_m22423 (ILGenerator_t4563 * __this, OpCode_t4594  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t1231* ___optionalParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C" void ILGenerator_MarkLabel_m22424 (ILGenerator_t4563 * __this, Label_t4485  ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C" void ILGenerator_label_fixup_m22425 (ILGenerator_t4563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C" int32_t ILGenerator_Mono_GetCurrentOffset_m22426 (Object_t * __this /* static, unused */, ILGenerator_t4563 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
