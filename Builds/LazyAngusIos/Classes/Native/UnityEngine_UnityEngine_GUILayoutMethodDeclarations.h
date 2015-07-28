#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t2653;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t643;
// UnityEngine.GUIContent
struct GUIContent_t725;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// System.String[]
struct StringU5BU5D_t75;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2845;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t644;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m3378 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m8543 (Object_t * __this /* static, unused */, GUIContent_t725 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Box_m3394 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoBox(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoBox_m8544 (Object_t * __this /* static, unused */, GUIContent_t725 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m3376 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m8545 (Object_t * __this /* static, unused */, GUIContent_t725 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m3379 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m3815 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_DoTextField_m8546 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Toggle_m3424 (Object_t * __this /* static, unused */, bool ___value, String_t* ___text, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoToggle_m8547 (Object_t * __this /* static, unused */, bool ___value, GUIContent_t725 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::SelectionGrid(System.Int32,System.String[],System.Int32,UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_SelectionGrid_m3422 (Object_t * __this /* static, unused */, int32_t ___selected, StringU5BU5D_t75* ___texts, int32_t ___xCount, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::SelectionGrid(System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_SelectionGrid_m8548 (Object_t * __this /* static, unused */, int32_t ___selected, GUIContentU5BU5D_t2845* ___contents, int32_t ___xCount, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m3392 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m3817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m3377 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m8549 (Object_t * __this /* static, unused */, GUIContent_t725 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m3380 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m3391 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m8550 (Object_t * __this /* static, unused */, GUIContent_t725 * ___content, GUIStyle_t107 * ___style, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" void GUILayout_EndVertical_m3402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t110  GUILayout_BeginScrollView_m3399 (Object_t * __this /* static, unused */, Vector2_t110  ___scrollPosition, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t110  GUILayout_BeginScrollView_m8551 (Object_t * __this /* static, unused */, Vector2_t110  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t107 * ___horizontalScrollbar, GUIStyle_t107 * ___verticalScrollbar, GUIStyle_t107 * ___background, GUILayoutOptionU5BU5D_t643* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" void GUILayout_EndScrollView_m3403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C" void GUILayout_EndScrollView_m8552 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t644 * GUILayout_Width_m3423 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
extern "C" GUILayoutOption_t644 * GUILayout_MinWidth_m3393 (Object_t * __this /* static, unused */, float ___minWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
extern "C" GUILayoutOption_t644 * GUILayout_MaxWidth_m3375 (Object_t * __this /* static, unused */, float ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t644 * GUILayout_Height_m8553 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinHeight(System.Single)
extern "C" GUILayoutOption_t644 * GUILayout_MinHeight_m3374 (Object_t * __this /* static, unused */, float ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t644 * GUILayout_ExpandWidth_m8554 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t644 * GUILayout_ExpandHeight_m8555 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
