#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t3452;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// System.String
struct String_t;

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDInvalidAutomata__ctor_m12450 (DTDInvalidAutomata_t3452 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C" DTDAutomata_t3445 * DTDInvalidAutomata_TryEndElement_m12451 (DTDInvalidAutomata_t3452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C" DTDAutomata_t3445 * DTDInvalidAutomata_TryStartElement_m12452 (DTDInvalidAutomata_t3452 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
