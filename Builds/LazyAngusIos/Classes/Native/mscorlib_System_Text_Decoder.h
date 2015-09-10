#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t5361;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t5362;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct  Decoder_t3574  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t5361 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t5362 * ___fallback_buffer_1;
};
