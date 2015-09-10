#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.CodeIdentifier
struct CodeIdentifier_t3713;
// System.String
struct String_t;

// System.String System.Xml.Serialization.CodeIdentifier::MakePascal(System.String)
extern "C" String_t* CodeIdentifier_MakePascal_m14749 (Object_t * __this /* static, unused */, String_t* ___identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.CodeIdentifier::MakeValid(System.String)
extern "C" String_t* CodeIdentifier_MakeValid_m14750 (Object_t * __this /* static, unused */, String_t* ___identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
