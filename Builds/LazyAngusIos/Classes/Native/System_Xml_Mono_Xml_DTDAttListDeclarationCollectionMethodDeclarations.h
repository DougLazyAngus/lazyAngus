#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1976;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1993;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclarationCollection__ctor_m9253 (DTDAttListDeclarationCollection_t1976 * __this, DTDObjectModel_t1973 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C" DTDAttListDeclaration_t1993 * DTDAttListDeclarationCollection_get_Item_m9254 (DTDAttListDeclarationCollection_t1976 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDAttListDeclarationCollection_Add_m9255 (DTDAttListDeclarationCollection_t1976 * __this, String_t* ___name, DTDAttListDeclaration_t1993 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
