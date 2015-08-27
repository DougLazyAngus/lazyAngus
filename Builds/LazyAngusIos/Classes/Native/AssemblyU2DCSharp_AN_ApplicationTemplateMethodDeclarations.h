#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_ApplicationTemplate
struct AN_ApplicationTemplate_t120;
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate>
struct Dictionary_2_t119;
// AN_ActivityTemplate
struct AN_ActivityTemplate_t117;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t678;
// System.Xml.XmlElement
struct XmlElement_t679;

// System.Void AN_ApplicationTemplate::.ctor()
extern "C" void AN_ApplicationTemplate__ctor_m581 (AN_ApplicationTemplate_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ApplicationTemplate::AddActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_AddActivity_m582 (AN_ApplicationTemplate_t120 * __this, AN_ActivityTemplate_t117 * ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ApplicationTemplate::RemoveActivity(AN_ActivityTemplate)
extern "C" void AN_ApplicationTemplate_RemoveActivity_m583 (AN_ApplicationTemplate_t120 * __this, AN_ActivityTemplate_t117 * ___activity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ActivityTemplate AN_ApplicationTemplate::GetOrCreateActivityWithName(System.String)
extern "C" AN_ActivityTemplate_t117 * AN_ApplicationTemplate_GetOrCreateActivityWithName_m584 (AN_ApplicationTemplate_t120 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ActivityTemplate AN_ApplicationTemplate::GetActivityWithName(System.String)
extern "C" AN_ActivityTemplate_t117 * AN_ApplicationTemplate_GetActivityWithName_m585 (AN_ApplicationTemplate_t120 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ActivityTemplate AN_ApplicationTemplate::GetLauncherActivity()
extern "C" AN_ActivityTemplate_t117 * AN_ApplicationTemplate_GetLauncherActivity_m586 (AN_ApplicationTemplate_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ApplicationTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ApplicationTemplate_ToXmlElement_m587 (AN_ApplicationTemplate_t120 * __this, XmlDocument_t678 * ___doc, XmlElement_t679 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,AN_ActivityTemplate> AN_ApplicationTemplate::get_Activities()
extern "C" Dictionary_2_t119 * AN_ApplicationTemplate_get_Activities_m588 (AN_ApplicationTemplate_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
