#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t3188;
// System.Text.DecoderFallback
struct DecoderFallback_t4698;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4699;
// System.Byte[]
struct ByteU5BU5D_t66;
// System.Char[]
struct CharU5BU5D_t663;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m18762 (Decoder_t3188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m18763 (Decoder_t3188 * __this, DecoderFallback_t4698 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t4699 * Decoder_get_FallbackBuffer_m18764 (Decoder_t3188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
