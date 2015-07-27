#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t2168;
struct UriScheme_t2168_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m11414 (UriScheme_t2168 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t2168_marshal(const UriScheme_t2168& unmarshaled, UriScheme_t2168_marshaled& marshaled);
void UriScheme_t2168_marshal_back(const UriScheme_t2168_marshaled& marshaled, UriScheme_t2168& unmarshaled);
void UriScheme_t2168_marshal_cleanup(UriScheme_t2168_marshaled& marshaled);
