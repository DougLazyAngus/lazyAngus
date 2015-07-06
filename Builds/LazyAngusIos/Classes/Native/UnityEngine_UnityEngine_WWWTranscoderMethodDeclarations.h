#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWTranscoder
struct WWWTranscoder_t1042;
// System.Byte[]
struct ByteU5BU5D_t36;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t555;

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C" void WWWTranscoder__cctor_m5618 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C" ByteU5BU5D_t36* WWWTranscoder_Byte2Hex_m5619 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t36* ___hexChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::URLEncode(System.String,System.Text.Encoding)
extern "C" String_t* WWWTranscoder_URLEncode_m5620 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t555 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C" ByteU5BU5D_t36* WWWTranscoder_URLEncode_m5621 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___toEncode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C" String_t* WWWTranscoder_QPEncode_m5622 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t555 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C" ByteU5BU5D_t36* WWWTranscoder_Encode_m5623 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t36* ___forbidden, bool ___uppercase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" bool WWWTranscoder_ByteArrayContains_m5624 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___array, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C" bool WWWTranscoder_SevenBitClean_m5625 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t555 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" bool WWWTranscoder_SevenBitClean_m5626 (Object_t * __this /* static, unused */, ByteU5BU5D_t36* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
