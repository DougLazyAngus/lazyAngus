#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t2804;
struct CharacterInfo_t2804_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m9724 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m9725 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m9726 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m9727 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m9728 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m9729 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m9730 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m9731 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomLeftUnFlipped_m9732 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomRightUnFlipped_m9733 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvTopRightUnFlipped_m9734 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvTopLeftUnFlipped_m9735 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomLeft_m9736 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomRight_m9737 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t110  CharacterInfo_get_uvTopRight_m9738 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t110  CharacterInfo_get_uvTopLeft_m9739 (CharacterInfo_t2804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void CharacterInfo_t2804_marshal(const CharacterInfo_t2804& unmarshaled, CharacterInfo_t2804_marshaled& marshaled);
void CharacterInfo_t2804_marshal_back(const CharacterInfo_t2804_marshaled& marshaled, CharacterInfo_t2804& unmarshaled);
void CharacterInfo_t2804_marshal_cleanup(CharacterInfo_t2804_marshaled& marshaled);
