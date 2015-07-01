#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t2011;
// System.Text.DecoderFallback
struct DecoderFallback_t2613;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2614;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Char[]
struct CharU5BU5D_t512;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m14447 (Decoder_t2011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m14448 (Decoder_t2011 * __this, DecoderFallback_t2613 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t2614 * Decoder_get_FallbackBuffer_m14449 (Decoder_t2011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
