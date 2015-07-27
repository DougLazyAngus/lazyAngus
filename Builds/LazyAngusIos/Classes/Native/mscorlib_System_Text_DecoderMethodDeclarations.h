#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1631;
// System.Text.DecoderFallback
struct DecoderFallback_t2713;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2714;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.Char[]
struct CharU5BU5D_t607;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m15358 (Decoder_t1631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m15359 (Decoder_t1631 * __this, DecoderFallback_t2713 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t2714 * Decoder_get_FallbackBuffer_m15360 (Decoder_t1631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
