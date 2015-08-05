#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TextEditor
struct TextEditor_t1017;
// System.String
struct String_t;

// System.Void UnityEngine.TextEditor::.ctor()
extern "C" void TextEditor__ctor_m5764 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m9761 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m5767 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m9762 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m9763 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m9764 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m9765 (TextEditor_t1017 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m9766 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m9767 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m9768 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C" void TextEditor_Copy_m5768 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m9769 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C" bool TextEditor_Paste_m5765 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClampPos()
extern "C" void TextEditor_ClampPos_m9770 (TextEditor_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
