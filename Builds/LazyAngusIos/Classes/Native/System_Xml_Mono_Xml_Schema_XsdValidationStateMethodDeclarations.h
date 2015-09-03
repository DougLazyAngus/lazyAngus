#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t3419;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// System.String
struct String_t;

// System.Void Mono.Xml.Schema.XsdValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C" void XsdValidationState__ctor_m12266 (XsdValidationState_t3420 * __this, XsdParticleStateManager_t3418 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::.cctor()
extern "C" void XsdValidationState__cctor_m12267 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::get_Invalid()
extern "C" XsdInvalidValidationState_t3419 * XsdValidationState_get_Invalid_m12268 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationState::EvaluateStartElement(System.String,System.String)
// System.Boolean Mono.Xml.Schema.XsdValidationState::EvaluateEndElement()
// System.Boolean Mono.Xml.Schema.XsdValidationState::EvaluateIsEmptiable()
// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::get_Manager()
extern "C" XsdParticleStateManager_t3418 * XsdValidationState_get_Manager_m12269 (XsdValidationState_t3420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_Occured()
extern "C" int32_t XsdValidationState_get_Occured_m12270 (XsdValidationState_t3420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_OccuredInternal()
extern "C" int32_t XsdValidationState_get_OccuredInternal_m12271 (XsdValidationState_t3420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::set_OccuredInternal(System.Int32)
extern "C" void XsdValidationState_set_OccuredInternal_m12272 (XsdValidationState_t3420 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
