#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t602;
// UnityEngine.GUISkin
struct GUISkin_t679;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t354;
// UnityEngine.GUIStyle
struct GUIStyle_t67;
// UnityEngine.GUIContent
struct GUIContent_t681;
// UnityEngine.TextEditor
struct TextEditor_t966;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1281;
// UnityEngine.Rect[]
struct RectU5BU5D_t1282;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t680;
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
extern "C" void GUI__cctor_m5903 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t247  GUI_get_nextScrollStepTime_m5904 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5905 (Object_t * __this /* static, unused */, DateTime_t247  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m5906 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m5907 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m5908 (Object_t * __this /* static, unused */, GUISkin_t679 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t679 * GUI_get_skin_m3517 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5909 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C" bool GUI_get_enabled_m5910 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C" void GUI_set_enabled_m3103 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C" void GUI_set_tooltip_m5911 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C" void GUI_Internal_SetTooltip_m5912 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_Label_m3093 (Object_t * __this /* static, unused */, Rect_t595  ___position, Texture_t354 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m3163 (Object_t * __this /* static, unused */, Rect_t595  ___position, String_t* ___text, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5913 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5914 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5915 (Object_t * __this /* static, unused */, Rect_t595 * ___position, GUIContent_t681 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m3391 (Object_t * __this /* static, unused */, Rect_t595  ___position, String_t* ___text, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5916 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m3162 (Object_t * __this /* static, unused */, Rect_t595  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C" bool GUI_Button_m3527 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m3392 (Object_t * __this /* static, unused */, Rect_t595  ___position, String_t* ___text, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m3528 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5917 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5918 (Object_t * __this /* static, unused */, Rect_t595 * ___position, GUIContent_t681 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m5919 (Object_t * __this /* static, unused */, Rect_t595  ___position, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m5920 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextArea(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" String_t* GUI_TextArea_m3089 (Object_t * __this /* static, unused */, Rect_t595  ___position, String_t* ___text, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m5921 (Object_t * __this /* static, unused */, Rect_t595  ___position, int32_t ___id, GUIContent_t681 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t67 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m5922 (Object_t * __this /* static, unused */, Rect_t595  ___position, int32_t ___id, GUIContent_t681 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t67 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t966 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m5923 (Object_t * __this /* static, unused */, Rect_t595  ___position, bool ___value, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m5924 (Object_t * __this /* static, unused */, Rect_t595  ___position, int32_t ___id, bool ___value, GUIContent_t681 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m5925 (Object_t * __this /* static, unused */, Rect_t595 * ___position, int32_t ___id, bool ___value, GUIContent_t681 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::SelectionGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
extern "C" int32_t GUI_SelectionGrid_m5926 (Object_t * __this /* static, unused */, Rect_t595  ___position, int32_t ___selected, GUIContentU5BU5D_t1281* ___contents, int32_t ___xCount, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_CalcTotalHorizSpacing_m5927 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t67 * ___style, GUIStyle_t67 * ___firstStyle, GUIStyle_t67 * ___midStyle, GUIStyle_t67 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_DoButtonGrid_m5928 (Object_t * __this /* static, unused */, Rect_t595  ___position, int32_t ___selected, GUIContentU5BU5D_t1281* ___contents, int32_t ___xCount, GUIStyle_t67 * ___style, GUIStyle_t67 * ___firstStyle, GUIStyle_t67 * ___midStyle, GUIStyle_t67 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" RectU5BU5D_t1282* GUI_CalcMouseRects_m5929 (Object_t * __this /* static, unused */, Rect_t595  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t67 * ___style, GUIStyle_t67 * ___firstStyle, GUIStyle_t67 * ___midStyle, GUIStyle_t67 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C" int32_t GUI_GetButtonGridMouseSelection_m5930 (Object_t * __this /* static, unused */, RectU5BU5D_t1282* ___buttonRects, Vector2_t70  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m5931 (Object_t * __this /* static, unused */, Rect_t595  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t67 * ___slider, GUIStyle_t67 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m5932 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m5933 (Object_t * __this /* static, unused */, Rect_t595  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m5934 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m5935 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t595  ___rect, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m5936 (Object_t * __this /* static, unused */, Rect_t595  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m5937 (Object_t * __this /* static, unused */, Rect_t595  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t67 * ___slider, GUIStyle_t67 * ___thumb, GUIStyle_t67 * ___leftButton, GUIStyle_t67 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t70  GUI_BeginScrollView_m5938 (Object_t * __this /* static, unused */, Rect_t595  ___position, Vector2_t70  ___scrollPosition, Rect_t595  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t67 * ___horizontalScrollbar, GUIStyle_t67 * ___verticalScrollbar, GUIStyle_t67 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m5939 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t595  GUI_ModalWindow_m3520 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t595  ___clientRect, WindowFunction_t680 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C" Rect_t595  GUI_DoModalWindow_m5940 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t595  ___clientRect, WindowFunction_t680 * ___func, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, GUISkin_t679 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C" Rect_t595  GUI_INTERNAL_CALL_DoModalWindow_m5941 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t595 * ___clientRect, WindowFunction_t680 * ___func, GUIContent_t681 * ___content, GUIStyle_t67 * ___style, GUISkin_t679 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5942 (Object_t * __this /* static, unused */, WindowFunction_t680 * ___func, int32_t ___id, GUISkin_t679 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t67 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
