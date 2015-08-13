#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console
struct Console_t4197;
// System.IO.TextWriter
struct TextWriter_t3277;
// System.Text.Encoding
struct Encoding_t739;
// System.IO.Stream
struct Stream_t51;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
extern "C" void Console__cctor_m19389 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C" void Console_SetEncodings_m19390 (Object_t * __this /* static, unused */, Encoding_t739 * ___inputEncoding, Encoding_t739 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C" TextWriter_t3277 * Console_get_Error_m15132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C" Stream_t51 * Console_Open_m19391 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C" Stream_t51 * Console_OpenStandardError_m19392 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C" Stream_t51 * Console_OpenStandardInput_m19393 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C" Stream_t51 * Console_OpenStandardOutput_m19394 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::WriteLine(System.String)
extern "C" void Console_WriteLine_m15095 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
