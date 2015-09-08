#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomainSetup
struct AppDomainSetup_t3381;
// System.String
struct String_t;

// System.Void System.AppDomainSetup::.ctor()
extern "C" void AppDomainSetup__ctor_m19972 (AppDomainSetup_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainSetup::.ctor(System.AppDomainSetup)
extern "C" void AppDomainSetup__ctor_m19973 (AppDomainSetup_t3381 * __this, AppDomainSetup_t3381 * ___setup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomainSetup::GetAppBase(System.String)
extern "C" String_t* AppDomainSetup_GetAppBase_m19974 (Object_t * __this /* static, unused */, String_t* ___appBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomainSetup::get_ApplicationBase()
extern "C" String_t* AppDomainSetup_get_ApplicationBase_m19975 (AppDomainSetup_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomainSetup::get_ConfigurationFile()
extern "C" String_t* AppDomainSetup_get_ConfigurationFile_m19976 (AppDomainSetup_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
