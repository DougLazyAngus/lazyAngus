#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t3451;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAnyAutomata__ctor_m12446 (DTDAnyAutomata_t3451 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C" DTDAutomata_t3445 * DTDAnyAutomata_TryEndElement_m12447 (DTDAnyAutomata_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3445 * DTDAnyAutomata_TryStartElement_m12448 (DTDAnyAutomata_t3451 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C" bool DTDAnyAutomata_get_Emptiable_m12449 (DTDAnyAutomata_t3451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
