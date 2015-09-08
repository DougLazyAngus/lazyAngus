#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t3456;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3449;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDInvalidAutomata__ctor_m12463 (DTDInvalidAutomata_t3456 * __this, DTDObjectModel_t3447 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C" DTDAutomata_t3449 * DTDInvalidAutomata_TryEndElement_m12464 (DTDInvalidAutomata_t3456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3449 * DTDInvalidAutomata_TryStartElement_m12465 (DTDInvalidAutomata_t3456 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
