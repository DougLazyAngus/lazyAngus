﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3421;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3416;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdElementValidationState__ctor_m12273 (XsdElementValidationState_t3421 * __this, XmlSchemaElement_t3416 * ___element, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C" String_t* XsdElementValidationState_get_Name_m12274 (XsdElementValidationState_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C" String_t* XsdElementValidationState_get_NS_m12275 (XsdElementValidationState_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdElementValidationState_EvaluateStartElement_m12276 (XsdElementValidationState_t3421 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdValidationState_t3420 * XsdElementValidationState_CheckOccurence_m12277 (XsdElementValidationState_t3421 * __this, XmlSchemaElement_t3416 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C" bool XsdElementValidationState_EvaluateEndElement_m12278 (XsdElementValidationState_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C" bool XsdElementValidationState_EvaluateIsEmptiable_m12279 (XsdElementValidationState_t3421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;