﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Uri/UriScheme
struct UriScheme_t4790;
struct UriScheme_t4790_marshaled;
// System.String
struct String_t;

// System.Void Mono.Security.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m19560 (UriScheme_t4790 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t4790_marshal(const UriScheme_t4790& unmarshaled, UriScheme_t4790_marshaled& marshaled);
void UriScheme_t4790_marshal_back(const UriScheme_t4790_marshaled& marshaled, UriScheme_t4790& unmarshaled);
void UriScheme_t4790_marshal_cleanup(UriScheme_t4790_marshaled& marshaled);