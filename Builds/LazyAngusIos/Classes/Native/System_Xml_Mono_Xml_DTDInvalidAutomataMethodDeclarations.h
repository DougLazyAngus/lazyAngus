#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t3463;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDInvalidAutomata__ctor_m12520 (DTDInvalidAutomata_t3463 * __this, DTDObjectModel_t3454 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C" DTDAutomata_t3456 * DTDInvalidAutomata_TryEndElement_m12521 (DTDInvalidAutomata_t3463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3456 * DTDInvalidAutomata_TryStartElement_m12522 (DTDInvalidAutomata_t3463 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
