#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_ManifestTemplate
struct AN_ManifestTemplate_t124;
// AN_ApplicationTemplate
struct AN_ApplicationTemplate_t120;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t123;
// System.String
struct String_t;
// AN_PropertyTemplate
struct AN_PropertyTemplate_t126;
// System.Xml.XmlDocument
struct XmlDocument_t692;
// System.Xml.XmlElement
struct XmlElement_t693;

// System.Void AN_ManifestTemplate::.ctor()
extern "C" void AN_ManifestTemplate__ctor_m610 (AN_ManifestTemplate_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AN_ManifestTemplate::HasPermission(System.String)
extern "C" bool AN_ManifestTemplate_HasPermission_m611 (AN_ManifestTemplate_t124 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::RemovePermission(System.String)
extern "C" void AN_ManifestTemplate_RemovePermission_m612 (AN_ManifestTemplate_t124 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::RemovePermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_RemovePermission_m613 (AN_ManifestTemplate_t124 * __this, AN_PropertyTemplate_t126 * ___permission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::AddPermission(System.String)
extern "C" void AN_ManifestTemplate_AddPermission_m614 (AN_ManifestTemplate_t124 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::AddPermission(AN_PropertyTemplate)
extern "C" void AN_ManifestTemplate_AddPermission_m615 (AN_ManifestTemplate_t124 * __this, AN_PropertyTemplate_t126 * ___permission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_ManifestTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_ManifestTemplate_ToXmlElement_m616 (AN_ManifestTemplate_t124 * __this, XmlDocument_t692 * ___doc, XmlElement_t693 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AN_ApplicationTemplate AN_ManifestTemplate::get_ApplicationTemplate()
extern "C" AN_ApplicationTemplate_t120 * AN_ManifestTemplate_get_ApplicationTemplate_m617 (AN_ManifestTemplate_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<AN_PropertyTemplate> AN_ManifestTemplate::get_Permissions()
extern "C" List_1_t123 * AN_ManifestTemplate_get_Permissions_m618 (AN_ManifestTemplate_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
