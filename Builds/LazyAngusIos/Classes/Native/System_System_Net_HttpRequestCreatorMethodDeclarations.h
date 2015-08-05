#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4004;
// System.Net.WebRequest
struct WebRequest_t3254;
// System.Uri
struct Uri_t708;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13704 (HttpRequestCreator_t4004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3254 * HttpRequestCreator_Create_m13705 (HttpRequestCreator_t4004 * __this, Uri_t708 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
