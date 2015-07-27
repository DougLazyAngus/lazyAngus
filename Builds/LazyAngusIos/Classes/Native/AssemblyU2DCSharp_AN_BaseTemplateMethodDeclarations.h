#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_BaseTemplate
struct AN_BaseTemplate_t78;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t82;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct Dictionary_2_t81;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t86;
// System.String
struct String_t;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t83;
// System.Xml.XmlDocument
struct XmlDocument_t577;
// System.Xml.XmlElement
struct XmlElement_t578;

// System.Void AN_BaseTemplate::.ctor()
extern "C" void AN_BaseTemplate__ctor_m318 (AN_BaseTemplate_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreateIntentFilterWithName(System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetOrCreateIntentFilterWithName_m319 (AN_BaseTemplate_t78 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetIntentFilterWithName(System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetIntentFilterWithName_m320 (AN_BaseTemplate_t78 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_BaseTemplate::GetIntentFilterName(AN_PropertyTemplate)
extern "C" String_t* AN_BaseTemplate_GetIntentFilterName_m321 (AN_BaseTemplate_t78 * __this, AN_PropertyTemplate_t86 * ___intent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithName(System.String,System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetOrCreatePropertyWithName_m322 (AN_BaseTemplate_t78 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithName(System.String,System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetPropertyWithName_m323 (AN_BaseTemplate_t78 * __this, String_t* ___tag, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetOrCreatePropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetOrCreatePropertyWithTag_m324 (AN_BaseTemplate_t78 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_BaseTemplate::GetPropertyWithTag(System.String)
extern "C" AN_PropertyTemplate_t86 * AN_BaseTemplate_GetPropertyWithTag_m325 (AN_BaseTemplate_t78 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_BaseTemplate::GetPropertiesWithTag(System.String)
extern "C" List_1_t83 * AN_BaseTemplate_GetPropertiesWithTag_m326 (AN_BaseTemplate_t78 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
// System.Void AN_BaseTemplate::AddProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m327 (AN_BaseTemplate_t78 * __this, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::AddProperty(System.String,AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_AddProperty_m328 (AN_BaseTemplate_t78 * __this, String_t* ___tag, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::SetValue(System.String,System.String)
extern "C" void AN_BaseTemplate_SetValue_m329 (AN_BaseTemplate_t78 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_BaseTemplate::GetValue(System.String)
extern "C" String_t* AN_BaseTemplate_GetValue_m330 (AN_BaseTemplate_t78 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::RemoveProperty(AN_PropertyTemplate)
extern "C" void AN_BaseTemplate_RemoveProperty_m331 (AN_BaseTemplate_t78 * __this, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::RemoveValue(System.String)
extern "C" void AN_BaseTemplate_RemoveValue_m332 (AN_BaseTemplate_t78 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::AddPropertiesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern "C" void AN_BaseTemplate_AddPropertiesToXml_m333 (AN_BaseTemplate_t78 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, AN_BaseTemplate_t78 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_BaseTemplate::AddAttributesToXml(System.Xml.XmlDocument,System.Xml.XmlElement,AN_BaseTemplate)
extern "C" void AN_BaseTemplate_AddAttributesToXml_m334 (AN_BaseTemplate_t78 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, AN_BaseTemplate_t78 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> AN_BaseTemplate::get_Values()
extern "C" Dictionary_2_t82 * AN_BaseTemplate_get_Values_m335 (AN_BaseTemplate_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>> AN_BaseTemplate::get_Properties()
extern "C" Dictionary_2_t81 * AN_BaseTemplate_get_Properties_m336 (AN_BaseTemplate_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
