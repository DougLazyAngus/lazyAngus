#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ConsoleDriver
struct ConsoleDriver_t4857;
// System.IConsoleDriver
struct IConsoleDriver_t4856;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ConsoleDriver::.cctor()
extern "C" void ConsoleDriver__cctor_m20043 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateNullConsoleDriver()
extern "C" Object_t * ConsoleDriver_CreateNullConsoleDriver_m20044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateWindowsConsoleDriver()
extern "C" Object_t * ConsoleDriver_CreateWindowsConsoleDriver_m20045 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateTermInfoDriver(System.String)
extern "C" Object_t * ConsoleDriver_CreateTermInfoDriver_m20046 (Object_t * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.ConsoleDriver::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t4859  ConsoleDriver_ReadKey_m20047 (Object_t * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::get_IsConsole()
extern "C" bool ConsoleDriver_get_IsConsole_m20048 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::Isatty(System.IntPtr)
extern "C" bool ConsoleDriver_Isatty_m20049 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleDriver::InternalKeyAvailable(System.Int32)
extern "C" int32_t ConsoleDriver_InternalKeyAvailable_m20050 (Object_t * __this /* static, unused */, int32_t ___ms_timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::TtySetup(System.String,System.String,System.Byte[]&,System.Int32*&)
extern "C" bool ConsoleDriver_TtySetup_m20051 (Object_t * __this /* static, unused */, String_t* ___keypadXmit, String_t* ___teardown, ByteU5BU5D_t66** ___control_characters, int32_t** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::SetEcho(System.Boolean)
extern "C" bool ConsoleDriver_SetEcho_m20052 (Object_t * __this /* static, unused */, bool ___wantEcho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
