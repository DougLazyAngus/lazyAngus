#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t225;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t82;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t638;
// System.Byte[]
struct ByteU5BU5D_t36;
// UnityEngine.Texture2D
struct Texture2D_t68;
// UnityEngine.WWWForm
struct WWWForm_t72;
// System.String[]
struct StringU5BU5D_t45;

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m3265 (WWW_t225 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m3537 (WWW_t225 * __this, String_t* ___url, WWWForm_t72 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void WWW__ctor_m3316 (WWW_t225 * __this, String_t* ___url, ByteU5BU5D_t36* ___postData, Dictionary_2_t82 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m6362 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m6363 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m6364 (WWW_t225 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m6365 (WWW_t225 * __this, String_t* ___url, ByteU5BU5D_t36* ___postData, StringU5BU5D_t45* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C" String_t* WWW_EscapeURL_m3598 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
extern "C" String_t* WWW_EscapeURL_m6366 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t638 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t82 * WWW_get_responseHeaders_m3317 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m6367 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m3323 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t638 * WWW_get_DefaultEncoding_m6368 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t638 * WWW_GetTextEncoder_m6369 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t36* WWW_get_bytes_m6370 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m3266 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C" Texture2D_t68 * WWW_GetTexture_m6371 (WWW_t225 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C" Texture2D_t68 * WWW_get_texture_m3267 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m6372 (WWW_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t45* WWW_FlattenedHeadersFrom_m6373 (Object_t * __this /* static, unused */, Dictionary_2_t82 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t82 * WWW_ParseHTTPHeaderString_m6374 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
