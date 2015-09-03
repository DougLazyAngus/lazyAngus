#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3456;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3473;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m12513 (DTDEntityDeclarationCollection_t3456 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t3473 * DTDEntityDeclarationCollection_get_Item_m12514 (DTDEntityDeclarationCollection_t3456 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m12515 (DTDEntityDeclarationCollection_t3456 * __this, String_t* ___name, DTDEntityDeclaration_t3473 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
