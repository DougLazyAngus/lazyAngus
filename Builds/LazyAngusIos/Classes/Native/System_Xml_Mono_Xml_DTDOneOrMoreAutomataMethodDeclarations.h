#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t3449;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C" void DTDOneOrMoreAutomata__ctor_m12439 (DTDOneOrMoreAutomata_t3449 * __this, DTDObjectModel_t3443 * ___root, DTDAutomata_t3445 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3445 * DTDOneOrMoreAutomata_TryStartElement_m12440 (DTDOneOrMoreAutomata_t3449 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C" DTDAutomata_t3445 * DTDOneOrMoreAutomata_TryEndElement_m12441 (DTDOneOrMoreAutomata_t3449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
