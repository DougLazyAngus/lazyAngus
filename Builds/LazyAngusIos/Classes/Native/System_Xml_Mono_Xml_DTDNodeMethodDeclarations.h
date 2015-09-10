#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNode
struct DTDNode_t3470;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// System.Xml.XmlException
struct XmlException_t3527;

// System.Void Mono.Xml.DTDNode::.ctor()
extern "C" void DTDNode__ctor_m12608 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDNode::get_BaseURI()
extern "C" String_t* DTDNode_get_BaseURI_m12609 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_BaseURI(System.String)
extern "C" void DTDNode_set_BaseURI_m12610 (DTDNode_t3470 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::get_IsInternalSubset()
extern "C" bool DTDNode_get_IsInternalSubset_m12611 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_IsInternalSubset(System.Boolean)
extern "C" void DTDNode_set_IsInternalSubset_m12612 (DTDNode_t3470 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LineNumber()
extern "C" int32_t DTDNode_get_LineNumber_m12613 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LinePosition()
extern "C" int32_t DTDNode_get_LinePosition_m12614 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::HasLineInfo()
extern "C" bool DTDNode_HasLineInfo_m12615 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::SetRoot(Mono.Xml.DTDObjectModel)
extern "C" void DTDNode_SetRoot_m12616 (DTDNode_t3470 * __this, DTDObjectModel_t3454 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::get_Root()
extern "C" DTDObjectModel_t3454 * DTDNode_get_Root_m12617 (DTDNode_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml.DTDNode::NotWFError(System.String)
extern "C" XmlException_t3527 * DTDNode_NotWFError_m12618 (DTDNode_t3470 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
