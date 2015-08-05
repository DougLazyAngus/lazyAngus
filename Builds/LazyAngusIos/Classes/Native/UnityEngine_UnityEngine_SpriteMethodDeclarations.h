#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Sprite
struct Sprite_t472;
// UnityEngine.Texture2D
struct Texture2D_t108;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t648  Sprite_get_rect_m5703 (Sprite_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m5699 (Sprite_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t108 * Sprite_get_texture_m5696 (Sprite_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t648  Sprite_get_textureRect_m5722 (Sprite_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t985  Sprite_get_border_m5697 (Sprite_t472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
