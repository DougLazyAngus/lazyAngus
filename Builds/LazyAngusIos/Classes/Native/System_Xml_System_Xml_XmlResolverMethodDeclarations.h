#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t782;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.XmlResolver::.ctor()
extern "C" void XmlResolver__ctor_m13370 (XmlResolver_t3444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type)
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" Uri_t782 * XmlResolver_ResolveUri_m13371 (XmlResolver_t3444 * __this, Uri_t782 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C" String_t* XmlResolver_EscapeRelativeUriBody_m13372 (XmlResolver_t3444 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
