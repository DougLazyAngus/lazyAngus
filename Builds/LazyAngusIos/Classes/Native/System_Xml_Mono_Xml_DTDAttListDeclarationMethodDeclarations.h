#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3143;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3142;
// System.Collections.IList
struct IList_t638;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3123;

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclaration__ctor_m10351 (DTDAttListDeclaration_t3143 * __this, DTDObjectModel_t3123 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C" String_t* DTDAttListDeclaration_get_Name_m10352 (DTDAttListDeclaration_t3143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C" void DTDAttListDeclaration_set_Name_m10353 (DTDAttListDeclaration_t3143 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C" DTDAttributeDefinition_t3142 * DTDAttListDeclaration_get_Item_m10354 (DTDAttListDeclaration_t3143 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C" DTDAttributeDefinition_t3142 * DTDAttListDeclaration_get_Item_m10355 (DTDAttListDeclaration_t3143 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C" DTDAttributeDefinition_t3142 * DTDAttListDeclaration_Get_m10356 (DTDAttListDeclaration_t3143 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C" DTDAttributeDefinition_t3142 * DTDAttListDeclaration_Get_m10357 (DTDAttListDeclaration_t3143 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C" Object_t * DTDAttListDeclaration_get_Definitions_m10358 (DTDAttListDeclaration_t3143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C" void DTDAttListDeclaration_Add_m10359 (DTDAttListDeclaration_t3143 * __this, DTDAttributeDefinition_t3142 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
