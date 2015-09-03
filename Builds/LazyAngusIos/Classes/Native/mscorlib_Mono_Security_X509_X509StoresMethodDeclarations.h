#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Stores
struct X509Stores_t4820;
// Mono.Security.X509.X509Store
struct X509Store_t4819;
// System.String
struct String_t;

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" void X509Stores__ctor_m19877 (X509Stores_t4820 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" X509Store_t4819 * X509Stores_get_TrustedRoot_m19878 (X509Stores_t4820 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
