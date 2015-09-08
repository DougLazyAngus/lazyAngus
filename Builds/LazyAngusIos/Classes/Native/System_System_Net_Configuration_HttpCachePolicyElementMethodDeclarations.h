#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t4322;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3311;
// System.Xml.XmlReader
struct XmlReader_t3369;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C" void HttpCachePolicyElement__cctor_m16274 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3311 * HttpCachePolicyElement_get_Properties_m16275 (HttpCachePolicyElement_t4322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void HttpCachePolicyElement_DeserializeElement_m16276 (HttpCachePolicyElement_t4322 * __this, XmlReader_t3369 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void HttpCachePolicyElement_Reset_m16277 (HttpCachePolicyElement_t4322 * __this, ConfigurationElement_t3315 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
