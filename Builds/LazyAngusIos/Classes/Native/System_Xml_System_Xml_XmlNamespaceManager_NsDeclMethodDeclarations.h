#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNamespaceManager/NsDecl
struct NsDecl_t2013;
struct NsDecl_t2013_marshaled;

void NsDecl_t2013_marshal(const NsDecl_t2013& unmarshaled, NsDecl_t2013_marshaled& marshaled);
void NsDecl_t2013_marshal_back(const NsDecl_t2013_marshaled& marshaled, NsDecl_t2013& unmarshaled);
void NsDecl_t2013_marshal_cleanup(NsDecl_t2013_marshaled& marshaled);
