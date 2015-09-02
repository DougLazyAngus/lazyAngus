#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3196;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3190;
// System.String
struct String_t;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3213;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDNotationDeclarationCollection__ctor_m10741 (DTDNotationDeclarationCollection_t3196 * __this, DTDObjectModel_t3190 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C" void DTDNotationDeclarationCollection_Add_m10742 (DTDNotationDeclarationCollection_t3196 * __this, String_t* ___name, DTDNotationDeclaration_t3213 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
