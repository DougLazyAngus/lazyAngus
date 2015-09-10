#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t4332;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3325;

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C" void HttpCachePolicyElement__cctor_m16331 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3321 * HttpCachePolicyElement_get_Properties_m16332 (HttpCachePolicyElement_t4332 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void HttpCachePolicyElement_DeserializeElement_m16333 (HttpCachePolicyElement_t4332 * __this, XmlReader_t3379 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void HttpCachePolicyElement_Reset_m16334 (HttpCachePolicyElement_t4332 * __this, ConfigurationElement_t3325 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
