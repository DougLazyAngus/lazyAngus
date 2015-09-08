#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t4938;
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Handles
#include "mscorlib_System_Handles.h"
// System.ConsoleScreenBufferInfo
#include "mscorlib_System_ConsoleScreenBufferInfo.h"
// System.InputRecord
#include "mscorlib_System_InputRecord.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C" void WindowsConsoleDriver__ctor_m20864 (WindowsConsoleDriver_t4938 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t4863  WindowsConsoleDriver_ReadKey_m20865 (WindowsConsoleDriver_t4938 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C" IntPtr_t WindowsConsoleDriver_GetStdHandle_m20866 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C" bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m20867 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ConsoleScreenBufferInfo_t4936 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C" bool WindowsConsoleDriver_ReadConsoleInput_m20868 (Object_t * __this /* static, unused */, IntPtr_t ___handle, InputRecord_t4933 * ___record, int32_t ___length, int32_t* ___nread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
