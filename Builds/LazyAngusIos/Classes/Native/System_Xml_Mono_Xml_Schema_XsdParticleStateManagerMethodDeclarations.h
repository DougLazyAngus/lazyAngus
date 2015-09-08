#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3419;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3421;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3440;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t3422;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3417;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3424;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3423;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t3426;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3425;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t3428;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3427;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t3430;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3429;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t3432;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C" void XsdParticleStateManager__ctor_m12266 (XsdParticleStateManager_t3419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C" int32_t XsdParticleStateManager_get_ProcessContents_m12267 (XsdParticleStateManager_t3419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C" void XsdParticleStateManager_PushContext_m12268 (XsdParticleStateManager_t3419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C" void XsdParticleStateManager_PopContext_m12269 (XsdParticleStateManager_t3419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C" void XsdParticleStateManager_SetProcessContents_m12270 (XsdParticleStateManager_t3419 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C" XsdValidationState_t3421 * XsdParticleStateManager_Create_m12271 (XsdParticleStateManager_t3419 * __this, XmlSchemaObject_t3440 * ___xsobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C" XsdValidationState_t3421 * XsdParticleStateManager_MakeSequence_m12272 (XsdParticleStateManager_t3419 * __this, XsdValidationState_t3421 * ___head, XsdValidationState_t3421 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C" XsdElementValidationState_t3422 * XsdParticleStateManager_AddElement_m12273 (XsdParticleStateManager_t3419 * __this, XmlSchemaElement_t3417 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C" XsdSequenceValidationState_t3424 * XsdParticleStateManager_AddSequence_m12274 (XsdParticleStateManager_t3419 * __this, XmlSchemaSequence_t3423 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C" XsdChoiceValidationState_t3426 * XsdParticleStateManager_AddChoice_m12275 (XsdParticleStateManager_t3419 * __this, XmlSchemaChoice_t3425 * ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C" XsdAllValidationState_t3428 * XsdParticleStateManager_AddAll_m12276 (XsdParticleStateManager_t3419 * __this, XmlSchemaAll_t3427 * ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C" XsdAnyValidationState_t3430 * XsdParticleStateManager_AddAny_m12277 (XsdParticleStateManager_t3419 * __this, XmlSchemaAny_t3429 * ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C" XsdEmptyValidationState_t3432 * XsdParticleStateManager_AddEmpty_m12278 (XsdParticleStateManager_t3419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
