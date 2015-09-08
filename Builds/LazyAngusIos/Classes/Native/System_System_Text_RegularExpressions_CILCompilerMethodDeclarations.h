#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.CILCompiler
struct CILCompiler_t4483;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t4509;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t4557;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4556;
// System.Text.RegularExpressions.CILCompiler/Frame
struct Frame_t4477;
// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"
// System.Text.RegularExpressions.RxOp
#include "System_System_Text_RegularExpressions_RxOp.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Text.RegularExpressions.CILCompiler::.ctor()
extern "C" void CILCompiler__ctor_m17458 (CILCompiler_t4483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::.cctor()
extern "C" void CILCompiler__cctor_m17459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.CILCompiler::System.Text.RegularExpressions.ICompiler.GetMachineFactory()
extern "C" Object_t * CILCompiler_System_Text_RegularExpressions_ICompiler_GetMachineFactory_m17460 (CILCompiler_t4483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::GetEvalMethod(System.Byte[],System.Int32)
extern "C" DynamicMethod_t4557 * CILCompiler_GetEvalMethod_m17461 (CILCompiler_t4483 * __this, ByteU5BU5D_t66* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.Type,System.String,System.Reflection.MethodInfo&)
extern "C" MethodInfo_t * CILCompiler_GetMethod_m17462 (CILCompiler_t4483 * __this, Type_t * ___t, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.String,System.Reflection.MethodInfo&)
extern "C" MethodInfo_t * CILCompiler_GetMethod_m17463 (CILCompiler_t4483 * __this, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadInt(System.Byte[],System.Int32)
extern "C" int32_t CILCompiler_ReadInt_m17464 (CILCompiler_t4483 * __this, ByteU5BU5D_t66* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.CILCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" uint16_t CILCompiler_MakeFlags_m17465 (Object_t * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitGenericOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void CILCompiler_EmitGenericOp_m17466 (CILCompiler_t4483 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C" void CILCompiler_EmitOp_m17467 (CILCompiler_t4483 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C" void CILCompiler_EmitOpIgnoreReverse_m17468 (CILCompiler_t4483 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C" void CILCompiler_EmitOpNegateReverse_m17469 (CILCompiler_t4483 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::CreateEvalMethod(System.Byte[],System.Int32)
extern "C" DynamicMethod_t4557 * CILCompiler_CreateEvalMethod_m17470 (CILCompiler_t4483 * __this, ByteU5BU5D_t66* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadShort(System.Byte[],System.Int32)
extern "C" int32_t CILCompiler_ReadShort_m17471 (CILCompiler_t4483 * __this, ByteU5BU5D_t66* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler::CreateLabelForPC(System.Reflection.Emit.ILGenerator,System.Int32)
extern "C" Label_t4478  CILCompiler_CreateLabelForPC_m17472 (CILCompiler_t4483 * __this, ILGenerator_t4556 * ___ilgen, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::GetILOffset(System.Reflection.Emit.ILGenerator)
extern "C" int32_t CILCompiler_GetILOffset_m17473 (CILCompiler_t4483 * __this, ILGenerator_t4556 * ___ilgen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::EmitEvalMethodBody(System.Reflection.Emit.DynamicMethod,System.Reflection.Emit.ILGenerator,System.Text.RegularExpressions.CILCompiler/Frame,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C" DynamicMethod_t4557 * CILCompiler_EmitEvalMethodBody_m17474 (CILCompiler_t4483 * __this, DynamicMethod_t4557 * ___m, ILGenerator_t4556 * ___ilgen, Frame_t4477 * ___frame, ByteU5BU5D_t66* ___program, int32_t ___pc, int32_t ___end_pc, bool ___one_op, bool ___no_bump, int32_t* ___out_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
