﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderFallback
struct EncoderFallback_t2668;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2670;

// System.Void System.Text.EncoderFallback::.ctor()
extern "C" void EncoderFallback__ctor_m14816 (EncoderFallback_t2668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.EncoderFallback::.cctor()
extern "C" void EncoderFallback__cctor_m14817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.EncoderFallback::get_ExceptionFallback()
extern "C" EncoderFallback_t2668 * EncoderFallback_get_ExceptionFallback_m14818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.EncoderFallback::get_ReplacementFallback()
extern "C" EncoderFallback_t2668 * EncoderFallback_get_ReplacementFallback_m14819 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.EncoderFallback::get_StandardSafeFallback()
extern "C" EncoderFallback_t2668 * EncoderFallback_get_StandardSafeFallback_m14820 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallbackBuffer System.Text.EncoderFallback::CreateFallbackBuffer()