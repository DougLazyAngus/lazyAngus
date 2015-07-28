#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.AsyncRequestString
struct AsyncRequestString_t446;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// Facebook.FacebookDelegate
struct FacebookDelegate_t433;
// Facebook.HttpMethod
struct HttpMethod_t448;
// UnityEngine.WWWForm
struct WWWForm_t112;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void Facebook.AsyncRequestString::.ctor()
extern "C" void AsyncRequestString__ctor_m2472 (AsyncRequestString_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Post_m2473 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Get_m2474 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Request_m2475 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t448 * ___method, WWWForm_t112 * ___query, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C" void AsyncRequestString_Request_m2476 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t448 * ___method, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern "C" Object_t * AsyncRequestString_Start_m2477 (AsyncRequestString_t446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetUrl_m2478 (AsyncRequestString_t446 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetMethod_m2479 (AsyncRequestString_t446 * __this, HttpMethod_t448 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetFormData_m2480 (AsyncRequestString_t446 * __this, Dictionary_2_t122 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetQuery_m2481 (AsyncRequestString_t446 * __this, WWWForm_t112 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetCallback_m2482 (AsyncRequestString_t446 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
