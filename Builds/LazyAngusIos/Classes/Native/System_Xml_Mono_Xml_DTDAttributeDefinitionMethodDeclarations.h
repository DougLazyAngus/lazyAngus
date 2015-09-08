#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3471;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3470;
// System.Collections.ArrayList
struct ArrayList_t713;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3444;
// Mono.Xml.DTDAttributeOccurenceType
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType.h"

// System.Void Mono.Xml.DTDAttributeDefinition::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttributeDefinition__ctor_m12572 (DTDAttributeDefinition_t3471 * __this, DTDObjectModel_t3444 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_Name()
extern "C" String_t* DTDAttributeDefinition_get_Name_m12573 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Name(System.String)
extern "C" void DTDAttributeDefinition_set_Name_m12574 (DTDAttributeDefinition_t3471 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::get_Datatype()
extern "C" XmlSchemaDatatype_t3470 * DTDAttributeDefinition_get_Datatype_m12575 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Datatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C" void DTDAttributeDefinition_set_Datatype_m12576 (DTDAttributeDefinition_t3471 * __this, XmlSchemaDatatype_t3470 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::get_OccurenceType()
extern "C" int32_t DTDAttributeDefinition_get_OccurenceType_m12577 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_OccurenceType(Mono.Xml.DTDAttributeOccurenceType)
extern "C" void DTDAttributeDefinition_set_OccurenceType_m12578 (DTDAttributeDefinition_t3471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedAttributeDeclaration()
extern "C" ArrayList_t713 * DTDAttributeDefinition_get_EnumeratedAttributeDeclaration_m12579 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedNotations()
extern "C" ArrayList_t713 * DTDAttributeDefinition_get_EnumeratedNotations_m12580 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_DefaultValue()
extern "C" String_t* DTDAttributeDefinition_get_DefaultValue_m12581 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_UnresolvedDefaultValue()
extern "C" String_t* DTDAttributeDefinition_get_UnresolvedDefaultValue_m12582 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_UnresolvedDefaultValue(System.String)
extern "C" void DTDAttributeDefinition_set_UnresolvedDefaultValue_m12583 (DTDAttributeDefinition_t3471 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::ComputeDefaultValue()
extern "C" String_t* DTDAttributeDefinition_ComputeDefaultValue_m12584 (DTDAttributeDefinition_t3471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
