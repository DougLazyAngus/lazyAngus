#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t2725;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t2724;

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
extern "C" void EncoderReplacementFallbackBuffer__ctor_m15407 (EncoderReplacementFallbackBuffer_t2725 * __this, EncoderReplacementFallback_t2724 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
extern "C" int32_t EncoderReplacementFallbackBuffer_get_Remaining_m15408 (EncoderReplacementFallbackBuffer_t2725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C" bool EncoderReplacementFallbackBuffer_Fallback_m15409 (EncoderReplacementFallbackBuffer_t2725 * __this, uint16_t ___charUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C" bool EncoderReplacementFallbackBuffer_Fallback_m15410 (EncoderReplacementFallbackBuffer_t2725 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
extern "C" bool EncoderReplacementFallbackBuffer_Fallback_m15411 (EncoderReplacementFallbackBuffer_t2725 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
extern "C" uint16_t EncoderReplacementFallbackBuffer_GetNextChar_m15412 (EncoderReplacementFallbackBuffer_t2725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
