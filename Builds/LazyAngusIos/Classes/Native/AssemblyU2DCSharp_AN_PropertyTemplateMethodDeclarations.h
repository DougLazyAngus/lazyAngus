#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_PropertyTemplate
struct AN_PropertyTemplate_t126;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t692;
// System.Xml.XmlElement
struct XmlElement_t693;

// System.Void AN_PropertyTemplate::.ctor(System.String)
extern "C" void AN_PropertyTemplate__ctor_m619 (AN_PropertyTemplate_t126 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_PropertyTemplate::ToXmlElement(System.Xml.XmlDocument,System.Xml.XmlElement)
extern "C" void AN_PropertyTemplate_ToXmlElement_m620 (AN_PropertyTemplate_t126 * __this, XmlDocument_t692 * ___doc, XmlElement_t693 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_PropertyTemplate::get_Tag()
extern "C" String_t* AN_PropertyTemplate_get_Tag_m621 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_PropertyTemplate::get_Name()
extern "C" String_t* AN_PropertyTemplate_get_Name_m622 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_PropertyTemplate::set_Name(System.String)
extern "C" void AN_PropertyTemplate_set_Name_m623 (AN_PropertyTemplate_t126 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_PropertyTemplate::get_Value()
extern "C" String_t* AN_PropertyTemplate_get_Value_m624 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_PropertyTemplate::set_Value(System.String)
extern "C" void AN_PropertyTemplate_set_Value_m625 (AN_PropertyTemplate_t126 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AN_PropertyTemplate::get_Label()
extern "C" String_t* AN_PropertyTemplate_get_Label_m626 (AN_PropertyTemplate_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_PropertyTemplate::set_Label(System.String)
extern "C" void AN_PropertyTemplate_set_Label_m627 (AN_PropertyTemplate_t126 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
