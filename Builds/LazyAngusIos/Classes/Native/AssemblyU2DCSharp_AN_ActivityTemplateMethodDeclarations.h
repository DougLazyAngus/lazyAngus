#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_ActivityTemplate
struct AN_ActivityTemplate_t77;
// System.String
struct String_t;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t86;
// System.Xml.XmlDocument
struct XmlDocument_t577;
// System.Xml.XmlElement
struct XmlElement_t578;

// System.Void AN_ActivityTemplate::.ctor(System.Boolean,System.String)
extern "C" void AN_ActivityTemplate__ctor_m301 (AN_ActivityTemplate_t77 * __this, bool ___isLauncher, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ActivityTemplate::SetName(System.String)
extern "C" void AN_ActivityTemplate_SetName_m302 (AN_ActivityTemplate_t77 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ActivityTemplate::SetAsLauncher(System.Boolean)
extern "C" void AN_ActivityTemplate_SetAsLauncher_m303 (AN_ActivityTemplate_t77 * __this, bool ___isLauncher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_PropertyTemplate AN_ActivityTemplate::GetLauncherPropertyTemplate()
extern "C" AN_PropertyTemplate_t86 * AN_ActivityTemplate_GetLauncherPropertyTemplate_m304 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AN_ActivityTemplate::IsLauncherProperty(AN_PropertyTemplate)
extern "C" bool AN_ActivityTemplate_IsLauncherProperty_m305 (AN_ActivityTemplate_t77 * __this, AN_PropertyTemplate_t86 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ActivityTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ActivityTemplate_ToXmlElement_m306 (AN_ActivityTemplate_t77 * __this, XmlDocument_t577 * ___doc, XmlElement_t578 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AN_ActivityTemplate::get_IsLauncher()
extern "C" bool AN_ActivityTemplate_get_IsLauncher_m307 (AN_ActivityTemplate_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_ActivityTemplate::get_Name()
extern "C" String_t* AN_ActivityTemplate_get_Name_m308 (AN_ActivityTemplate_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AN_ActivityTemplate::get_Id()
extern "C" int32_t AN_ActivityTemplate_get_Id_m309 (AN_ActivityTemplate_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
