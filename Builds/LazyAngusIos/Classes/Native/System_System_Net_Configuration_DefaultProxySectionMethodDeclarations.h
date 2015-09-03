#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_t4319;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t4312;
// System.Net.Configuration.ModuleElement
struct ModuleElement_t4325;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4332;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;

// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern "C" void DefaultProxySection__ctor_m16245 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::.cctor()
extern "C" void DefaultProxySection__cctor_m16246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElementCollection System.Net.Configuration.DefaultProxySection::get_BypassList()
extern "C" BypassElementCollection_t4312 * DefaultProxySection_get_BypassList_m16247 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_Enabled()
extern "C" bool DefaultProxySection_get_Enabled_m16248 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_Enabled(System.Boolean)
extern "C" void DefaultProxySection_set_Enabled_m16249 (DefaultProxySection_t4319 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ModuleElement System.Net.Configuration.DefaultProxySection::get_Module()
extern "C" ModuleElement_t4325 * DefaultProxySection_get_Module_m16250 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ProxyElement System.Net.Configuration.DefaultProxySection::get_Proxy()
extern "C" ProxyElement_t4332 * DefaultProxySection_get_Proxy_m16251 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_UseDefaultCredentials()
extern "C" bool DefaultProxySection_get_UseDefaultCredentials_m16252 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_UseDefaultCredentials(System.Boolean)
extern "C" void DefaultProxySection_set_UseDefaultCredentials_m16253 (DefaultProxySection_t4319 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * DefaultProxySection_get_Properties_m16254 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::PostDeserialize()
extern "C" void DefaultProxySection_PostDeserialize_m16255 (DefaultProxySection_t4319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultProxySection_Reset_m16256 (DefaultProxySection_t4319 * __this, ConfigurationElement_t3314 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
