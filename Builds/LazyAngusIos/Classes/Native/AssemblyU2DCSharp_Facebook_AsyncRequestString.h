#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Facebook.HttpMethod
struct HttpMethod_t448;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// UnityEngine.WWWForm
struct WWWForm_t112;
// Facebook.FacebookDelegate
struct FacebookDelegate_t433;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Facebook.AsyncRequestString
struct  AsyncRequestString_t446  : public MonoBehaviour_t13
{
	// System.String Facebook.AsyncRequestString::url
	String_t* ___url_2;
	// Facebook.HttpMethod Facebook.AsyncRequestString::method
	HttpMethod_t448 * ___method_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AsyncRequestString::formData
	Dictionary_2_t122 * ___formData_4;
	// UnityEngine.WWWForm Facebook.AsyncRequestString::query
	WWWForm_t112 * ___query_5;
	// Facebook.FacebookDelegate Facebook.AsyncRequestString::callback
	FacebookDelegate_t433 * ___callback_6;
};
