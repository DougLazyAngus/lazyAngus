#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CharacterInfo
struct CharacterInfo_t2785;
struct CharacterInfo_t2785_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m9557 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m9558 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m9559 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m9560 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m9561 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m9562 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m9563 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m9564 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomLeftUnFlipped_m9565 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomRightUnFlipped_m9566 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvTopRightUnFlipped_m9567 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvTopLeftUnFlipped_m9568 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomLeft_m9569 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomRight_m9570 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t110  CharacterInfo_get_uvTopRight_m9571 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t110  CharacterInfo_get_uvTopLeft_m9572 (CharacterInfo_t2785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void CharacterInfo_t2785_marshal(const CharacterInfo_t2785& unmarshaled, CharacterInfo_t2785_marshaled& marshaled);
void CharacterInfo_t2785_marshal_back(const CharacterInfo_t2785_marshaled& marshaled, CharacterInfo_t2785& unmarshaled);
void CharacterInfo_t2785_marshal_cleanup(CharacterInfo_t2785_marshaled& marshaled);
