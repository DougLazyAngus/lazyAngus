#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t1650;
struct UriScheme_t1650_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m8253 (UriScheme_t1650 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t1650_marshal(const UriScheme_t1650& unmarshaled, UriScheme_t1650_marshaled& marshaled);
void UriScheme_t1650_marshal_back(const UriScheme_t1650_marshaled& marshaled, UriScheme_t1650& unmarshaled);
void UriScheme_t1650_marshal_cleanup(UriScheme_t1650_marshaled& marshaled);
