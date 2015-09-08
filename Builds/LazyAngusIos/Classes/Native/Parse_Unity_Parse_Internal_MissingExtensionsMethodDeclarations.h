#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.MissingExtensions
struct MissingExtensions_t1186;
// System.Type
struct Type_t;
// System.Enum
struct Enum_t100;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1392;
// System.IO.StreamReader
struct StreamReader_t1182;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.IO.Stream
struct Stream_t51;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1391;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Type Parse.Internal.MissingExtensions::GetTypeInfo(System.Type)
extern "C" Type_t * MissingExtensions_GetTypeInfo_m6554 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MissingExtensions::HasFlag(System.Enum,System.Enum)
extern "C" bool MissingExtensions_HasFlag_m6555 (Object_t * __this /* static, unused */, Enum_t100 * ___enumValue, Enum_t100 * ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.MissingExtensions::ReadToEndAsync(System.IO.StreamReader)
extern "C" Task_1_t1392 * MissingExtensions_ReadToEndAsync_m6556 (Object_t * __this /* static, unused */, StreamReader_t1182 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream)
extern "C" Task_t1231 * MissingExtensions_CopyToAsync_m6557 (Object_t * __this /* static, unused */, Stream_t51 * ___stream, Stream_t51 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Threading.CancellationToken)
extern "C" Task_t1231 * MissingExtensions_CopyToAsync_m6558 (Object_t * __this /* static, unused */, Stream_t51 * ___stream, Stream_t51 * ___destination, int32_t ___bufferSize, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.Internal.MissingExtensions::ReadAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" Task_1_t1391 * MissingExtensions_ReadAsync_m6559 (Object_t * __this /* static, unused */, Stream_t51 * ___stream, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::WriteAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" Task_t1231 * MissingExtensions_WriteAsync_m6560 (Object_t * __this /* static, unused */, Stream_t51 * ___stream, ByteU5BU5D_t66* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t1185  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
