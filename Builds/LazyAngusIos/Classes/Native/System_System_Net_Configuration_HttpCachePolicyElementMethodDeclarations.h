#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t4321;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C" void HttpCachePolicyElement__cctor_m16261 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * HttpCachePolicyElement_get_Properties_m16262 (HttpCachePolicyElement_t4321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void HttpCachePolicyElement_DeserializeElement_m16263 (HttpCachePolicyElement_t4321 * __this, XmlReader_t3368 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void HttpCachePolicyElement_Reset_m16264 (HttpCachePolicyElement_t4321 * __this, ConfigurationElement_t3314 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
