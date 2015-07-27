#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t1643;
// System.Xml.XmlNode
struct XmlNode_t615;
// System.String
struct String_t;
// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedAction.h"

// System.Void System.Xml.XmlNodeChangedEventArgs::.ctor(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction)
extern "C" void XmlNodeChangedEventArgs__ctor_m8143 (XmlNodeChangedEventArgs_t1643 * __this, XmlNode_t615 * ___node, XmlNode_t615 * ___oldParent, XmlNode_t615 * ___newParent, String_t* ___oldValue, String_t* ___newValue, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
