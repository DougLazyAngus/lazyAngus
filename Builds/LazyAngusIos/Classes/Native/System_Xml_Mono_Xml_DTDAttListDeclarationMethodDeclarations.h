#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3136;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3135;
// System.Collections.IList
struct IList_t631;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclaration__ctor_m10304 (DTDAttListDeclaration_t3136 * __this, DTDObjectModel_t3116 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C" String_t* DTDAttListDeclaration_get_Name_m10305 (DTDAttListDeclaration_t3136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C" void DTDAttListDeclaration_set_Name_m10306 (DTDAttListDeclaration_t3136 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C" DTDAttributeDefinition_t3135 * DTDAttListDeclaration_get_Item_m10307 (DTDAttListDeclaration_t3136 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C" DTDAttributeDefinition_t3135 * DTDAttListDeclaration_get_Item_m10308 (DTDAttListDeclaration_t3136 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C" DTDAttributeDefinition_t3135 * DTDAttListDeclaration_Get_m10309 (DTDAttListDeclaration_t3136 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C" DTDAttributeDefinition_t3135 * DTDAttListDeclaration_Get_m10310 (DTDAttListDeclaration_t3136 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C" Object_t * DTDAttListDeclaration_get_Definitions_m10311 (DTDAttListDeclaration_t3136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C" void DTDAttListDeclaration_Add_m10312 (DTDAttListDeclaration_t3136 * __this, DTDAttributeDefinition_t3135 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
