#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t496;
// UnityEngine.TextGenerator
struct TextGenerator_t786;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t381;
// UnityEngine.UI.Graphic
struct Graphic_t756;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t776;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t778;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t780;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t719;
// UnityEngine.Event
struct Event_t621;
struct Event_t621_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t679;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t787;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t881;
// UnityEngine.Transform
struct Transform_t323;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
extern "C" void InputField__ctor_m3872 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
extern "C" void InputField__cctor_m3873 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
extern "C" TextGenerator_t786 * InputField_get_cachedInputTextGenerator_m3874 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
extern "C" void InputField_set_shouldHideMobileInput_m3875 (InputField_t496 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
extern "C" bool InputField_get_shouldHideMobileInput_m3876 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C" String_t* InputField_get_text_m3119 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" void InputField_set_text_m3120 (InputField_t496 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
extern "C" bool InputField_get_isFocused_m3118 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
extern "C" float InputField_get_caretBlinkRate_m3877 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
extern "C" void InputField_set_caretBlinkRate_m3878 (InputField_t496 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
extern "C" Text_t381 * InputField_get_textComponent_m3879 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
extern "C" void InputField_set_textComponent_m3880 (InputField_t496 * __this, Text_t381 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
extern "C" Graphic_t756 * InputField_get_placeholder_m3881 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
extern "C" void InputField_set_placeholder_m3882 (InputField_t496 * __this, Graphic_t756 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
extern "C" Color_t257  InputField_get_selectionColor_m3883 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
extern "C" void InputField_set_selectionColor_m3884 (InputField_t496 * __this, Color_t257  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
extern "C" SubmitEvent_t776 * InputField_get_onEndEdit_m3885 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
extern "C" void InputField_set_onEndEdit_m3886 (InputField_t496 * __this, SubmitEvent_t776 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
extern "C" OnChangeEvent_t778 * InputField_get_onValueChange_m3887 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
extern "C" void InputField_set_onValueChange_m3888 (InputField_t496 * __this, OnChangeEvent_t778 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
extern "C" OnValidateInput_t780 * InputField_get_onValidateInput_m3889 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
extern "C" void InputField_set_onValidateInput_m3890 (InputField_t496 * __this, OnValidateInput_t780 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
extern "C" int32_t InputField_get_characterLimit_m3891 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
extern "C" void InputField_set_characterLimit_m3892 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
extern "C" int32_t InputField_get_contentType_m3893 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
extern "C" void InputField_set_contentType_m3894 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
extern "C" int32_t InputField_get_lineType_m3895 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
extern "C" void InputField_set_lineType_m3896 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
extern "C" int32_t InputField_get_inputType_m3897 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
extern "C" void InputField_set_inputType_m3898 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
extern "C" int32_t InputField_get_keyboardType_m3899 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
extern "C" void InputField_set_keyboardType_m3900 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
extern "C" int32_t InputField_get_characterValidation_m3901 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
extern "C" void InputField_set_characterValidation_m3902 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
extern "C" bool InputField_get_multiLine_m3903 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
extern "C" uint16_t InputField_get_asteriskChar_m3904 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
extern "C" void InputField_set_asteriskChar_m3905 (InputField_t496 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
extern "C" bool InputField_get_wasCanceled_m3906 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
extern "C" void InputField_ClampPos_m3907 (InputField_t496 * __this, int32_t* ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPositionInternal()
extern "C" int32_t InputField_get_caretPositionInternal_m3908 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPositionInternal(System.Int32)
extern "C" void InputField_set_caretPositionInternal_m3909 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPositionInternal()
extern "C" int32_t InputField_get_caretSelectPositionInternal_m3910 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPositionInternal(System.Int32)
extern "C" void InputField_set_caretSelectPositionInternal_m3911 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
extern "C" bool InputField_get_hasSelection_m3912 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
extern "C" int32_t InputField_get_caretPosition_m3913 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
extern "C" void InputField_set_caretPosition_m3914 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionAnchorPosition()
extern "C" int32_t InputField_get_selectionAnchorPosition_m3915 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionAnchorPosition(System.Int32)
extern "C" void InputField_set_selectionAnchorPosition_m3916 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionFocusPosition()
extern "C" int32_t InputField_get_selectionFocusPosition_m3917 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionFocusPosition(System.Int32)
extern "C" void InputField_set_selectionFocusPosition_m3918 (InputField_t496 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
extern "C" void InputField_OnEnable_m3919 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
extern "C" void InputField_OnDisable_m3920 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
extern "C" Object_t * InputField_CaretBlink_m3921 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
extern "C" void InputField_SetCaretVisible_m3922 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
extern "C" void InputField_SetCaretActive_m3923 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
extern "C" void InputField_OnFocus_m3924 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
extern "C" void InputField_SelectAll_m3925 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
extern "C" void InputField_MoveTextEnd_m3926 (InputField_t496 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
extern "C" void InputField_MoveTextStart_m3927 (InputField_t496 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
extern "C" String_t* InputField_get_clipboard_m3928 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
extern "C" void InputField_set_clipboard_m3929 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
extern "C" bool InputField_InPlaceEditing_m3930 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
extern "C" void InputField_LateUpdate_m3931 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
extern "C" Vector2_t68  InputField_ScreenToLocal_m3932 (InputField_t496 * __this, Vector2_t68  ___screen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
extern "C" int32_t InputField_GetUnclampedCharacterLineFromPosition_m3933 (InputField_t496 * __this, Vector2_t68  ___pos, TextGenerator_t786 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
extern "C" int32_t InputField_GetCharacterIndexFromPosition_m3934 (InputField_t496 * __this, Vector2_t68  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool InputField_MayDrag_m3935 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnBeginDrag_m3936 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnDrag_m3937 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * InputField_MouseDragOutsideRect_m3938 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnEndDrag_m3939 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerDown_m3940 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
extern "C" int32_t InputField_KeyPressed_m3941 (InputField_t496 * __this, Event_t621 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
extern "C" bool InputField_IsValidChar_m3942 (InputField_t496 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
extern "C" void InputField_ProcessEvent_m3943 (InputField_t496 * __this, Event_t621 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnUpdateSelected_m3944 (InputField_t496 * __this, BaseEventData_t679 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
extern "C" String_t* InputField_GetSelectedString_m3945 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
extern "C" int32_t InputField_FindtNextWordBegin_m3946 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
extern "C" void InputField_MoveRight_m3947 (InputField_t496 * __this, bool ___shift, bool ___ctrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
extern "C" int32_t InputField_FindtPrevWordBegin_m3948 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
extern "C" void InputField_MoveLeft_m3949 (InputField_t496 * __this, bool ___shift, bool ___ctrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
extern "C" int32_t InputField_DetermineCharacterLine_m3950 (InputField_t496 * __this, int32_t ___charPos, TextGenerator_t786 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineUpCharacterPosition_m3951 (InputField_t496 * __this, int32_t ___originalPos, bool ___goToFirstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineDownCharacterPosition_m3952 (InputField_t496 * __this, int32_t ___originalPos, bool ___goToLastChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
extern "C" void InputField_MoveDown_m3953 (InputField_t496 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
extern "C" void InputField_MoveDown_m3954 (InputField_t496 * __this, bool ___shift, bool ___goToLastChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
extern "C" void InputField_MoveUp_m3955 (InputField_t496 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
extern "C" void InputField_MoveUp_m3956 (InputField_t496 * __this, bool ___shift, bool ___goToFirstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
extern "C" void InputField_Delete_m3957 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
extern "C" void InputField_ForwardSpace_m3958 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
extern "C" void InputField_Backspace_m3959 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
extern "C" void InputField_Insert_m3960 (InputField_t496 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
extern "C" void InputField_SendOnValueChangedAndUpdateLabel_m3961 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
extern "C" void InputField_SendOnValueChanged_m3962 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
extern "C" void InputField_SendOnSubmit_m3963 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
extern "C" void InputField_Append_m3964 (InputField_t496 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
extern "C" void InputField_Append_m3965 (InputField_t496 * __this, uint16_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
extern "C" void InputField_UpdateLabel_m3966 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
extern "C" bool InputField_IsSelectionVisible_m3967 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineStartPosition_m3968 (Object_t * __this /* static, unused */, TextGenerator_t786 * ___gen, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineEndPosition_m3969 (Object_t * __this /* static, unused */, TextGenerator_t786 * ___gen, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
extern "C" void InputField_SetDrawRangeToContainCaretPosition_m3970 (InputField_t496 * __this, TextGenerator_t786 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
extern "C" void InputField_MarkGeometryAsDirty_m3971 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void InputField_Rebuild_m3972 (InputField_t496 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
extern "C" void InputField_UpdateGeometry_m3973 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
extern "C" void InputField_AssignPositioningIfNeeded_m3974 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void InputField_OnFillVBO_m3975 (InputField_t496 * __this, List_1_t787 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
extern "C" void InputField_GenerateCursor_m3976 (InputField_t496 * __this, List_1_t787 * ___vbo, Vector2_t68  ___roundingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
extern "C" void InputField_CreateCursorVerts_m3977 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
extern "C" float InputField_SumLineHeights_m3978 (InputField_t496 * __this, int32_t ___endLine, TextGenerator_t786 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
extern "C" void InputField_GenerateHightlight_m3979 (InputField_t496 * __this, List_1_t787 * ___vbo, Vector2_t68  ___roundingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
extern "C" uint16_t InputField_Validate_m3980 (InputField_t496 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
extern "C" void InputField_ActivateInputField_m3981 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
extern "C" void InputField_ActivateInputFieldInternal_m3982 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSelect_m3983 (InputField_t496 * __this, BaseEventData_t679 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerClick_m3984 (InputField_t496 * __this, PointerEventData_t719 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
extern "C" void InputField_DeactivateInputField_m3985 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnDeselect_m3986 (InputField_t496 * __this, BaseEventData_t679 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSubmit_m3987 (InputField_t496 * __this, BaseEventData_t679 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
extern "C" void InputField_EnforceContentType_m3988 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
extern "C" void InputField_SetToCustomIfContentTypeIsNot_m3989 (InputField_t496 * __this, ContentTypeU5BU5D_t881* ___allowedContentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
extern "C" void InputField_SetToCustom_m3990 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void InputField_DoStateTransition_m3991 (InputField_t496 * __this, int32_t ___state, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m3992 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t323 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m3993 (InputField_t496 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
