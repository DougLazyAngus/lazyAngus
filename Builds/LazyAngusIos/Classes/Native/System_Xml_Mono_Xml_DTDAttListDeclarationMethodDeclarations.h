#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1993;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t1992;
// System.Collections.IList
struct IList_t513;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclaration__ctor_m9294 (DTDAttListDeclaration_t1993 * __this, DTDObjectModel_t1973 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C" String_t* DTDAttListDeclaration_get_Name_m9295 (DTDAttListDeclaration_t1993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C" void DTDAttListDeclaration_set_Name_m9296 (DTDAttListDeclaration_t1993 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C" DTDAttributeDefinition_t1992 * DTDAttListDeclaration_get_Item_m9297 (DTDAttListDeclaration_t1993 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C" DTDAttributeDefinition_t1992 * DTDAttListDeclaration_get_Item_m9298 (DTDAttListDeclaration_t1993 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C" DTDAttributeDefinition_t1992 * DTDAttListDeclaration_Get_m9299 (DTDAttListDeclaration_t1993 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C" DTDAttributeDefinition_t1992 * DTDAttListDeclaration_Get_m9300 (DTDAttListDeclaration_t1993 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C" Object_t * DTDAttListDeclaration_get_Definitions_m9301 (DTDAttListDeclaration_t1993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C" void DTDAttListDeclaration_Add_m9302 (DTDAttListDeclaration_t1993 * __this, DTDAttributeDefinition_t1992 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
