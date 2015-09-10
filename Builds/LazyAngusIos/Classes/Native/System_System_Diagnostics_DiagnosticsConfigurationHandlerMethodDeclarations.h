#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t4295;
// System.Object
struct Object_t;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Collections.IDictionary
struct IDictionary_t710;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4297;
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t748;

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C" void DiagnosticsConfigurationHandler__ctor_m16108 (DiagnosticsConfigurationHandler_t4295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C" Object_t * DiagnosticsConfigurationHandler_Create_m16109 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___parent, Object_t * ___configContext, XmlNode_t742 * ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddAssertNode_m16110 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddSwitchesNode_m16111 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C" Object_t * DiagnosticsConfigurationHandler_GetSwitchValue_m16112 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceNode_m16113 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceAttributes_m16114 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C" TraceListenerCollection_t4297 * DiagnosticsConfigurationHandler_GetSharedListeners_m16115 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddSourcesNode_m16116 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceSource_m16117 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, Hashtable_t721 * ___sources, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C" void DiagnosticsConfigurationHandler_AddTraceListeners_m16118 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___listenersNode, TraceListenerCollection_t4297 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C" void DiagnosticsConfigurationHandler_AddTraceListener_m16119 (DiagnosticsConfigurationHandler_t4295 * __this, Object_t * ___d, XmlNode_t742 * ___child, XmlAttributeCollection_t748 * ___attributes, TraceListenerCollection_t4297 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C" void DiagnosticsConfigurationHandler_RemoveTraceListener_m16120 (DiagnosticsConfigurationHandler_t4295 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C" String_t* DiagnosticsConfigurationHandler_GetAttribute_m16121 (DiagnosticsConfigurationHandler_t4295 * __this, XmlAttributeCollection_t748 * ___attrs, String_t* ___attr, bool ___required, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ValidateAttribute_m16122 (DiagnosticsConfigurationHandler_t4295 * __this, String_t* ___attribute, String_t* ___value, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m16123 (DiagnosticsConfigurationHandler_t4295 * __this, XmlAttributeCollection_t748 * ___c, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m16124 (DiagnosticsConfigurationHandler_t4295 * __this, String_t* ___attribute, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m16125 (DiagnosticsConfigurationHandler_t4295 * __this, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m16126 (DiagnosticsConfigurationHandler_t4295 * __this, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m16127 (DiagnosticsConfigurationHandler_t4295 * __this, String_t* ___attribute, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
