#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t3567;
// System.Text.DecoderFallback
struct DecoderFallback_t5354;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t5355;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t715;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m24084 (Decoder_t3567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m24085 (Decoder_t3567 * __this, DecoderFallback_t5354 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t5355 * Decoder_get_FallbackBuffer_m24086 (Decoder_t3567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
