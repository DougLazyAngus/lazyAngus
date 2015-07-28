#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3134;
// System.String
struct String_t;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t3133;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;

// System.Void Mono.Xml.DTDElementDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclaration__ctor_m10292 (DTDElementDeclaration_t3134 * __this, DTDObjectModel_t3116 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementDeclaration::get_Name()
extern "C" String_t* DTDElementDeclaration_get_Name_m10293 (DTDElementDeclaration_t3134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_Name(System.String)
extern "C" void DTDElementDeclaration_set_Name_m10294 (DTDElementDeclaration_t3134 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsEmpty(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsEmpty_m10295 (DTDElementDeclaration_t3134 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsAny(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsAny_m10296 (DTDElementDeclaration_t3134 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsMixedContent(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsMixedContent_m10297 (DTDElementDeclaration_t3134 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel Mono.Xml.DTDElementDeclaration::get_ContentModel()
extern "C" DTDContentModel_t3133 * DTDElementDeclaration_get_ContentModel_m10298 (DTDElementDeclaration_t3134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
