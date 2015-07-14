#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1999;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t2016;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1996;

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclarationCollection__ctor_m9408 (DTDAttListDeclarationCollection_t1999 * __this, DTDObjectModel_t1996 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C" DTDAttListDeclaration_t2016 * DTDAttListDeclarationCollection_get_Item_m9409 (DTDAttListDeclarationCollection_t1999 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDAttListDeclarationCollection_Add_m9410 (DTDAttListDeclarationCollection_t1999 * __this, String_t* ___name, DTDAttListDeclaration_t2016 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
