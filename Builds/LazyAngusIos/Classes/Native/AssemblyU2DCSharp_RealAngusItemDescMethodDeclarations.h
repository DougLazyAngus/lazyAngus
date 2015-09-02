#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusItemDesc
struct RealAngusItemDesc_t646;
// UnityEngine.Sprite
struct Sprite_t512;
// System.String
struct String_t;

// System.Void RealAngusItemDesc::.ctor(System.String,System.String,System.String)
extern "C" void RealAngusItemDesc__ctor_m3503 (RealAngusItemDesc_t646 * __this, String_t* ___pictureName, String_t* ___text, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite RealAngusItemDesc::get_pictureSprite()
extern "C" Sprite_t512 * RealAngusItemDesc_get_pictureSprite_m3504 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_pictureSprite(UnityEngine.Sprite)
extern "C" void RealAngusItemDesc_set_pictureSprite_m3505 (RealAngusItemDesc_t646 * __this, Sprite_t512 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::get_text()
extern "C" String_t* RealAngusItemDesc_get_text_m3506 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_text(System.String)
extern "C" void RealAngusItemDesc_set_text_m3507 (RealAngusItemDesc_t646 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::get_tag()
extern "C" String_t* RealAngusItemDesc_get_tag_m3508 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_tag(System.String)
extern "C" void RealAngusItemDesc_set_tag_m3509 (RealAngusItemDesc_t646 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusItemDesc::get_unlocked()
extern "C" bool RealAngusItemDesc_get_unlocked_m3510 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_unlocked(System.Boolean)
extern "C" void RealAngusItemDesc_set_unlocked_m3511 (RealAngusItemDesc_t646 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RealAngusItemDesc::get_viewed()
extern "C" bool RealAngusItemDesc_get_viewed_m3512 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::set_viewed(System.Boolean)
extern "C" void RealAngusItemDesc_set_viewed_m3513 (RealAngusItemDesc_t646 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::ViewedTag()
extern "C" String_t* RealAngusItemDesc_ViewedTag_m3514 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RealAngusItemDesc::UnlockedTag()
extern "C" String_t* RealAngusItemDesc_UnlockedTag_m3515 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::Unlock()
extern "C" void RealAngusItemDesc_Unlock_m3516 (RealAngusItemDesc_t646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusItemDesc::SetViewed(System.Boolean)
extern "C" void RealAngusItemDesc_SetViewed_m3517 (RealAngusItemDesc_t646 * __this, bool ___viewed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
