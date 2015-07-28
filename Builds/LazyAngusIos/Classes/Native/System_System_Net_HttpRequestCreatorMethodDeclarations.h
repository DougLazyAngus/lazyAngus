#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t3994;
// System.Net.WebRequest
struct WebRequest_t3244;
// System.Uri
struct Uri_t700;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13634 (HttpRequestCreator_t3994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3244 * HttpRequestCreator_Create_m13635 (HttpRequestCreator_t3994 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
