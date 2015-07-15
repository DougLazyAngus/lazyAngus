#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t748;
// UnityEngine.Material
struct Material_t401;
// System.Action`1<UnityEngine.Font>
struct Action_1_t898;

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m4681 (Object_t * __this /* static, unused */, Action_1_t898 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m6046 (Object_t * __this /* static, unused */, Action_1_t898 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t401 * Font_get_material_m4928 (Font_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m4820 (Font_t748 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m6047 (Object_t * __this /* static, unused */, Font_t748 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m4930 (Font_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m4931 (Font_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
