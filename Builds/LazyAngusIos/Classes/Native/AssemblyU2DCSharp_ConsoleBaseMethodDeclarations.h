#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ConsoleBase
struct ConsoleBase_t109;
// System.String
struct String_t;
// FBResult
struct FBResult_t281;

// System.Void ConsoleBase::.ctor()
extern "C" void ConsoleBase__ctor_m529 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::Awake()
extern "C" void ConsoleBase_Awake_m530 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConsoleBase::Button(System.String)
extern "C" bool ConsoleBase_Button_m531 (ConsoleBase_t109 * __this, String_t* ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::LabelAndTextField(System.String,System.String&)
extern "C" void ConsoleBase_LabelAndTextField_m532 (ConsoleBase_t109 * __this, String_t* ___label, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConsoleBase::IsHorizontalLayout()
extern "C" bool ConsoleBase_IsHorizontalLayout_m533 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConsoleBase::get_TextWindowHeight()
extern "C" int32_t ConsoleBase_get_TextWindowHeight_m534 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::Callback(FBResult)
extern "C" void ConsoleBase_Callback_m535 (ConsoleBase_t109 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::AddCommonFooter()
extern "C" void ConsoleBase_AddCommonFooter_m536 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::AddCommonHeader()
extern "C" void ConsoleBase_AddCommonHeader_m537 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBInit()
extern "C" void ConsoleBase_CallFBInit_m538 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::OnInitComplete()
extern "C" void ConsoleBase_OnInitComplete_m539 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::OnHideUnity(System.Boolean)
extern "C" void ConsoleBase_OnHideUnity_m540 (ConsoleBase_t109 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBLogin()
extern "C" void ConsoleBase_CallFBLogin_m541 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBLoginForPublish()
extern "C" void ConsoleBase_CallFBLoginForPublish_m542 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::LoginCallback(FBResult)
extern "C" void ConsoleBase_LoginCallback_m543 (ConsoleBase_t109 * __this, FBResult_t281 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConsoleBase::CallFBLogout()
extern "C" void ConsoleBase_CallFBLogout_m544 (ConsoleBase_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
