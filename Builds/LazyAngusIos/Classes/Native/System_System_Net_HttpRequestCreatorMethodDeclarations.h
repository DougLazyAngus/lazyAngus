#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2036;
// System.Net.WebRequest
struct WebRequest_t1702;
// System.Uri
struct Uri_t654;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m10405 (HttpRequestCreator_t2036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1702 * HttpRequestCreator_Create_m10406 (HttpRequestCreator_t2036 * __this, Uri_t654 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
