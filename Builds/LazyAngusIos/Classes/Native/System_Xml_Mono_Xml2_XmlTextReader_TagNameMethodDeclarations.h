#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader/TagName
struct TagName_t3217;
struct TagName_t3217_marshaled;
// System.String
struct String_t;

// System.Void Mono.Xml2.XmlTextReader/TagName::.ctor(System.String,System.String,System.String)
extern "C" void TagName__ctor_m10944 (TagName_t3217 * __this, String_t* ___n, String_t* ___l, String_t* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TagName_t3217_marshal(const TagName_t3217& unmarshaled, TagName_t3217_marshaled& marshaled);
void TagName_t3217_marshal_back(const TagName_t3217_marshaled& marshaled, TagName_t3217& unmarshaled);
void TagName_t3217_marshal_cleanup(TagName_t3217_marshaled& marshaled);
