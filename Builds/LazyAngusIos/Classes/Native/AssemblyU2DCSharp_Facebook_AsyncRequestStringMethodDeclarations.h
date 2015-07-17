#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AsyncRequestString
struct AsyncRequestString_t404;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t80;
// Facebook.FacebookDelegate
struct FacebookDelegate_t391;
// Facebook.HttpMethod
struct HttpMethod_t406;
// UnityEngine.WWWForm
struct WWWForm_t70;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void Facebook.AsyncRequestString::.ctor()
extern "C" void AsyncRequestString__ctor_m2199 (AsyncRequestString_t404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Post_m2200 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Get_m2201 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Request_m2202 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t406 * ___method, WWWForm_t70 * ___query, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Request_m2203 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t406 * ___method, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern "C" Object_t * AsyncRequestString_Start_m2204 (AsyncRequestString_t404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetUrl_m2205 (AsyncRequestString_t404 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetMethod_m2206 (AsyncRequestString_t404 * __this, HttpMethod_t406 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetFormData_m2207 (AsyncRequestString_t404 * __this, Dictionary_2_t80 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetQuery_m2208 (AsyncRequestString_t404 * __this, WWWForm_t70 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetCallback_m2209 (AsyncRequestString_t404 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
