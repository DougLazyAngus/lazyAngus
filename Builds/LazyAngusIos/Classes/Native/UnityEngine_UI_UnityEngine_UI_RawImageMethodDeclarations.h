#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.RawImage
struct RawImage_t846;
// UnityEngine.Texture
struct Texture_t352;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t841;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m4605 (RawImage_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t352 * RawImage_get_mainTexture_m4606 (RawImage_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t352 * RawImage_get_texture_m4607 (RawImage_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m4608 (RawImage_t846 * __this, Texture_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t593  RawImage_get_uvRect_m4609 (RawImage_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m4610 (RawImage_t846 * __this, Rect_t593  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m4611 (RawImage_t846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void RawImage_OnFillVBO_m4612 (RawImage_t846 * __this, List_1_t841 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
