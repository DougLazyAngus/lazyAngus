#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIContent
struct GUIContent_t733;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t394;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2853;
// System.String[]
struct StringU5BU5D_t75;

// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m8758 (GUIContent_t733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m3870 (GUIContent_t733 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C" void GUIContent__ctor_m8759 (GUIContent_t733 * __this, GUIContent_t733 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" void GUIContent__cctor_m8760 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_text()
extern "C" String_t* GUIContent_get_text_m5751 (GUIContent_t733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" void GUIContent_set_text_m8761 (GUIContent_t733 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_tooltip()
extern "C" String_t* GUIContent_get_tooltip_m8762 (GUIContent_t733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" GUIContent_t733 * GUIContent_Temp_m8763 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C" GUIContent_t733 * GUIContent_Temp_m8764 (Object_t * __this /* static, unused */, Texture_t394 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m8765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] UnityEngine.GUIContent::Temp(System.String[])
extern "C" GUIContentU5BU5D_t2853* GUIContent_Temp_m8766 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___texts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
