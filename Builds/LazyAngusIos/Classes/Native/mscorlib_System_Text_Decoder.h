#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t4743;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4744;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct  Decoder_t3235  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t4743 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t4744 * ___fallback_buffer_1;
};
