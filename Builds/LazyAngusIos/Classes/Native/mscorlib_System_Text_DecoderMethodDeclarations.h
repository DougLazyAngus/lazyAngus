#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t3187;
// System.Text.DecoderFallback
struct DecoderFallback_t4697;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4698;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t661;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m18754 (Decoder_t3187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m18755 (Decoder_t3187 * __this, DecoderFallback_t4697 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t4698 * Decoder_get_FallbackBuffer_m18756 (Decoder_t3187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
