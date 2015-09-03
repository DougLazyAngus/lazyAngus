#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console
struct Console_t4577;
// System.IO.TextWriter
struct TextWriter_t3558;
// System.Text.Encoding
struct Encoding_t753;
// System.IO.Stream
struct Stream_t51;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.ConsoleKeyInfo
#include "mscorlib_System_ConsoleKeyInfo.h"

// System.Void System.Console::.cctor()
extern "C" void Console__cctor_m20030 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C" void Console_SetEncodings_m20031 (Object_t * __this /* static, unused */, Encoding_t753 * ___inputEncoding, Encoding_t753 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C" TextWriter_t3558 * Console_get_Error_m18115 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C" Stream_t51 * Console_Open_m20032 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C" Stream_t51 * Console_OpenStandardError_m20033 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C" Stream_t51 * Console_OpenStandardInput_m20034 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C" Stream_t51 * Console_OpenStandardOutput_m20035 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C" void Console_WriteLine_m18123 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object)
extern "C" void Console_WriteLine_m18159 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object[])
extern "C" void Console_WriteLine_m18158 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t696* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
extern "C" void Console_WriteLine_m18164 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C" void Console_WriteLine_m18165 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_InputEncoding()
extern "C" Encoding_t753 * Console_get_InputEncoding_m20036 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Console::get_OutputEncoding()
extern "C" Encoding_t753 * Console_get_OutputEncoding_m20037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey()
extern "C" ConsoleKeyInfo_t4859  Console_ReadKey_m20038 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
extern "C" ConsoleKeyInfo_t4859  Console_ReadKey_m20039 (Object_t * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::DoConsoleCancelEvent()
extern "C" void Console_DoConsoleCancelEvent_m20040 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
