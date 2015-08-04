#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t655;
// UnityEngine.GUISkin
struct GUISkin_t731;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t394;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.GUIContent
struct GUIContent_t733;
// UnityEngine.TextEditor
struct TextEditor_t1015;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2853;
// UnityEngine.Rect[]
struct RectU5BU5D_t2854;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t732;
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
extern "C" void GUI__cctor_m8562 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t287  GUI_get_nextScrollStepTime_m8563 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m8564 (Object_t * __this /* static, unused */, DateTime_t287  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m8565 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m8566 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m8567 (Object_t * __this /* static, unused */, GUISkin_t731 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t731 * GUI_get_skin_m3862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m8568 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C" bool GUI_get_enabled_m8569 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C" void GUI_set_enabled_m3452 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C" void GUI_set_tooltip_m8570 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C" void GUI_Internal_SetTooltip_m8571 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_Label_m3442 (Object_t * __this /* static, unused */, Rect_t648  ___position, Texture_t394 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m3511 (Object_t * __this /* static, unused */, Rect_t648  ___position, String_t* ___text, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m8572 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m8573 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m8574 (Object_t * __this /* static, unused */, Rect_t648 * ___position, GUIContent_t733 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m3737 (Object_t * __this /* static, unused */, Rect_t648  ___position, String_t* ___text, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m8575 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m3510 (Object_t * __this /* static, unused */, Rect_t648  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C" bool GUI_Button_m3872 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m3738 (Object_t * __this /* static, unused */, Rect_t648  ___position, String_t* ___text, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m3873 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m8576 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m8577 (Object_t * __this /* static, unused */, Rect_t648 * ___position, GUIContent_t733 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m8578 (Object_t * __this /* static, unused */, Rect_t648  ___position, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m8579 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextArea(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" String_t* GUI_TextArea_m3438 (Object_t * __this /* static, unused */, Rect_t648  ___position, String_t* ___text, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m8580 (Object_t * __this /* static, unused */, Rect_t648  ___position, int32_t ___id, GUIContent_t733 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t107 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m8581 (Object_t * __this /* static, unused */, Rect_t648  ___position, int32_t ___id, GUIContent_t733 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t107 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t1015 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m8582 (Object_t * __this /* static, unused */, Rect_t648  ___position, bool ___value, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m8583 (Object_t * __this /* static, unused */, Rect_t648  ___position, int32_t ___id, bool ___value, GUIContent_t733 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m8584 (Object_t * __this /* static, unused */, Rect_t648 * ___position, int32_t ___id, bool ___value, GUIContent_t733 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::SelectionGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
extern "C" int32_t GUI_SelectionGrid_m8585 (Object_t * __this /* static, unused */, Rect_t648  ___position, int32_t ___selected, GUIContentU5BU5D_t2853* ___contents, int32_t ___xCount, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_CalcTotalHorizSpacing_m8586 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t107 * ___style, GUIStyle_t107 * ___firstStyle, GUIStyle_t107 * ___midStyle, GUIStyle_t107 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_DoButtonGrid_m8587 (Object_t * __this /* static, unused */, Rect_t648  ___position, int32_t ___selected, GUIContentU5BU5D_t2853* ___contents, int32_t ___xCount, GUIStyle_t107 * ___style, GUIStyle_t107 * ___firstStyle, GUIStyle_t107 * ___midStyle, GUIStyle_t107 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" RectU5BU5D_t2854* GUI_CalcMouseRects_m8588 (Object_t * __this /* static, unused */, Rect_t648  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t107 * ___style, GUIStyle_t107 * ___firstStyle, GUIStyle_t107 * ___midStyle, GUIStyle_t107 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C" int32_t GUI_GetButtonGridMouseSelection_m8589 (Object_t * __this /* static, unused */, RectU5BU5D_t2854* ___buttonRects, Vector2_t110  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m8590 (Object_t * __this /* static, unused */, Rect_t648  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t107 * ___slider, GUIStyle_t107 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m8591 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m8592 (Object_t * __this /* static, unused */, Rect_t648  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m8593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m8594 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t648  ___rect, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m8595 (Object_t * __this /* static, unused */, Rect_t648  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m8596 (Object_t * __this /* static, unused */, Rect_t648  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t107 * ___slider, GUIStyle_t107 * ___thumb, GUIStyle_t107 * ___leftButton, GUIStyle_t107 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t110  GUI_BeginScrollView_m8597 (Object_t * __this /* static, unused */, Rect_t648  ___position, Vector2_t110  ___scrollPosition, Rect_t648  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t107 * ___horizontalScrollbar, GUIStyle_t107 * ___verticalScrollbar, GUIStyle_t107 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m8598 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t648  GUI_ModalWindow_m3865 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t648  ___clientRect, WindowFunction_t732 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C" Rect_t648  GUI_DoModalWindow_m8599 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t648  ___clientRect, WindowFunction_t732 * ___func, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, GUISkin_t731 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C" Rect_t648  GUI_INTERNAL_CALL_DoModalWindow_m8600 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t648 * ___clientRect, WindowFunction_t732 * ___func, GUIContent_t733 * ___content, GUIStyle_t107 * ___style, GUISkin_t731 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m8601 (Object_t * __this /* static, unused */, WindowFunction_t732 * ___func, int32_t ___id, GUISkin_t731 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t107 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
