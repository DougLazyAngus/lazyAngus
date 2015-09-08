#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TipDialog
struct TipDialog_t683;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TipDialog::.ctor()
extern "C" void TipDialog__ctor_m3735 (TipDialog_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipDialog::CloseDialog()
extern "C" void TipDialog_CloseDialog_m3736 (TipDialog_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipDialog::ConfigureDialog(System.String)
extern "C" void TipDialog_ConfigureDialog_m3737 (TipDialog_t683 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TipDialog::ConfigureDialog(System.String,UnityEngine.Vector2)
extern "C" void TipDialog_ConfigureDialog_m3738 (TipDialog_t683 * __this, String_t* ___message, Vector2_t110  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
