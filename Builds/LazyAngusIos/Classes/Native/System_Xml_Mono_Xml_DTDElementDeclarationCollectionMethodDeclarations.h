#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t1975;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t1991;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m9251 (DTDElementDeclarationCollection_t1975 * __this, DTDObjectModel_t1973 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m9252 (DTDElementDeclarationCollection_t1975 * __this, String_t* ___name, DTDElementDeclaration_t1991 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
