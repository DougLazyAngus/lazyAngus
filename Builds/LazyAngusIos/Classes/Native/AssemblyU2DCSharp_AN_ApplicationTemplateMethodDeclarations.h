#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_ApplicationTemplate
struct AN_ApplicationTemplate_t80;
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>
struct Dictionary_2_t79;
// AN_ActivityTemplate
struct AN_ActivityTemplate_t77;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t577;
// System.Xml.XmlElement
struct XmlElement_t578;

// System.Void AN_ApplicationTemplate::.ctor()
extern "C" void AN_ApplicationTemplate__ctor_m310 (AN_ApplicationTemplate_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ApplicationTemplate::AddActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_AddActivity_m311 (AN_ApplicationTemplate_t80 * __this, AN_ActivityTemplate_t77 * ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ApplicationTemplate::RemoveActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_RemoveActivity_m312 (AN_ApplicationTemplate_t80 * __this, AN_ActivityTemplate_t77 * ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ActivityTemplate AN_ApplicationTemplate::GetOrCreateActivityWithName(System.String)
extern "C" AN_ActivityTemplate_t77 * AN_ApplicationTemplate_GetOrCreateActivityWithName_m313 (AN_ApplicationTemplate_t80 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ActivityTemplate AN_ApplicationTemplate::GetActivityWithName(System.String)
extern "C" AN_ActivityTemplate_t77 * AN_ApplicationTemplate_GetActivityWithName_m314 (AN_ApplicationTemplate_t80 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ActivityTemplate AN_ApplicationTemplate::GetLauncherActivity()
extern "C" AN_ActivityTemplate_t77 * AN_ApplicationTemplate_GetLauncherActivity_m315 (AN_ApplicationTemplate_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ApplicationTemplate_ToXmlElement_m316 (AN_ApplicationTemplate_t80 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate> AN_ApplicationTemplate::get_Activities()
extern "C" Dictionary_2_t79 * AN_ApplicationTemplate_get_Activities_m317 (AN_ApplicationTemplate_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
