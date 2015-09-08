#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t3457;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3472;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m12519 (DTDElementDeclarationCollection_t3457 * __this, DTDObjectModel_t3447 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::get_Item(System.String)
extern "C" DTDElementDeclaration_t3472 * DTDElementDeclarationCollection_get_Item_m12520 (DTDElementDeclarationCollection_t3457 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration Mono.Xml.DTDElementDeclarationCollection::Get(System.String)
extern "C" DTDElementDeclaration_t3472 * DTDElementDeclarationCollection_Get_m12521 (DTDElementDeclarationCollection_t3457 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m12522 (DTDElementDeclarationCollection_t3457 * __this, String_t* ___name, DTDElementDeclaration_t3472 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
