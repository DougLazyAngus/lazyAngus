#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3164;
// System.Collections.ArrayList
struct ArrayList_t3109;
// System.Xml.XmlNode
struct XmlNode_t667;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String
struct String_t;

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C" void XmlNamedNodeMap__ctor_m10728 (XmlNamedNodeMap_t3164 * __this, XmlNode_t667 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C" void XmlNamedNodeMap__cctor_m10729 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C" ArrayList_t3109 * XmlNamedNodeMap_get_NodeList_m10730 (XmlNamedNodeMap_t3164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C" int32_t XmlNamedNodeMap_get_Count_m10731 (XmlNamedNodeMap_t3164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C" Object_t * XmlNamedNodeMap_GetEnumerator_m10732 (XmlNamedNodeMap_t3164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C" XmlNode_t667 * XmlNamedNodeMap_GetNamedItem_m10733 (XmlNamedNodeMap_t3164 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C" XmlNode_t667 * XmlNamedNodeMap_RemoveNamedItem_m10734 (XmlNamedNodeMap_t3164 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t667 * XmlNamedNodeMap_SetNamedItem_m10735 (XmlNamedNodeMap_t3164 * __this, XmlNode_t667 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C" XmlNode_t667 * XmlNamedNodeMap_SetNamedItem_m10736 (XmlNamedNodeMap_t3164 * __this, XmlNode_t667 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C" ArrayList_t3109 * XmlNamedNodeMap_get_Nodes_m10737 (XmlNamedNodeMap_t3164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
