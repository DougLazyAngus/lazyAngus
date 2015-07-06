#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter
struct Interpreter_t1642;
// System.UInt16[]
struct UInt16U5BU5D_t1537;
// System.Text.RegularExpressions.Match
struct Match_t1606;
// System.Text.RegularExpressions.Regex
struct Regex_t1264;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t1612;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern "C" void Interpreter__ctor_m8189 (Interpreter_t1642 * __this, UInt16U5BU5D_t1537* ___program, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern "C" int32_t Interpreter_ReadProgramCount_m8190 (Interpreter_t1642 * __this, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1606 * Interpreter_Scan_m8191 (Interpreter_t1642 * __this, Regex_t1264 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern "C" void Interpreter_Reset_m8192 (Interpreter_t1642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern "C" bool Interpreter_Eval_m8193 (Interpreter_t1642 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern "C" bool Interpreter_EvalChar_m8194 (Interpreter_t1642 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern "C" bool Interpreter_TryMatch_m8195 (Interpreter_t1642 * __this, int32_t* ___ref_ptr, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern "C" bool Interpreter_IsPosition_m8196 (Interpreter_t1642 * __this, uint16_t ___pos, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern "C" bool Interpreter_IsWordChar_m8197 (Interpreter_t1642 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern "C" String_t* Interpreter_GetString_m8198 (Interpreter_t1642 * __this, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern "C" void Interpreter_Open_m8199 (Interpreter_t1642 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern "C" void Interpreter_Close_m8200 (Interpreter_t1642 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool Interpreter_Balance_m8201 (Interpreter_t1642 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern "C" int32_t Interpreter_Checkpoint_m8202 (Interpreter_t1642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern "C" void Interpreter_Backtrack_m8203 (Interpreter_t1642 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern "C" void Interpreter_ResetGroups_m8204 (Interpreter_t1642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern "C" int32_t Interpreter_GetLastDefined_m8205 (Interpreter_t1642 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern "C" int32_t Interpreter_CreateMark_m8206 (Interpreter_t1642 * __this, int32_t ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void Interpreter_GetGroupInfo_m8207 (Interpreter_t1642 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C" void Interpreter_PopulateGroup_m8208 (Interpreter_t1642 * __this, Group_t1612 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C" Match_t1606 * Interpreter_GenerateMatch_m8209 (Interpreter_t1642 * __this, Regex_t1264 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
