#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ComponentListPool
struct ComponentListPool_t908;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t939;

// System.Void UnityEngine.UI.ComponentListPool::.cctor()
extern "C" void ComponentListPool__cctor_m5119 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Component> UnityEngine.UI.ComponentListPool::Get()
extern "C" List_1_t939 * ComponentListPool_Get_m5120 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::Release(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void ComponentListPool_Release_m5121 (Object_t * __this /* static, unused */, List_1_t939 * ___toRelease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::<s_ComponentListPool>m__17(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m5122 (Object_t * __this /* static, unused */, List_1_t939 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
