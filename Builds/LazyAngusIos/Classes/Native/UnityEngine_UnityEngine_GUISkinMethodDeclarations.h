#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t723;
// UnityEngine.Font
struct Font_t845;
// UnityEngine.GUIStyle
struct GUIStyle_t107;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2669;
// UnityEngine.GUISettings
struct GUISettings_t2667;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;

// System.Void UnityEngine.GUISkin::.ctor()
extern "C" void GUISkin__ctor_m8648 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" void GUISkin_OnEnable_m8649 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t845 * GUISkin_get_font_m8650 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern "C" void GUISkin_set_font_m8651 (GUISkin_t723 * __this, Font_t845 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t107 * GUISkin_get_box_m8652 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_box_m8653 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t107 * GUISkin_get_label_m8654 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m8655 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t107 * GUISkin_get_textField_m8656 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m8657 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t107 * GUISkin_get_textArea_m3814 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m8658 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t107 * GUISkin_get_button_m3811 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m8659 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t107 * GUISkin_get_toggle_m8660 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m8661 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t107 * GUISkin_get_window_m3824 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m8662 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t107 * GUISkin_get_horizontalSlider_m8663 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m8664 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t107 * GUISkin_get_horizontalSliderThumb_m8665 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m8666 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t107 * GUISkin_get_verticalSlider_m8667 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m8668 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t107 * GUISkin_get_verticalSliderThumb_m8669 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m8670 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t107 * GUISkin_get_horizontalScrollbar_m8671 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m8672 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t107 * GUISkin_get_horizontalScrollbarThumb_m8673 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m8674 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t107 * GUISkin_get_horizontalScrollbarLeftButton_m8675 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m8676 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t107 * GUISkin_get_horizontalScrollbarRightButton_m8677 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m8678 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t107 * GUISkin_get_verticalScrollbar_m8679 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m8680 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t107 * GUISkin_get_verticalScrollbarThumb_m8681 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m8682 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t107 * GUISkin_get_verticalScrollbarUpButton_m8683 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m8684 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t107 * GUISkin_get_verticalScrollbarDownButton_m8685 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m8686 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t107 * GUISkin_get_scrollView_m8687 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m8688 (GUISkin_t723 * __this, GUIStyle_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t2669* GUISkin_get_customStyles_m8689 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" void GUISkin_set_customStyles_m8690 (GUISkin_t723 * __this, GUIStyleU5BU5D_t2669* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t2667 * GUISkin_get_settings_m8691 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" GUIStyle_t107 * GUISkin_get_error_m8692 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m8693 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C" void GUISkin_BuildStyleCache_m8694 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C" GUIStyle_t107 * GUISkin_GetStyle_m8695 (GUISkin_t723 * __this, String_t* ___styleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" GUIStyle_t107 * GUISkin_FindStyle_m8696 (GUISkin_t723 * __this, String_t* ___styleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" void GUISkin_MakeCurrent_m8697 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern "C" Object_t * GUISkin_GetEnumerator_m8698 (GUISkin_t723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
