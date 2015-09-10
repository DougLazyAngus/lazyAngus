#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t3455;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3458;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3456;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t3459;

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAutomataFactory__ctor_m12489 (DTDAutomataFactory_t3455 * __this, DTDObjectModel_t3454 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDChoiceAutomata_t3458 * DTDAutomataFactory_Choice_m12490 (DTDAutomataFactory_t3455 * __this, DTDAutomata_t3456 * ___left, DTDAutomata_t3456 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C" DTDSequenceAutomata_t3459 * DTDAutomataFactory_Sequence_m12491 (DTDAutomataFactory_t3455 * __this, DTDAutomata_t3456 * ___left, DTDAutomata_t3456 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
