#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3196;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3174;
// System.Collections.ArrayList
struct ArrayList_t699;

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclaration__ctor_m10672 (DTDEntityDeclaration_t3196 * __this, DTDObjectModel_t3174 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C" String_t* DTDEntityDeclaration_get_NotationName_m10673 (DTDEntityDeclaration_t3196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C" void DTDEntityDeclaration_set_NotationName_m10674 (DTDEntityDeclaration_t3196 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C" bool DTDEntityDeclaration_get_HasExternalReference_m10675 (DTDEntityDeclaration_t3196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C" String_t* DTDEntityDeclaration_get_EntityValue_m10676 (DTDEntityDeclaration_t3196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C" void DTDEntityDeclaration_ScanEntityValue_m10677 (DTDEntityDeclaration_t3196 * __this, ArrayList_t699 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
