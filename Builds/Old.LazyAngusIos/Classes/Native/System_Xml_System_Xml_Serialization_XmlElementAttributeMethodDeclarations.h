﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t1994;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String)
extern "C" void XmlElementAttribute__ctor_m9378 (XmlElementAttribute_t1994 * __this, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String,System.Type)
extern "C" void XmlElementAttribute__ctor_m9379 (XmlElementAttribute_t1994 * __this, String_t* ___elementName, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::set_Type(System.Type)
extern "C" void XmlElementAttribute_set_Type_m9380 (XmlElementAttribute_t1994 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;