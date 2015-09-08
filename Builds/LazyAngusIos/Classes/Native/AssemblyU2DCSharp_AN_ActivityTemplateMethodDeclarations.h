#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_ActivityTemplate
struct AN_ActivityTemplate_t117;
// System.String
struct String_t;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t126;
// System.Xml.XmlDocument
struct XmlDocument_t692;
// System.Xml.XmlElement
struct XmlElement_t693;

// System.Void AN_ActivityTemplate::.ctor(System.Boolean,System.String)
extern "C" void AN_ActivityTemplate__ctor_m574 (AN_ActivityTemplate_t117 * __this, bool ___isLauncher, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ActivityTemplate::SetName(System.String)
extern "C" void AN_ActivityTemplate_SetName_m575 (AN_ActivityTemplate_t117 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ActivityTemplate::SetAsLauncher(System.Boolean)
extern "C" void AN_ActivityTemplate_SetAsLauncher_m576 (AN_ActivityTemplate_t117 * __this, bool ___isLauncher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_ActivityTemplate::GetLauncherPropertyTemplate()
extern "C" AN_PropertyTemplate_t126 * AN_ActivityTemplate_GetLauncherPropertyTemplate_m577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AN_ActivityTemplate::IsLauncherProperty(AN_PropertyTemplate)
extern "C" bool AN_ActivityTemplate_IsLauncherProperty_m578 (AN_ActivityTemplate_t117 * __this, AN_PropertyTemplate_t126 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ActivityTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ActivityTemplate_ToXmlElement_m579 (AN_ActivityTemplate_t117 * __this, XmlDocument_t692 * ___doc, XmlElement_t693 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AN_ActivityTemplate::get_IsLauncher()
extern "C" bool AN_ActivityTemplate_get_IsLauncher_m580 (AN_ActivityTemplate_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_ActivityTemplate::get_Name()
extern "C" String_t* AN_ActivityTemplate_get_Name_m581 (AN_ActivityTemplate_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AN_ActivityTemplate::get_Id()
extern "C" int32_t AN_ActivityTemplate_get_Id_m582 (AN_ActivityTemplate_t117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
