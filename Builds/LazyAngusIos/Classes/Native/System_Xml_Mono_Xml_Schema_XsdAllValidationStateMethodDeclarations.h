#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t3427;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3426;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdAllValidationState__ctor_m12288 (XsdAllValidationState_t3427 * __this, XmlSchemaAll_t3426 * ___all, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C" XsdValidationState_t3420 * XsdAllValidationState_EvaluateStartElement_m12289 (XsdAllValidationState_t3427 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C" bool XsdAllValidationState_EvaluateEndElement_m12290 (XsdAllValidationState_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C" bool XsdAllValidationState_EvaluateIsEmptiable_m12291 (XsdAllValidationState_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
