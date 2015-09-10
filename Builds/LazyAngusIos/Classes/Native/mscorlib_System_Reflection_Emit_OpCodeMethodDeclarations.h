#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.OpCode
struct OpCode_t4594;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Reflection.Emit.OperandType
#include "mscorlib_System_Reflection_Emit_OperandType.h"
// System.Reflection.Emit.StackBehaviour
#include "mscorlib_System_Reflection_Emit_StackBehaviour.h"
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"

// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C" void OpCode__ctor_m22499 (OpCode_t4594 * __this, int32_t ___p, int32_t ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C" int32_t OpCode_GetHashCode_m22500 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern "C" bool OpCode_Equals_m22501 (OpCode_t4594 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C" String_t* OpCode_ToString_m22502 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::get_Name()
extern "C" String_t* OpCode_get_Name_m22503 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C" int32_t OpCode_get_Size_m22504 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.OperandType System.Reflection.Emit.OpCode::get_OperandType()
extern "C" int32_t OpCode_get_OperandType_m22505 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C" int32_t OpCode_get_StackBehaviourPop_m22506 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C" int32_t OpCode_get_StackBehaviourPush_m22507 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Reflection.Emit.OpCode::get_Value()
extern "C" int16_t OpCode_get_Value_m22508 (OpCode_t4594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::op_Equality(System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode)
extern "C" bool OpCode_op_Equality_m22509 (Object_t * __this /* static, unused */, OpCode_t4594  ___a, OpCode_t4594  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
