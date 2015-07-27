#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t108;
struct ScriptableObject_t108_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m3191 (ScriptableObject_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m5783 (Object_t * __this /* static, unused */, ScriptableObject_t108 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t108 * ScriptableObject_CreateInstance_m5784 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t108 * ScriptableObject_CreateInstance_m5785 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t108 * ScriptableObject_CreateInstanceFromType_m5786 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t108_marshal(const ScriptableObject_t108& unmarshaled, ScriptableObject_t108_marshaled& marshaled);
void ScriptableObject_t108_marshal_back(const ScriptableObject_t108_marshaled& marshaled, ScriptableObject_t108& unmarshaled);
void ScriptableObject_t108_marshal_cleanup(ScriptableObject_t108_marshaled& marshaled);
