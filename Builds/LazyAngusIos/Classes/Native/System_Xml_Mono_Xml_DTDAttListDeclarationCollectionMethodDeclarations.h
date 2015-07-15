#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t2001;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t2018;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1998;

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclarationCollection__ctor_m9433 (DTDAttListDeclarationCollection_t2001 * __this, DTDObjectModel_t1998 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C" DTDAttListDeclaration_t2018 * DTDAttListDeclarationCollection_get_Item_m9434 (DTDAttListDeclarationCollection_t2001 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDAttListDeclarationCollection_Add_m9435 (DTDAttListDeclarationCollection_t2001 * __this, String_t* ___name, DTDAttListDeclaration_t2018 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
