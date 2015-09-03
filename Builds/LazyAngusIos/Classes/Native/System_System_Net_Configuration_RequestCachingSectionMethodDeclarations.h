#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.RequestCachingSection
struct RequestCachingSection_t4333;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Xml.XmlReader
struct XmlReader_t3368;

// System.Void System.Net.Configuration.RequestCachingSection::.cctor()
extern "C" void RequestCachingSection__cctor_m16316 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::get_Properties()
extern "C" ConfigurationPropertyCollection_t3310 * RequestCachingSection_get_Properties_m16317 (RequestCachingSection_t4333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::PostDeserialize()
extern "C" void RequestCachingSection_PostDeserialize_m16318 (RequestCachingSection_t4333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.RequestCachingSection::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C" void RequestCachingSection_DeserializeElement_m16319 (RequestCachingSection_t4333 * __this, XmlReader_t3368 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
