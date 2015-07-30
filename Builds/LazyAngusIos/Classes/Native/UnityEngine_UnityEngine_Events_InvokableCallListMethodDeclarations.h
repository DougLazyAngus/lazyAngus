#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2838;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2831;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t634;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C" void InvokableCallList__ctor_m9773 (InvokableCallList_t2838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m9774 (InvokableCallList_t2838 * __this, BaseInvokableCall_t2831 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m9775 (InvokableCallList_t2838 * __this, BaseInvokableCall_t2831 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCallList_RemoveListener_m9776 (InvokableCallList_t2838 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m9777 (InvokableCallList_t2838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C" void InvokableCallList_Invoke_m9778 (InvokableCallList_t2838 * __this, ObjectU5BU5D_t634* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
