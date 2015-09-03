#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.FtpCachePolicyElement
struct FtpCachePolicyElement_t4320;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;

// System.Void System.Net.Configuration.FtpCachePolicyElement::.cctor()
extern "C" void FtpCachePolicyElement__cctor_m16257 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.FtpCachePolicyElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * FtpCachePolicyElement_get_Properties_m16258 (FtpCachePolicyElement_t4320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void FtpCachePolicyElement_DeserializeElement_m16259 (FtpCachePolicyElement_t4320 * __this, XmlReader_t3368 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.FtpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void FtpCachePolicyElement_Reset_m16260 (FtpCachePolicyElement_t4320 * __this, ConfigurationElement_t3314 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
