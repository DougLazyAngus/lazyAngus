#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t4745;
// System.Byte[]
struct ByteU5BU5D_t66;

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C" void DecoderExceptionFallbackBuffer__ctor_m19012 (DecoderExceptionFallbackBuffer_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C" int32_t DecoderExceptionFallbackBuffer_get_Remaining_m19013 (DecoderExceptionFallbackBuffer_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C" bool DecoderExceptionFallbackBuffer_Fallback_m19014 (DecoderExceptionFallbackBuffer_t4745 * __this, ByteU5BU5D_t66* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C" uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m19015 (DecoderExceptionFallbackBuffer_t4745 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
