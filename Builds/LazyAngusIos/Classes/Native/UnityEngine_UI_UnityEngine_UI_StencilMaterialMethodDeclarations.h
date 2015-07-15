#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.StencilMaterial
struct StencilMaterial_t815;
// UnityEngine.Material
struct Material_t401;

// System.Void UnityEngine.UI.StencilMaterial::.cctor()
extern "C" void StencilMaterial__cctor_m4241 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32)
extern "C" Material_t401 * StencilMaterial_Add_m4242 (Object_t * __this /* static, unused */, Material_t401 * ___baseMat, int32_t ___stencilID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
extern "C" void StencilMaterial_Remove_m4243 (Object_t * __this /* static, unused */, Material_t401 * ___customMat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
