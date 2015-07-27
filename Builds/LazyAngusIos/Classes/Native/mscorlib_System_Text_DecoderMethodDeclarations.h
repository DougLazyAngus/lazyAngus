#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1632;
// System.Text.DecoderFallback
struct DecoderFallback_t2714;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2715;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Char[]
struct CharU5BU5D_t608;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m15365 (Decoder_t1632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m15366 (Decoder_t1632 * __this, DecoderFallback_t2714 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t2715 * Decoder_get_FallbackBuffer_m15367 (Decoder_t1632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
