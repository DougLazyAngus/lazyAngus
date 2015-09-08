#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t4324;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3314;
// System.Xml.XmlReader
struct XmlReader_t3372;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3318;

// System.Void System.Net.Configuration.FtpCachePolicyElement::.cctor()
extern "C" void FtpCachePolicyElement__cctor_m16270 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3314 * FtpCachePolicyElement_get_Properties_m16271 (FtpCachePolicyElement_t4324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void FtpCachePolicyElement_DeserializeElement_m16272 (FtpCachePolicyElement_t4324 * __this, XmlReader_t3372 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void FtpCachePolicyElement_Reset_m16273 (FtpCachePolicyElement_t4324 * __this, ConfigurationElement_t3318 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
