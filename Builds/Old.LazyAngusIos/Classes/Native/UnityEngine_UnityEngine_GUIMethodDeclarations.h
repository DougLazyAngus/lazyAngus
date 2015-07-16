﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t551;
// UnityEngine.GUISkin
struct GUISkin_t618;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t311;
// UnityEngine.GUIStyle
struct GUIStyle_t64;
// UnityEngine.GUIContent
struct GUIContent_t620;
// UnityEngine.TextEditor
struct TextEditor_t910;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1227;
// UnityEngine.Rect[]
struct RectU5BU5D_t1228;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t619;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m5308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t219  GUI_get_nextScrollStepTime_m5309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5310 (Object_t * __this /* static, unused */, DateTime_t219  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m5311 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m5312 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m5313 (Object_t * __this /* static, unused */, GUISkin_t618 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t618 * GUI_get_skin_m2936 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5314 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C" bool GUI_get_enabled_m5315 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C" void GUI_set_enabled_m2589 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C" void GUI_set_tooltip_m5316 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C" void GUI_Internal_SetTooltip_m5317 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_Label_m2579 (Object_t * __this /* static, unused */, Rect_t544  ___position, Texture_t311 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m2649 (Object_t * __this /* static, unused */, Rect_t544  ___position, String_t* ___text, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5318 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5319 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5320 (Object_t * __this /* static, unused */, Rect_t544 * ___position, GUIContent_t620 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5321 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m2648 (Object_t * __this /* static, unused */, Rect_t544  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C" bool GUI_Button_m2946 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m2947 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5322 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5323 (Object_t * __this /* static, unused */, Rect_t544 * ___position, GUIContent_t620 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m5324 (Object_t * __this /* static, unused */, Rect_t544  ___position, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m5325 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextArea(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" String_t* GUI_TextArea_m2575 (Object_t * __this /* static, unused */, Rect_t544  ___position, String_t* ___text, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m5326 (Object_t * __this /* static, unused */, Rect_t544  ___position, int32_t ___id, GUIContent_t620 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t64 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m5327 (Object_t * __this /* static, unused */, Rect_t544  ___position, int32_t ___id, GUIContent_t620 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t64 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t910 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m5328 (Object_t * __this /* static, unused */, Rect_t544  ___position, bool ___value, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m5329 (Object_t * __this /* static, unused */, Rect_t544  ___position, int32_t ___id, bool ___value, GUIContent_t620 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m5330 (Object_t * __this /* static, unused */, Rect_t544 * ___position, int32_t ___id, bool ___value, GUIContent_t620 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::SelectionGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
extern "C" int32_t GUI_SelectionGrid_m5331 (Object_t * __this /* static, unused */, Rect_t544  ___position, int32_t ___selected, GUIContentU5BU5D_t1227* ___contents, int32_t ___xCount, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_CalcTotalHorizSpacing_m5332 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t64 * ___style, GUIStyle_t64 * ___firstStyle, GUIStyle_t64 * ___midStyle, GUIStyle_t64 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_DoButtonGrid_m5333 (Object_t * __this /* static, unused */, Rect_t544  ___position, int32_t ___selected, GUIContentU5BU5D_t1227* ___contents, int32_t ___xCount, GUIStyle_t64 * ___style, GUIStyle_t64 * ___firstStyle, GUIStyle_t64 * ___midStyle, GUIStyle_t64 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" RectU5BU5D_t1228* GUI_CalcMouseRects_m5334 (Object_t * __this /* static, unused */, Rect_t544  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t64 * ___style, GUIStyle_t64 * ___firstStyle, GUIStyle_t64 * ___midStyle, GUIStyle_t64 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C" int32_t GUI_GetButtonGridMouseSelection_m5335 (Object_t * __this /* static, unused */, RectU5BU5D_t1228* ___buttonRects, Vector2_t68  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m5336 (Object_t * __this /* static, unused */, Rect_t544  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t64 * ___slider, GUIStyle_t64 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m5337 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m5338 (Object_t * __this /* static, unused */, Rect_t544  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m5339 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m5340 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t544  ___rect, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m5341 (Object_t * __this /* static, unused */, Rect_t544  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m5342 (Object_t * __this /* static, unused */, Rect_t544  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t64 * ___slider, GUIStyle_t64 * ___thumb, GUIStyle_t64 * ___leftButton, GUIStyle_t64 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t68  GUI_BeginScrollView_m5343 (Object_t * __this /* static, unused */, Rect_t544  ___position, Vector2_t68  ___scrollPosition, Rect_t544  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t64 * ___horizontalScrollbar, GUIStyle_t64 * ___verticalScrollbar, GUIStyle_t64 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m5344 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t544  GUI_ModalWindow_m2939 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t544  ___clientRect, WindowFunction_t619 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C" Rect_t544  GUI_DoModalWindow_m5345 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t544  ___clientRect, WindowFunction_t619 * ___func, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, GUISkin_t618 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C" Rect_t544  GUI_INTERNAL_CALL_DoModalWindow_m5346 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t544 * ___clientRect, WindowFunction_t619 * ___func, GUIContent_t620 * ___content, GUIStyle_t64 * ___style, GUISkin_t618 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5347 (Object_t * __this /* static, unused */, WindowFunction_t619 * ___func, int32_t ___id, GUISkin_t618 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t64 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
