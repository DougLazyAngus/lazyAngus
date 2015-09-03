#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3470;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3469;
// System.Collections.ArrayList
struct ArrayList_t712;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// Mono.Xml.DTDAttributeOccurenceType
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType.h"

// System.Void Mono.Xml.DTDAttributeDefinition::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttributeDefinition__ctor_m12559 (DTDAttributeDefinition_t3470 * __this, DTDObjectModel_t3443 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_Name()
extern "C" String_t* DTDAttributeDefinition_get_Name_m12560 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Name(System.String)
extern "C" void DTDAttributeDefinition_set_Name_m12561 (DTDAttributeDefinition_t3470 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::get_Datatype()
extern "C" XmlSchemaDatatype_t3469 * DTDAttributeDefinition_get_Datatype_m12562 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Datatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C" void DTDAttributeDefinition_set_Datatype_m12563 (DTDAttributeDefinition_t3470 * __this, XmlSchemaDatatype_t3469 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::get_OccurenceType()
extern "C" int32_t DTDAttributeDefinition_get_OccurenceType_m12564 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_OccurenceType(Mono.Xml.DTDAttributeOccurenceType)
extern "C" void DTDAttributeDefinition_set_OccurenceType_m12565 (DTDAttributeDefinition_t3470 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedAttributeDeclaration()
extern "C" ArrayList_t712 * DTDAttributeDefinition_get_EnumeratedAttributeDeclaration_m12566 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedNotations()
extern "C" ArrayList_t712 * DTDAttributeDefinition_get_EnumeratedNotations_m12567 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_DefaultValue()
extern "C" String_t* DTDAttributeDefinition_get_DefaultValue_m12568 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_UnresolvedDefaultValue()
extern "C" String_t* DTDAttributeDefinition_get_UnresolvedDefaultValue_m12569 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_UnresolvedDefaultValue(System.String)
extern "C" void DTDAttributeDefinition_set_UnresolvedDefaultValue_m12570 (DTDAttributeDefinition_t3470 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::ComputeDefaultValue()
extern "C" String_t* DTDAttributeDefinition_ComputeDefaultValue_m12571 (DTDAttributeDefinition_t3470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
