﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNode
struct DTDNode_t3183;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3174;
// System.Xml.XmlException
struct XmlException_t3230;

// System.Void Mono.Xml.DTDNode::.ctor()
extern "C" void DTDNode__ctor_m10625 (DTDNode_t3183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDNode::get_BaseURI()
extern "C" String_t* DTDNode_get_BaseURI_m10626 (DTDNode_t3183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_BaseURI(System.String)
extern "C" void DTDNode_set_BaseURI_m10627 (DTDNode_t3183 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::get_IsInternalSubset()
extern "C" bool DTDNode_get_IsInternalSubset_m10628 (DTDNode_t3183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_IsInternalSubset(System.Boolean)
extern "C" void DTDNode_set_IsInternalSubset_m10629 (DTDNode_t3183 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LineNumber()
extern "C" int32_t DTDNode_get_LineNumber_m10630 (DTDNode_t3183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LinePosition()
extern "C" int32_t DTDNode_get_LinePosition_m10631 (DTDNode_t3183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::SetRoot(Mono.Xml.DTDObjectModel)
extern "C" void DTDNode_SetRoot_m10632 (DTDNode_t3183 * __this, DTDObjectModel_t3174 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::get_Root()
extern "C" DTDObjectModel_t3174 * DTDNode_get_Root_m10633 (DTDNode_t3183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml.DTDNode::NotWFError(System.String)
extern "C" XmlException_t3230 * DTDNode_NotWFError_m10634 (DTDNode_t3183 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
