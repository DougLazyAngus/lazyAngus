#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_BaseTemplate
struct AN_BaseTemplate_t118;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t122;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct Dictionary_2_t121;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t126;
// System.String
struct String_t;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t123;
// System.Xml.XmlDocument
struct XmlDocument_t675;
// System.Xml.XmlElement
struct XmlElement_t676;

// System.Void AN_BaseTemplate::.ctor()
extern "C" void AN_BaseTemplate__ctor_m589 (AN_BaseTemplate_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreateIntentFilterWithName(System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetOrCreateIntentFilterWithName_m590 (AN_BaseTemplate_t118 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetIntentFilterWithName(System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetIntentFilterWithName_m591 (AN_BaseTemplate_t118 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_BaseTemplate::GetIntentFilterName(AN_PropertyTemplate)
extern "C" String_t* AN_BaseTemplate_GetIntentFilterName_m592 (AN_BaseTemplate_t118 * __this, AN_PropertyTemplate_t126 * ___intent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithName(System.String,System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetOrCreatePropertyWithName_m593 (AN_BaseTemplate_t118 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithName(System.String,System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetPropertyWithName_m594 (AN_BaseTemplate_t118 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetOrCreatePropertyWithTag_m595 (AN_BaseTemplate_t118 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t126 * AN_BaseTemplate_GetPropertyWithTag_m596 (AN_BaseTemplate_t118 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_BaseTemplate::GetPropertiesWithTag(System.String)
extern "C" List_1_t123 * AN_BaseTemplate_GetPropertiesWithTag_m597 (AN_BaseTemplate_t118 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
// System.Void AN_BaseTemplate::AddProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m598 (AN_BaseTemplate_t118 * __this, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::AddProperty(System.String,AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m599 (AN_BaseTemplate_t118 * __this, String_t* ___tag, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::SetValue(System.String,System.String)
extern "C" void AN_BaseTemplate_SetValue_m600 (AN_BaseTemplate_t118 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_BaseTemplate::GetValue(System.String)
extern "C" String_t* AN_BaseTemplate_GetValue_m601 (AN_BaseTemplate_t118 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::RemoveProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_RemoveProperty_m602 (AN_BaseTemplate_t118 * __this, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::RemoveValue(System.String)
extern "C" void AN_BaseTemplate_RemoveValue_m603 (AN_BaseTemplate_t118 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::AddPropertiesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern "C" void AN_BaseTemplate_AddPropertiesToXml_m604 (AN_BaseTemplate_t118 * __this, XmlDocument_t675 * ___doc, XmlElement_t676 * ___parent, AN_BaseTemplate_t118 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::AddAttributesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern "C" void AN_BaseTemplate_AddAttributesToXml_m605 (AN_BaseTemplate_t118 * __this, XmlDocument_t675 * ___doc, XmlElement_t676 * ___parent, AN_BaseTemplate_t118 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> AN_BaseTemplate::get_Values()
extern "C" Dictionary_2_t122 * AN_BaseTemplate_get_Values_m606 (AN_BaseTemplate_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>> AN_BaseTemplate::get_Properties()
extern "C" Dictionary_2_t121 * AN_BaseTemplate_get_Properties_m607 (AN_BaseTemplate_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
