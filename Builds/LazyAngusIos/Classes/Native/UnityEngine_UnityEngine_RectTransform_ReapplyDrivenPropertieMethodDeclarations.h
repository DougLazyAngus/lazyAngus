#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t982;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t573;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
extern "C" void ReapplyDrivenProperties__ctor_m5569 (ReapplyDrivenProperties_t982 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
extern "C" void ReapplyDrivenProperties_Invoke_m6309 (ReapplyDrivenProperties_t982 * __this, RectTransform_t573 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ReapplyDrivenProperties_t982(Il2CppObject* delegate, RectTransform_t573 * ___driven);
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
extern "C" Object_t * ReapplyDrivenProperties_BeginInvoke_m6310 (ReapplyDrivenProperties_t982 * __this, RectTransform_t573 * ___driven, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
extern "C" void ReapplyDrivenProperties_EndInvoke_m6311 (ReapplyDrivenProperties_t982 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
