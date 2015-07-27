#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AsyncRequestString
struct AsyncRequestString_t406;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t82;
// Facebook.FacebookDelegate
struct FacebookDelegate_t393;
// Facebook.HttpMethod
struct HttpMethod_t408;
// UnityEngine.WWWForm
struct WWWForm_t72;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void Facebook.AsyncRequestString::.ctor()
extern "C" void AsyncRequestString__ctor_m2201 (AsyncRequestString_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Post_m2202 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t82 * ___formData, FacebookDelegate_t393 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Get_m2203 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t82 * ___formData, FacebookDelegate_t393 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Request_m2204 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t408 * ___method, WWWForm_t72 * ___query, FacebookDelegate_t393 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Request_m2205 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t408 * ___method, Dictionary_2_t82 * ___formData, FacebookDelegate_t393 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern "C" Object_t * AsyncRequestString_Start_m2206 (AsyncRequestString_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C" AsyncRequestString_t406 * AsyncRequestString_SetUrl_m2207 (AsyncRequestString_t406 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C" AsyncRequestString_t406 * AsyncRequestString_SetMethod_m2208 (AsyncRequestString_t406 * __this, HttpMethod_t408 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" AsyncRequestString_t406 * AsyncRequestString_SetFormData_m2209 (AsyncRequestString_t406 * __this, Dictionary_2_t82 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C" AsyncRequestString_t406 * AsyncRequestString_SetQuery_m2210 (AsyncRequestString_t406 * __this, WWWForm_t72 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C" AsyncRequestString_t406 * AsyncRequestString_SetCallback_m2211 (AsyncRequestString_t406 * __this, FacebookDelegate_t393 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
