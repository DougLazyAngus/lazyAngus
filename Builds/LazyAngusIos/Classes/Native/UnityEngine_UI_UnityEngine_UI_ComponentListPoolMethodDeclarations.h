#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ComponentListPool
struct ComponentListPool_t950;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t981;

// System.Void UnityEngine.UI.ComponentListPool::.cctor()
extern "C" void ComponentListPool__cctor_m5414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Component> UnityEngine.UI.ComponentListPool::Get()
extern "C" List_1_t981 * ComponentListPool_Get_m5415 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::Release(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void ComponentListPool_Release_m5416 (Object_t * __this /* static, unused */, List_1_t981 * ___toRelease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::<s_ComponentListPool>m__17(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m5417 (Object_t * __this /* static, unused */, List_1_t981 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
