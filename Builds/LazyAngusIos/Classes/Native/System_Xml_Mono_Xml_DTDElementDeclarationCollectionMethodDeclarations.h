#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3453;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3468;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m12506 (DTDElementDeclarationCollection_t3453 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C" DTDElementDeclaration_t3468 * DTDElementDeclarationCollection_get_Item_m12507 (DTDElementDeclarationCollection_t3453 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C" DTDElementDeclaration_t3468 * DTDElementDeclarationCollection_Get_m12508 (DTDElementDeclarationCollection_t3453 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m12509 (DTDElementDeclarationCollection_t3453 * __this, String_t* ___name, DTDElementDeclaration_t3468 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
