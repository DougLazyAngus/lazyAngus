#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2037;
// System.Net.WebRequest
struct WebRequest_t1703;
// System.Uri
struct Uri_t655;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m10413 (HttpRequestCreator_t2037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1703 * HttpRequestCreator_Create_m10414 (HttpRequestCreator_t2037 * __this, Uri_t655 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
