#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_ManifestTemplate
struct AN_ManifestTemplate_t82;
// AN_ApplicationTemplate
struct AN_ApplicationTemplate_t78;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t81;
// System.String
struct String_t;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t84;
// System.Xml.XmlDocument
struct XmlDocument_t481;
// System.Xml.XmlElement
struct XmlElement_t482;

// System.Void AN_ManifestTemplate::.ctor()
extern "C" void AN_ManifestTemplate__ctor_m335 (AN_ManifestTemplate_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AN_ManifestTemplate::HasPermission(System.String)
extern "C" bool AN_ManifestTemplate_HasPermission_m336 (AN_ManifestTemplate_t82 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::RemovePermission(System.String)
extern "C" void AN_ManifestTemplate_RemovePermission_m337 (AN_ManifestTemplate_t82 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::RemovePermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_RemovePermission_m338 (AN_ManifestTemplate_t82 * __this, AN_PropertyTemplate_t84 * ___permission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::AddPermission(System.String)
extern "C" void AN_ManifestTemplate_AddPermission_m339 (AN_ManifestTemplate_t82 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::AddPermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_AddPermission_m340 (AN_ManifestTemplate_t82 * __this, AN_PropertyTemplate_t84 * ___permission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ManifestTemplate_ToXmlElement_m341 (AN_ManifestTemplate_t82 * __this, XmlDocument_t481 * ___doc, XmlElement_t482 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ApplicationTemplate AN_ManifestTemplate::get_ApplicationTemplate()
extern "C" AN_ApplicationTemplate_t78 * AN_ManifestTemplate_get_ApplicationTemplate_m342 (AN_ManifestTemplate_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_ManifestTemplate::get_Permissions()
extern "C" List_1_t81 * AN_ManifestTemplate_get_Permissions_m343 (AN_ManifestTemplate_t82 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
