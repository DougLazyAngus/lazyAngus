#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.StencilMaterial
struct StencilMaterial_t918;
// UnityEngine.Material
struct Material_t482;

// System.Void UnityEngine.UI.StencilMaterial::.cctor()
extern "C" void StencilMaterial__cctor_m5178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32)
extern "C" Material_t482 * StencilMaterial_Add_m5179 (Object_t * __this /* static, unused */, Material_t482 * ___baseMat, int32_t ___stencilID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
extern "C" void StencilMaterial_Remove_m5180 (Object_t * __this /* static, unused */, Material_t482 * ___customMat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
