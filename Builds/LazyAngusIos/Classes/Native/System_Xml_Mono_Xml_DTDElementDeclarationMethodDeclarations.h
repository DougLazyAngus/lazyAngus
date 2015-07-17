#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t1587;
// System.String
struct String_t;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t1586;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1568;

// System.Void Mono.Xml.DTDElementDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclaration__ctor_m7666 (DTDElementDeclaration_t1587 * __this, DTDObjectModel_t1568 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementDeclaration::get_Name()
extern "C" String_t* DTDElementDeclaration_get_Name_m7667 (DTDElementDeclaration_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_Name(System.String)
extern "C" void DTDElementDeclaration_set_Name_m7668 (DTDElementDeclaration_t1587 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsEmpty(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsEmpty_m7669 (DTDElementDeclaration_t1587 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsAny(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsAny_m7670 (DTDElementDeclaration_t1587 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsMixedContent(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsMixedContent_m7671 (DTDElementDeclaration_t1587 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel Mono.Xml.DTDElementDeclaration::get_ContentModel()
extern "C" DTDContentModel_t1586 * DTDElementDeclaration_get_ContentModel_m7672 (DTDElementDeclaration_t1587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
