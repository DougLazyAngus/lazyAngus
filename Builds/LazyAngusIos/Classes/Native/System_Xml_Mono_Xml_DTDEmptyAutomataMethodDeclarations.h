#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEmptyAutomata
struct DTDEmptyAutomata_t3451;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3446;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDEmptyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEmptyAutomata__ctor_m12455 (DTDEmptyAutomata_t3451 * __this, DTDObjectModel_t3444 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryEndElement()
extern "C" DTDAutomata_t3446 * DTDEmptyAutomata_TryEndElement_m12456 (DTDEmptyAutomata_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDEmptyAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3446 * DTDEmptyAutomata_TryStartElement_m12457 (DTDEmptyAutomata_t3451 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEmptyAutomata::get_Emptiable()
extern "C" bool DTDEmptyAutomata_get_Emptiable_m12458 (DTDEmptyAutomata_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
