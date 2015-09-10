#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t3468;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t3485;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDNotationDeclarationCollection__ctor_m12586 (DTDNotationDeclarationCollection_t3468 * __this, DTDObjectModel_t3454 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
extern "C" DTDNotationDeclaration_t3485 * DTDNotationDeclarationCollection_get_Item_m12587 (DTDNotationDeclarationCollection_t3468 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C" void DTDNotationDeclarationCollection_Add_m12588 (DTDNotationDeclarationCollection_t3468 * __this, String_t* ___name, DTDNotationDeclaration_t3485 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
