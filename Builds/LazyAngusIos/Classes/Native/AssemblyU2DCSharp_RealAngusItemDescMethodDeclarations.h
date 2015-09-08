#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusItemDesc
struct RealAngusItemDesc_t650;
// UnityEngine.Sprite
struct Sprite_t512;
// System.String
struct String_t;

// System.Void RealAngusItemDesc::.ctor(System.String,System.String,System.String)
extern "C" void RealAngusItemDesc__ctor_m3514 (RealAngusItemDesc_t650 * __this, String_t* ___pictureName, String_t* ___text, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite RealAngusItemDesc::get_pictureSprite()
extern "C" Sprite_t512 * RealAngusItemDesc_get_pictureSprite_m3515 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_pictureSprite(UnityEngine.Sprite)
extern "C" void RealAngusItemDesc_set_pictureSprite_m3516 (RealAngusItemDesc_t650 * __this, Sprite_t512 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::get_text()
extern "C" String_t* RealAngusItemDesc_get_text_m3517 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_text(System.String)
extern "C" void RealAngusItemDesc_set_text_m3518 (RealAngusItemDesc_t650 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::get_tag()
extern "C" String_t* RealAngusItemDesc_get_tag_m3519 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_tag(System.String)
extern "C" void RealAngusItemDesc_set_tag_m3520 (RealAngusItemDesc_t650 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusItemDesc::get_unlocked()
extern "C" bool RealAngusItemDesc_get_unlocked_m3521 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_unlocked(System.Boolean)
extern "C" void RealAngusItemDesc_set_unlocked_m3522 (RealAngusItemDesc_t650 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusItemDesc::get_viewed()
extern "C" bool RealAngusItemDesc_get_viewed_m3523 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_viewed(System.Boolean)
extern "C" void RealAngusItemDesc_set_viewed_m3524 (RealAngusItemDesc_t650 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::ViewedTag()
extern "C" String_t* RealAngusItemDesc_ViewedTag_m3525 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::UnlockedTag()
extern "C" String_t* RealAngusItemDesc_UnlockedTag_m3526 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::Unlock()
extern "C" void RealAngusItemDesc_Unlock_m3527 (RealAngusItemDesc_t650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::SetViewed(System.Boolean)
extern "C" void RealAngusItemDesc_SetViewed_m3528 (RealAngusItemDesc_t650 * __this, bool ___viewed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
