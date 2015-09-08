#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3458;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3475;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDNotationDeclarationCollection__ctor_m12529 (DTDNotationDeclarationCollection_t3458 * __this, DTDObjectModel_t3444 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
extern "C" DTDNotationDeclaration_t3475 * DTDNotationDeclarationCollection_get_Item_m12530 (DTDNotationDeclarationCollection_t3458 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C" void DTDNotationDeclarationCollection_Add_m12531 (DTDNotationDeclarationCollection_t3458 * __this, String_t* ___name, DTDNotationDeclaration_t3475 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
