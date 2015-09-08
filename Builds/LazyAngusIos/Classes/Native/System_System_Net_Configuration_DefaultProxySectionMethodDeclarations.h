#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_t4320;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t4313;
// System.Net.Configuration.ModuleElement
struct ModuleElement_t4326;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4333;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3311;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;

// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern "C" void DefaultProxySection__ctor_m16258 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::.cctor()
extern "C" void DefaultProxySection__cctor_m16259 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElementCollection System.Net.Configuration.DefaultProxySection::get_BypassList()
extern "C" BypassElementCollection_t4313 * DefaultProxySection_get_BypassList_m16260 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_Enabled()
extern "C" bool DefaultProxySection_get_Enabled_m16261 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_Enabled(System.Boolean)
extern "C" void DefaultProxySection_set_Enabled_m16262 (DefaultProxySection_t4320 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ModuleElement System.Net.Configuration.DefaultProxySection::get_Module()
extern "C" ModuleElement_t4326 * DefaultProxySection_get_Module_m16263 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ProxyElement System.Net.Configuration.DefaultProxySection::get_Proxy()
extern "C" ProxyElement_t4333 * DefaultProxySection_get_Proxy_m16264 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.DefaultProxySection::get_UseDefaultCredentials()
extern "C" bool DefaultProxySection_get_UseDefaultCredentials_m16265 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::set_UseDefaultCredentials(System.Boolean)
extern "C" void DefaultProxySection_set_UseDefaultCredentials_m16266 (DefaultProxySection_t4320 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3311 * DefaultProxySection_get_Properties_m16267 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::PostDeserialize()
extern "C" void DefaultProxySection_PostDeserialize_m16268 (DefaultProxySection_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultProxySection_Reset_m16269 (DefaultProxySection_t4320 * __this, ConfigurationElement_t3315 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
