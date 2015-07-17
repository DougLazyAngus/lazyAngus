#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t1573;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t1593;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1568;

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDParameterEntityDeclarationCollection__ctor_m7720 (DTDParameterEntityDeclarationCollection_t1573 * __this, DTDObjectModel_t1568 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDParameterEntityDeclaration_t1593 * DTDParameterEntityDeclarationCollection_get_Item_m7721 (DTDParameterEntityDeclarationCollection_t1573 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void DTDParameterEntityDeclarationCollection_Add_m7722 (DTDParameterEntityDeclarationCollection_t1573 * __this, String_t* ___name, DTDParameterEntityDeclaration_t1593 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
