#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3514;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String
struct String_t;

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C" void XmlNamedNodeMap__ctor_m13135 (XmlNamedNodeMap_t3514 * __this, XmlNode_t742 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C" void XmlNamedNodeMap__cctor_m13136 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C" ArrayList_t723 * XmlNamedNodeMap_get_NodeList_m13137 (XmlNamedNodeMap_t3514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C" int32_t XmlNamedNodeMap_get_Count_m13138 (XmlNamedNodeMap_t3514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C" Object_t * XmlNamedNodeMap_GetEnumerator_m13139 (XmlNamedNodeMap_t3514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C" XmlNode_t742 * XmlNamedNodeMap_GetNamedItem_m13140 (XmlNamedNodeMap_t3514 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String,System.String)
extern "C" XmlNode_t742 * XmlNamedNodeMap_GetNamedItem_m13141 (XmlNamedNodeMap_t3514 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String)
extern "C" XmlNode_t742 * XmlNamedNodeMap_RemoveNamedItem_m13142 (XmlNamedNodeMap_t3514 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C" XmlNode_t742 * XmlNamedNodeMap_RemoveNamedItem_m13143 (XmlNamedNodeMap_t3514 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t742 * XmlNamedNodeMap_SetNamedItem_m13144 (XmlNamedNodeMap_t3514 * __this, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C" XmlNode_t742 * XmlNamedNodeMap_SetNamedItem_m13145 (XmlNamedNodeMap_t3514 * __this, XmlNode_t742 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C" ArrayList_t723 * XmlNamedNodeMap_get_Nodes_m13146 (XmlNamedNodeMap_t3514 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
