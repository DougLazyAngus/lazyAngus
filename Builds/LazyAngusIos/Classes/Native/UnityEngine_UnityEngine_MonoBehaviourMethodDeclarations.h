#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t13;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t891;
struct Coroutine_t891_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m379 (MonoBehaviour_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m3765 (MonoBehaviour_t13 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" void MonoBehaviour_CancelInvoke_m3764 (MonoBehaviour_t13 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t891 * MonoBehaviour_StartCoroutine_m3469 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t891 * MonoBehaviour_StartCoroutine_Auto_m9108 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m3914 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m5800 (MonoBehaviour_t13 * __this, Coroutine_t891 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9109 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m9110 (MonoBehaviour_t13 * __this, Coroutine_t891 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m3726 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
