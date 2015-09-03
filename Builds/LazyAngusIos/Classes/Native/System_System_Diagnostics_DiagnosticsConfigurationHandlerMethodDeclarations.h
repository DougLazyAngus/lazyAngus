﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t4284;
// System.Object
struct Object_t;
// System.Xml.XmlNode
struct XmlNode_t731;
// System.Collections.IDictionary
struct IDictionary_t699;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4286;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t737;

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern "C" void DiagnosticsConfigurationHandler__ctor_m16038 (DiagnosticsConfigurationHandler_t4284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern "C" Object_t * DiagnosticsConfigurationHandler_Create_m16039 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___parent, Object_t * ___configContext, XmlNode_t731 * ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddAssertNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddAssertNode_m16040 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSwitchesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddSwitchesNode_m16041 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::GetSwitchValue(System.String,System.String)
extern "C" Object_t * DiagnosticsConfigurationHandler_GetSwitchValue_m16042 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceNode_m16043 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceAttributes(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceAttributes_m16044 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.DiagnosticsConfigurationHandler::GetSharedListeners(System.Collections.IDictionary)
extern "C" TraceListenerCollection_t4286 * DiagnosticsConfigurationHandler_GetSharedListeners_m16045 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddSourcesNode(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddSourcesNode_m16046 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceSource(System.Collections.IDictionary,System.Collections.Hashtable,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_AddTraceSource_m16047 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, Hashtable_t710 * ___sources, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListeners(System.Collections.IDictionary,System.Xml.XmlNode,System.Diagnostics.TraceListenerCollection)
extern "C" void DiagnosticsConfigurationHandler_AddTraceListeners_m16048 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___listenersNode, TraceListenerCollection_t4286 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::AddTraceListener(System.Collections.IDictionary,System.Xml.XmlNode,System.Xml.XmlAttributeCollection,System.Diagnostics.TraceListenerCollection)
extern "C" void DiagnosticsConfigurationHandler_AddTraceListener_m16049 (DiagnosticsConfigurationHandler_t4284 * __this, Object_t * ___d, XmlNode_t731 * ___child, XmlAttributeCollection_t737 * ___attributes, TraceListenerCollection_t4286 * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::RemoveTraceListener(System.String)
extern "C" void DiagnosticsConfigurationHandler_RemoveTraceListener_m16050 (DiagnosticsConfigurationHandler_t4284 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.DiagnosticsConfigurationHandler::GetAttribute(System.Xml.XmlAttributeCollection,System.String,System.Boolean,System.Xml.XmlNode)
extern "C" String_t* DiagnosticsConfigurationHandler_GetAttribute_m16051 (DiagnosticsConfigurationHandler_t4284 * __this, XmlAttributeCollection_t737 * ___attrs, String_t* ___attr, bool ___required, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateAttribute(System.String,System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ValidateAttribute_m16052 (DiagnosticsConfigurationHandler_t4284 * __this, String_t* ___attribute, String_t* ___value, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ValidateInvalidAttributes(System.Xml.XmlAttributeCollection,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ValidateInvalidAttributes_m16053 (DiagnosticsConfigurationHandler_t4284 * __this, XmlAttributeCollection_t737 * ___c, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowMissingAttribute(System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowMissingAttribute_m16054 (DiagnosticsConfigurationHandler_t4284 * __this, String_t* ___attribute, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedNode(System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedNode_m16055 (DiagnosticsConfigurationHandler_t4284 * __this, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedElement(System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedElement_m16056 (DiagnosticsConfigurationHandler_t4284 * __this, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::ThrowUnrecognizedAttribute(System.String,System.Xml.XmlNode)
extern "C" void DiagnosticsConfigurationHandler_ThrowUnrecognizedAttribute_m16057 (DiagnosticsConfigurationHandler_t4284 * __this, String_t* ___attribute, XmlNode_t731 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;