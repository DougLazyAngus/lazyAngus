#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1548;
// System.Net.WebRequest
struct WebRequest_t1529;
// System.Uri
struct Uri_t593;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m7534 (HttpRequestCreator_t1548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1529 * HttpRequestCreator_Create_m7535 (HttpRequestCreator_t1548 * __this, Uri_t593 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
