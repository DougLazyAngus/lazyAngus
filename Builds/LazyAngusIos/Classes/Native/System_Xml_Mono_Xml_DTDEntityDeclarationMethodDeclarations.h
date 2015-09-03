#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3473;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.Collections.ArrayList
struct ArrayList_t712;

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclaration__ctor_m12597 (DTDEntityDeclaration_t3473 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C" String_t* DTDEntityDeclaration_get_NotationName_m12598 (DTDEntityDeclaration_t3473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C" void DTDEntityDeclaration_set_NotationName_m12599 (DTDEntityDeclaration_t3473 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C" bool DTDEntityDeclaration_get_HasExternalReference_m12600 (DTDEntityDeclaration_t3473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C" String_t* DTDEntityDeclaration_get_EntityValue_m12601 (DTDEntityDeclaration_t3473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C" void DTDEntityDeclaration_ScanEntityValue_m12602 (DTDEntityDeclaration_t3473 * __this, ArrayList_t712 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
