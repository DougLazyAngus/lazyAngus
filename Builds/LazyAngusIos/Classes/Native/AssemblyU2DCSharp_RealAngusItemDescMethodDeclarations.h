#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusItemDesc
struct RealAngusItemDesc_t571;
// UnityEngine.Sprite
struct Sprite_t521;
// System.String
struct String_t;

// System.Void RealAngusItemDesc::.ctor(System.String,System.String,System.String)
extern "C" void RealAngusItemDesc__ctor_m3570 (RealAngusItemDesc_t571 * __this, String_t* ___pictureName, String_t* ___text, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite RealAngusItemDesc::get_pictureSprite()
extern "C" Sprite_t521 * RealAngusItemDesc_get_pictureSprite_m3571 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_pictureSprite(UnityEngine.Sprite)
extern "C" void RealAngusItemDesc_set_pictureSprite_m3572 (RealAngusItemDesc_t571 * __this, Sprite_t521 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::get_text()
extern "C" String_t* RealAngusItemDesc_get_text_m3573 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_text(System.String)
extern "C" void RealAngusItemDesc_set_text_m3574 (RealAngusItemDesc_t571 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::get_tag()
extern "C" String_t* RealAngusItemDesc_get_tag_m3575 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_tag(System.String)
extern "C" void RealAngusItemDesc_set_tag_m3576 (RealAngusItemDesc_t571 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusItemDesc::get_unlocked()
extern "C" bool RealAngusItemDesc_get_unlocked_m3577 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_unlocked(System.Boolean)
extern "C" void RealAngusItemDesc_set_unlocked_m3578 (RealAngusItemDesc_t571 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusItemDesc::get_viewed()
extern "C" bool RealAngusItemDesc_get_viewed_m3579 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_viewed(System.Boolean)
extern "C" void RealAngusItemDesc_set_viewed_m3580 (RealAngusItemDesc_t571 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::ViewedTag()
extern "C" String_t* RealAngusItemDesc_ViewedTag_m3581 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::UnlockedTag()
extern "C" String_t* RealAngusItemDesc_UnlockedTag_m3582 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::Unlock()
extern "C" void RealAngusItemDesc_Unlock_m3583 (RealAngusItemDesc_t571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::SetViewed(System.Boolean)
extern "C" void RealAngusItemDesc_SetViewed_m3584 (RealAngusItemDesc_t571 * __this, bool ___viewed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
