#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t3460;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C" void DTDOneOrMoreAutomata__ctor_m12509 (DTDOneOrMoreAutomata_t3460 * __this, DTDObjectModel_t3454 * ___root, DTDAutomata_t3456 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3456 * DTDOneOrMoreAutomata_TryStartElement_m12510 (DTDOneOrMoreAutomata_t3460 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C" DTDAutomata_t3456 * DTDOneOrMoreAutomata_TryEndElement_m12511 (DTDOneOrMoreAutomata_t3460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
