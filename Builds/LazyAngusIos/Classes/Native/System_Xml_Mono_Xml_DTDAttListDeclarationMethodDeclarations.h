#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3194;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3193;
// System.Collections.IList
struct IList_t687;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3174;

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclaration__ctor_m10647 (DTDAttListDeclaration_t3194 * __this, DTDObjectModel_t3174 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C" String_t* DTDAttListDeclaration_get_Name_m10648 (DTDAttListDeclaration_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C" void DTDAttListDeclaration_set_Name_m10649 (DTDAttListDeclaration_t3194 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C" DTDAttributeDefinition_t3193 * DTDAttListDeclaration_get_Item_m10650 (DTDAttListDeclaration_t3194 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C" DTDAttributeDefinition_t3193 * DTDAttListDeclaration_get_Item_m10651 (DTDAttListDeclaration_t3194 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C" DTDAttributeDefinition_t3193 * DTDAttListDeclaration_Get_m10652 (DTDAttListDeclaration_t3194 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C" DTDAttributeDefinition_t3193 * DTDAttListDeclaration_Get_m10653 (DTDAttListDeclaration_t3194 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C" Object_t * DTDAttListDeclaration_get_Definitions_m10654 (DTDAttListDeclaration_t3194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C" void DTDAttListDeclaration_Add_m10655 (DTDAttListDeclaration_t3194 * __this, DTDAttributeDefinition_t3193 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
