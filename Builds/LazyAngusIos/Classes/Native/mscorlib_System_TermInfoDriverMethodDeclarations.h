#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TermInfoDriver
struct TermInfoDriver_t4848;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t711;
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.TermInfoStrings
#include "mscorlib_System_TermInfoStrings.h"

// System.Void System.TermInfoDriver::.ctor(System.String)
extern "C" void TermInfoDriver__ctor_m20709 (TermInfoDriver_t4848 * __this, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::.cctor()
extern "C" void TermInfoDriver__cctor_m20710 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::SearchTerminfo(System.String)
extern "C" String_t* TermInfoDriver_SearchTerminfo_m20711 (Object_t * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteConsole(System.String)
extern "C" void TermInfoDriver_WriteConsole_m20712 (TermInfoDriver_t4848 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::get_Initialized()
extern "C" bool TermInfoDriver_get_Initialized_m20713 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Init()
extern "C" void TermInfoDriver_Init_m20714 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::MangleParameters(System.String)
extern "C" String_t* TermInfoDriver_MangleParameters_m20715 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::IncrementX()
extern "C" void TermInfoDriver_IncrementX_m20716 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
extern "C" void TermInfoDriver_WriteSpecialKey_m20717 (TermInfoDriver_t4848 * __this, ConsoleKeyInfo_t4859  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
extern "C" void TermInfoDriver_WriteSpecialKey_m20718 (TermInfoDriver_t4848 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.ConsoleKeyInfo)
extern "C" bool TermInfoDriver_IsSpecialKey_m20719 (TermInfoDriver_t4848 * __this, ConsoleKeyInfo_t4859  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::IsSpecialKey(System.Char)
extern "C" bool TermInfoDriver_IsSpecialKey_m20720 (TermInfoDriver_t4848 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::GetCursorPosition()
extern "C" void TermInfoDriver_GetCursorPosition_m20721 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CheckWindowDimensions()
extern "C" void TermInfoDriver_CheckWindowDimensions_m20722 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowHeight()
extern "C" int32_t TermInfoDriver_get_WindowHeight_m20723 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::get_WindowWidth()
extern "C" int32_t TermInfoDriver_get_WindowWidth_m20724 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddToBuffer(System.Int32)
extern "C" void TermInfoDriver_AddToBuffer_m20725 (TermInfoDriver_t4848 * __this, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AdjustBuffer()
extern "C" void TermInfoDriver_AdjustBuffer_m20726 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::CreateKeyInfoFromInt(System.Int32,System.Boolean)
extern "C" ConsoleKeyInfo_t4859  TermInfoDriver_CreateKeyInfoFromInt_m20727 (TermInfoDriver_t4848 * __this, int32_t ___n, bool ___alt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.TermInfoDriver::GetKeyFromBuffer(System.Boolean)
extern "C" Object_t * TermInfoDriver_GetKeyFromBuffer_m20728 (TermInfoDriver_t4848 * __this, bool ___cooked, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKeyInternal(System.Boolean&)
extern "C" ConsoleKeyInfo_t4859  TermInfoDriver_ReadKeyInternal_m20729 (TermInfoDriver_t4848 * __this, bool* ___fresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TermInfoDriver::InputPending()
extern "C" bool TermInfoDriver_InputPending_m20730 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::QueueEcho(System.Char)
extern "C" void TermInfoDriver_QueueEcho_m20731 (TermInfoDriver_t4848 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::Echo(System.ConsoleKeyInfo)
extern "C" void TermInfoDriver_Echo_m20732 (TermInfoDriver_t4848 * __this, ConsoleKeyInfo_t4859  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::EchoFlush()
extern "C" void TermInfoDriver_EchoFlush_m20733 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoDriver::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TermInfoDriver_Read_m20734 (TermInfoDriver_t4848 * __this, CharU5BU5D_t711* ___dest, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.TermInfoDriver::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t4859  TermInfoDriver_ReadKey_m20735 (TermInfoDriver_t4848 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoDriver::ReadLine()
extern "C" String_t* TermInfoDriver_ReadLine_m20736 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::SetCursorPosition(System.Int32,System.Int32)
extern "C" void TermInfoDriver_SetCursorPosition_m20737 (TermInfoDriver_t4848 * __this, int32_t ___left, int32_t ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::CreateKeyMap()
extern "C" void TermInfoDriver_CreateKeyMap_m20738 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::InitKeys()
extern "C" void TermInfoDriver_InitKeys_m20739 (TermInfoDriver_t4848 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoDriver::AddStringMapping(System.TermInfoStrings)
extern "C" void TermInfoDriver_AddStringMapping_m20740 (TermInfoDriver_t4848 * __this, int32_t ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
