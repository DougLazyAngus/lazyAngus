#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t1087;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t597;
// UnityEngine.GUIContent
struct GUIContent_t680;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// System.String[]
struct StringU5BU5D_t45;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1280;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t598;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m3074 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m5936 (Object_t * __this /* static, unused */, GUIContent_t680 * ___content, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Box(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Box_m3090 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoBox(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoBox_m5937 (Object_t * __this /* static, unused */, GUIContent_t680 * ___content, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m3072 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m5938 (Object_t * __this /* static, unused */, GUIContent_t680 * ___content, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m3075 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m3515 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_DoTextField_m5939 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Toggle_m3121 (Object_t * __this /* static, unused */, bool ___value, String_t* ___text, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoToggle_m5940 (Object_t * __this /* static, unused */, bool ___value, GUIContent_t680 * ___content, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::SelectionGrid(System.Int32,System.String[],System.Int32,UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_SelectionGrid_m3119 (Object_t * __this /* static, unused */, int32_t ___selected, StringU5BU5D_t45* ___texts, int32_t ___xCount, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::SelectionGrid(System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_SelectionGrid_m5941 (Object_t * __this /* static, unused */, int32_t ___selected, GUIContentU5BU5D_t1280* ___contents, int32_t ___xCount, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m3088 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m3517 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m3073 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5942 (Object_t * __this /* static, unused */, GUIContent_t680 * ___content, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m3076 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m3087 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m5943 (Object_t * __this /* static, unused */, GUIContent_t680 * ___content, GUIStyle_t64 * ___style, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" void GUILayout_EndVertical_m3099 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t68  GUILayout_BeginScrollView_m3095 (Object_t * __this /* static, unused */, Vector2_t68  ___scrollPosition, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t68  GUILayout_BeginScrollView_m5944 (Object_t * __this /* static, unused */, Vector2_t68  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t64 * ___horizontalScrollbar, GUIStyle_t64 * ___verticalScrollbar, GUIStyle_t64 * ___background, GUILayoutOptionU5BU5D_t597* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" void GUILayout_EndScrollView_m3100 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C" void GUILayout_EndScrollView_m5945 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t598 * GUILayout_Width_m3120 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
extern "C" GUILayoutOption_t598 * GUILayout_MinWidth_m3089 (Object_t * __this /* static, unused */, float ___minWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
extern "C" GUILayoutOption_t598 * GUILayout_MaxWidth_m3071 (Object_t * __this /* static, unused */, float ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t598 * GUILayout_Height_m5946 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinHeight(System.Single)
extern "C" GUILayoutOption_t598 * GUILayout_MinHeight_m3070 (Object_t * __this /* static, unused */, float ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t598 * GUILayout_ExpandWidth_m5947 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t598 * GUILayout_ExpandHeight_m5948 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
