#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t4511;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4510;
// System.Text.RegularExpressions.Match
struct Match_t1391;
// System.Text.RegularExpressions.Regex
struct Regex_t801;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t1452;

// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C" void RxInterpreter__ctor_m17709 (RxInterpreter_t4511 * __this, ByteU5BU5D_t66* ___program, EvalDelegate_t4510 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern "C" void RxInterpreter__cctor_m17710 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C" int32_t RxInterpreter_ReadInt_m17711 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t1391 * RxInterpreter_Scan_m17712 (RxInterpreter_t4511 * __this, Regex_t801 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C" void RxInterpreter_Open_m17713 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C" void RxInterpreter_Close_m17714 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool RxInterpreter_Balance_m17715 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C" int32_t RxInterpreter_Checkpoint_m17716 (RxInterpreter_t4511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C" void RxInterpreter_Backtrack_m17717 (RxInterpreter_t4511 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern "C" void RxInterpreter_ResetGroups_m17718 (RxInterpreter_t4511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C" int32_t RxInterpreter_GetLastDefined_m17719 (RxInterpreter_t4511 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern "C" int32_t RxInterpreter_CreateMark_m17720 (RxInterpreter_t4511 * __this, int32_t ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void RxInterpreter_GetGroupInfo_m17721 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C" void RxInterpreter_PopulateGroup_m17722 (RxInterpreter_t4511 * __this, Group_t1452 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C" Match_t1391 * RxInterpreter_GenerateMatch_m17723 (RxInterpreter_t4511 * __this, Regex_t801 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern "C" bool RxInterpreter_IsWordChar_m17724 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern "C" bool RxInterpreter_EvalByteCode_m17725 (RxInterpreter_t4511 * __this, int32_t ___pc, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
