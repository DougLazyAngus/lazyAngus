#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t543;
// UnityEngine.TextGenerator
struct TextGenerator_t841;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t422;
// UnityEngine.UI.Graphic
struct Graphic_t811;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t831;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t833;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t835;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t774;
// UnityEngine.Event
struct Event_t681;
struct Event_t681_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t734;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t842;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t936;
// UnityEngine.Transform
struct Transform_t364;
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
extern "C" void InputField__ctor_m4465 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
extern "C" void InputField__cctor_m4466 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
extern "C" TextGenerator_t841 * InputField_get_cachedInputTextGenerator_m4467 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
extern "C" void InputField_set_shouldHideMobileInput_m4468 (InputField_t543 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
extern "C" bool InputField_get_shouldHideMobileInput_m4469 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C" String_t* InputField_get_text_m3693 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" void InputField_set_text_m3694 (InputField_t543 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
extern "C" bool InputField_get_isFocused_m3692 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
extern "C" float InputField_get_caretBlinkRate_m4470 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
extern "C" void InputField_set_caretBlinkRate_m4471 (InputField_t543 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
extern "C" Text_t422 * InputField_get_textComponent_m4472 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
extern "C" void InputField_set_textComponent_m4473 (InputField_t543 * __this, Text_t422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
extern "C" Graphic_t811 * InputField_get_placeholder_m4474 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
extern "C" void InputField_set_placeholder_m4475 (InputField_t543 * __this, Graphic_t811 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
extern "C" Color_t283  InputField_get_selectionColor_m4476 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
extern "C" void InputField_set_selectionColor_m4477 (InputField_t543 * __this, Color_t283  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
extern "C" SubmitEvent_t831 * InputField_get_onEndEdit_m4478 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
extern "C" void InputField_set_onEndEdit_m4479 (InputField_t543 * __this, SubmitEvent_t831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
extern "C" OnChangeEvent_t833 * InputField_get_onValueChange_m4480 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
extern "C" void InputField_set_onValueChange_m4481 (InputField_t543 * __this, OnChangeEvent_t833 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
extern "C" OnValidateInput_t835 * InputField_get_onValidateInput_m4482 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
extern "C" void InputField_set_onValidateInput_m4483 (InputField_t543 * __this, OnValidateInput_t835 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
extern "C" int32_t InputField_get_characterLimit_m4484 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
extern "C" void InputField_set_characterLimit_m4485 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
extern "C" int32_t InputField_get_contentType_m4486 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
extern "C" void InputField_set_contentType_m4487 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
extern "C" int32_t InputField_get_lineType_m4488 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
extern "C" void InputField_set_lineType_m4489 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
extern "C" int32_t InputField_get_inputType_m4490 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
extern "C" void InputField_set_inputType_m4491 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
extern "C" int32_t InputField_get_keyboardType_m4492 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
extern "C" void InputField_set_keyboardType_m4493 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
extern "C" int32_t InputField_get_characterValidation_m4494 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
extern "C" void InputField_set_characterValidation_m4495 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
extern "C" bool InputField_get_multiLine_m4496 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
extern "C" uint16_t InputField_get_asteriskChar_m4497 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
extern "C" void InputField_set_asteriskChar_m4498 (InputField_t543 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
extern "C" bool InputField_get_wasCanceled_m4499 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
extern "C" void InputField_ClampPos_m4500 (InputField_t543 * __this, int32_t* ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPositionInternal()
extern "C" int32_t InputField_get_caretPositionInternal_m4501 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPositionInternal(System.Int32)
extern "C" void InputField_set_caretPositionInternal_m4502 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPositionInternal()
extern "C" int32_t InputField_get_caretSelectPositionInternal_m4503 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPositionInternal(System.Int32)
extern "C" void InputField_set_caretSelectPositionInternal_m4504 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
extern "C" bool InputField_get_hasSelection_m4505 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
extern "C" int32_t InputField_get_caretPosition_m4506 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
extern "C" void InputField_set_caretPosition_m4507 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionAnchorPosition()
extern "C" int32_t InputField_get_selectionAnchorPosition_m4508 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionAnchorPosition(System.Int32)
extern "C" void InputField_set_selectionAnchorPosition_m4509 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_selectionFocusPosition()
extern "C" int32_t InputField_get_selectionFocusPosition_m4510 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionFocusPosition(System.Int32)
extern "C" void InputField_set_selectionFocusPosition_m4511 (InputField_t543 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
extern "C" void InputField_OnEnable_m4512 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
extern "C" void InputField_OnDisable_m4513 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
extern "C" Object_t * InputField_CaretBlink_m4514 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
extern "C" void InputField_SetCaretVisible_m4515 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
extern "C" void InputField_SetCaretActive_m4516 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
extern "C" void InputField_OnFocus_m4517 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
extern "C" void InputField_SelectAll_m4518 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
extern "C" void InputField_MoveTextEnd_m4519 (InputField_t543 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
extern "C" void InputField_MoveTextStart_m4520 (InputField_t543 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
extern "C" String_t* InputField_get_clipboard_m4521 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
extern "C" void InputField_set_clipboard_m4522 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
extern "C" bool InputField_InPlaceEditing_m4523 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
extern "C" void InputField_LateUpdate_m4524 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
extern "C" Vector2_t68  InputField_ScreenToLocal_m4525 (InputField_t543 * __this, Vector2_t68  ___screen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
extern "C" int32_t InputField_GetUnclampedCharacterLineFromPosition_m4526 (InputField_t543 * __this, Vector2_t68  ___pos, TextGenerator_t841 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
extern "C" int32_t InputField_GetCharacterIndexFromPosition_m4527 (InputField_t543 * __this, Vector2_t68  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool InputField_MayDrag_m4528 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnBeginDrag_m4529 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnDrag_m4530 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * InputField_MouseDragOutsideRect_m4531 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnEndDrag_m4532 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerDown_m4533 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
extern "C" int32_t InputField_KeyPressed_m4534 (InputField_t543 * __this, Event_t681 * ___evt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
extern "C" bool InputField_IsValidChar_m4535 (InputField_t543 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
extern "C" void InputField_ProcessEvent_m4536 (InputField_t543 * __this, Event_t681 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnUpdateSelected_m4537 (InputField_t543 * __this, BaseEventData_t734 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
extern "C" String_t* InputField_GetSelectedString_m4538 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
extern "C" int32_t InputField_FindtNextWordBegin_m4539 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
extern "C" void InputField_MoveRight_m4540 (InputField_t543 * __this, bool ___shift, bool ___ctrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
extern "C" int32_t InputField_FindtPrevWordBegin_m4541 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
extern "C" void InputField_MoveLeft_m4542 (InputField_t543 * __this, bool ___shift, bool ___ctrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
extern "C" int32_t InputField_DetermineCharacterLine_m4543 (InputField_t543 * __this, int32_t ___charPos, TextGenerator_t841 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineUpCharacterPosition_m4544 (InputField_t543 * __this, int32_t ___originalPos, bool ___goToFirstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
extern "C" int32_t InputField_LineDownCharacterPosition_m4545 (InputField_t543 * __this, int32_t ___originalPos, bool ___goToLastChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
extern "C" void InputField_MoveDown_m4546 (InputField_t543 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
extern "C" void InputField_MoveDown_m4547 (InputField_t543 * __this, bool ___shift, bool ___goToLastChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
extern "C" void InputField_MoveUp_m4548 (InputField_t543 * __this, bool ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
extern "C" void InputField_MoveUp_m4549 (InputField_t543 * __this, bool ___shift, bool ___goToFirstChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
extern "C" void InputField_Delete_m4550 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
extern "C" void InputField_ForwardSpace_m4551 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
extern "C" void InputField_Backspace_m4552 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
extern "C" void InputField_Insert_m4553 (InputField_t543 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
extern "C" void InputField_SendOnValueChangedAndUpdateLabel_m4554 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
extern "C" void InputField_SendOnValueChanged_m4555 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
extern "C" void InputField_SendOnSubmit_m4556 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
extern "C" void InputField_Append_m4557 (InputField_t543 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
extern "C" void InputField_Append_m4558 (InputField_t543 * __this, uint16_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
extern "C" void InputField_UpdateLabel_m4559 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
extern "C" bool InputField_IsSelectionVisible_m4560 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineStartPosition_m4561 (Object_t * __this /* static, unused */, TextGenerator_t841 * ___gen, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
extern "C" int32_t InputField_GetLineEndPosition_m4562 (Object_t * __this /* static, unused */, TextGenerator_t841 * ___gen, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
extern "C" void InputField_SetDrawRangeToContainCaretPosition_m4563 (InputField_t543 * __this, TextGenerator_t841 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
extern "C" void InputField_MarkGeometryAsDirty_m4564 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void InputField_Rebuild_m4565 (InputField_t543 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
extern "C" void InputField_UpdateGeometry_m4566 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
extern "C" void InputField_AssignPositioningIfNeeded_m4567 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void InputField_OnFillVBO_m4568 (InputField_t543 * __this, List_1_t842 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
extern "C" void InputField_GenerateCursor_m4569 (InputField_t543 * __this, List_1_t842 * ___vbo, Vector2_t68  ___roundingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
extern "C" void InputField_CreateCursorVerts_m4570 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
extern "C" float InputField_SumLineHeights_m4571 (InputField_t543 * __this, int32_t ___endLine, TextGenerator_t841 * ___generator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
extern "C" void InputField_GenerateHightlight_m4572 (InputField_t543 * __this, List_1_t842 * ___vbo, Vector2_t68  ___roundingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
extern "C" uint16_t InputField_Validate_m4573 (InputField_t543 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
extern "C" void InputField_ActivateInputField_m4574 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
extern "C" void InputField_ActivateInputFieldInternal_m4575 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSelect_m4576 (InputField_t543 * __this, BaseEventData_t734 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void InputField_OnPointerClick_m4577 (InputField_t543 * __this, PointerEventData_t774 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
extern "C" void InputField_DeactivateInputField_m4578 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnDeselect_m4579 (InputField_t543 * __this, BaseEventData_t734 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void InputField_OnSubmit_m4580 (InputField_t543 * __this, BaseEventData_t734 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
extern "C" void InputField_EnforceContentType_m4581 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
extern "C" void InputField_SetToCustomIfContentTypeIsNot_m4582 (InputField_t543 * __this, ContentTypeU5BU5D_t936* ___allowedContentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
extern "C" void InputField_SetToCustom_m4583 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
extern "C" void InputField_DoStateTransition_m4584 (InputField_t543 * __this, int32_t ___state, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m4585 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t364 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m4586 (InputField_t543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
