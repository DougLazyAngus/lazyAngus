#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3422;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3417;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3419;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3421;

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdElementValidationState__ctor_m12286 (XsdElementValidationState_t3422 * __this, XmlSchemaElement_t3417 * ___element, XsdParticleStateManager_t3419 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C" String_t* XsdElementValidationState_get_Name_m12287 (XsdElementValidationState_t3422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C" String_t* XsdElementValidationState_get_NS_m12288 (XsdElementValidationState_t3422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3421 * XsdElementValidationState_EvaluateStartElement_m12289 (XsdElementValidationState_t3422 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdValidationState_t3421 * XsdElementValidationState_CheckOccurence_m12290 (XsdElementValidationState_t3422 * __this, XmlSchemaElement_t3417 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C" bool XsdElementValidationState_EvaluateEndElement_m12291 (XsdElementValidationState_t3422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C" bool XsdElementValidationState_EvaluateIsEmptiable_m12292 (XsdElementValidationState_t3422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
