#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t2047;
// System.Collections.ArrayList
struct ArrayList_t1459;
// System.Xml.XmlNode
struct XmlNode_t572;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String
struct String_t;

// System.Void System.Xml.XmlNamedNodeMap::.ctor(System.Xml.XmlNode)
extern "C" void XmlNamedNodeMap__ctor_m9889 (XmlNamedNodeMap_t2047 * __this, XmlNode_t572 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamedNodeMap::.cctor()
extern "C" void XmlNamedNodeMap__cctor_m9890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_NodeList()
extern "C" ArrayList_t1459 * XmlNamedNodeMap_get_NodeList_m9891 (XmlNamedNodeMap_t2047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNamedNodeMap::get_Count()
extern "C" int32_t XmlNamedNodeMap_get_Count_m9892 (XmlNamedNodeMap_t2047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator()
extern "C" Object_t * XmlNamedNodeMap_GetEnumerator_m9893 (XmlNamedNodeMap_t2047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::GetNamedItem(System.String)
extern "C" XmlNode_t572 * XmlNamedNodeMap_GetNamedItem_m9894 (XmlNamedNodeMap_t2047 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::RemoveNamedItem(System.String,System.String)
extern "C" XmlNode_t572 * XmlNamedNodeMap_RemoveNamedItem_m9895 (XmlNamedNodeMap_t2047 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode)
extern "C" XmlNode_t572 * XmlNamedNodeMap_SetNamedItem_m9896 (XmlNamedNodeMap_t2047 * __this, XmlNode_t572 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::SetNamedItem(System.Xml.XmlNode,System.Int32,System.Boolean)
extern "C" XmlNode_t572 * XmlNamedNodeMap_SetNamedItem_m9897 (XmlNamedNodeMap_t2047 * __this, XmlNode_t572 * ___node, int32_t ___pos, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::get_Nodes()
extern "C" ArrayList_t1459 * XmlNamedNodeMap_get_Nodes_m9898 (XmlNamedNodeMap_t2047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
