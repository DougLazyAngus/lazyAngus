#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3179;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3173;
// System.String
struct String_t;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3196;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDNotationDeclarationCollection__ctor_m10589 (DTDNotationDeclarationCollection_t3179 * __this, DTDObjectModel_t3173 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C" void DTDNotationDeclarationCollection_Add_m10590 (DTDNotationDeclarationCollection_t3179 * __this, String_t* ___name, DTDNotationDeclaration_t3196 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
