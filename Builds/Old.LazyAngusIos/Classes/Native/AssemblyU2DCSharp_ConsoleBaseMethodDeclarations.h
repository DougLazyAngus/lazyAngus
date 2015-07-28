﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConsoleBase
struct ConsoleBase_t66;
// System.String
struct String_t;
// FBResult
struct FBResult_t213;

// System.Void ConsoleBase::.ctor()
extern "C" void ConsoleBase__ctor_m254 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::Awake()
extern "C" void ConsoleBase_Awake_m255 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConsoleBase::Button(System.String)
extern "C" bool ConsoleBase_Button_m256 (ConsoleBase_t66 * __this, String_t* ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::LabelAndTextField(System.String,System.String&)
extern "C" void ConsoleBase_LabelAndTextField_m257 (ConsoleBase_t66 * __this, String_t* ___label, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConsoleBase::IsHorizontalLayout()
extern "C" bool ConsoleBase_IsHorizontalLayout_m258 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsoleBase::get_TextWindowHeight()
extern "C" int32_t ConsoleBase_get_TextWindowHeight_m259 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::Callback(FBResult)
extern "C" void ConsoleBase_Callback_m260 (ConsoleBase_t66 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::AddCommonFooter()
extern "C" void ConsoleBase_AddCommonFooter_m261 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::AddCommonHeader()
extern "C" void ConsoleBase_AddCommonHeader_m262 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBInit()
extern "C" void ConsoleBase_CallFBInit_m263 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::OnInitComplete()
extern "C" void ConsoleBase_OnInitComplete_m264 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::OnHideUnity(System.Boolean)
extern "C" void ConsoleBase_OnHideUnity_m265 (ConsoleBase_t66 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBLogin()
extern "C" void ConsoleBase_CallFBLogin_m266 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBLoginForPublish()
extern "C" void ConsoleBase_CallFBLoginForPublish_m267 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::LoginCallback(FBResult)
extern "C" void ConsoleBase_LoginCallback_m268 (ConsoleBase_t66 * __this, FBResult_t213 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBLogout()
extern "C" void ConsoleBase_CallFBLogout_m269 (ConsoleBase_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;