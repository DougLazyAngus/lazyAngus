#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4372;
// System.Net.WebRequest
struct WebRequest_t3280;
// System.Uri
struct Uri_t771;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m16623 (HttpRequestCreator_t4372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3280 * HttpRequestCreator_Create_m16624 (HttpRequestCreator_t4372 * __this, Uri_t771 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
