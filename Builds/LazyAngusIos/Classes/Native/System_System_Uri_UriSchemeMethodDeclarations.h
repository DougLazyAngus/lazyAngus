#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t4131;
struct UriScheme_t4131_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m14711 (UriScheme_t4131 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t4131_marshal(const UriScheme_t4131& unmarshaled, UriScheme_t4131_marshaled& marshaled);
void UriScheme_t4131_marshal_back(const UriScheme_t4131_marshaled& marshaled, UriScheme_t4131& unmarshaled);
void UriScheme_t4131_marshal_cleanup(UriScheme_t4131_marshaled& marshaled);
