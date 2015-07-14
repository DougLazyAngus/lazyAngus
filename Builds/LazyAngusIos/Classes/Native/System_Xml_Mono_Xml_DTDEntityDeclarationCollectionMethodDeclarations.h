#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t2001;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t2018;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1996;

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityDeclarationCollection__ctor_m9411 (DTDEntityDeclarationCollection_t2001 * __this, DTDObjectModel_t1996 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDEntityDeclaration_t2018 * DTDEntityDeclarationCollection_get_Item_m9412 (DTDEntityDeclarationCollection_t2001 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDEntityDeclarationCollection_Add_m9413 (DTDEntityDeclarationCollection_t2001 * __this, String_t* ___name, DTDEntityDeclaration_t2018 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
