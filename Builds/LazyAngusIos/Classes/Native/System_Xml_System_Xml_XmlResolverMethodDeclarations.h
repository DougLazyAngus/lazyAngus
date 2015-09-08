#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlResolver
struct XmlResolver_t3437;
// System.Object
struct Object_t;
// System.Uri
struct Uri_t775;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void System.Xml.XmlResolver::.ctor()
extern "C" void XmlResolver__ctor_m13313 (XmlResolver_t3437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlResolver::GetEntity(System.Uri,System.String,System.Type)
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" Uri_t775 * XmlResolver_ResolveUri_m13314 (XmlResolver_t3437 * __this, Uri_t775 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C" String_t* XmlResolver_EscapeRelativeUriBody_m13315 (XmlResolver_t3437 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
