#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t265;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t682;
// System.Byte[]
struct ByteU5BU5D_t66;
// UnityEngine.Texture2D
struct Texture2D_t108;
// UnityEngine.WWWForm
struct WWWForm_t112;
// System.String[]
struct StringU5BU5D_t75;

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m3559 (WWW_t265 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m3830 (WWW_t265 * __this, String_t* ___url, WWWForm_t112 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void WWW__ctor_m3610 (WWW_t265 * __this, String_t* ___url, ByteU5BU5D_t66* ___postData, Dictionary_2_t122 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m8962 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m8963 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m8964 (WWW_t265 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m8965 (WWW_t265 * __this, String_t* ___url, ByteU5BU5D_t66* ___postData, StringU5BU5D_t75* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C" String_t* WWW_EscapeURL_m3890 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
extern "C" String_t* WWW_EscapeURL_m8966 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t682 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t122 * WWW_get_responseHeaders_m3611 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m8967 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m3617 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t682 * WWW_get_DefaultEncoding_m8968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t682 * WWW_GetTextEncoder_m8969 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t66* WWW_get_bytes_m8970 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m3560 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
extern "C" Texture2D_t108 * WWW_GetTexture_m8971 (WWW_t265 * __this, bool ___markNonReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
extern "C" Texture2D_t108 * WWW_get_texture_m3561 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m7419 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
extern "C" float WWW_get_progress_m7425 (WWW_t265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t75* WWW_FlattenedHeadersFrom_m8972 (Object_t * __this /* static, unused */, Dictionary_2_t122 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t122 * WWW_ParseHTTPHeaderString_m8973 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
