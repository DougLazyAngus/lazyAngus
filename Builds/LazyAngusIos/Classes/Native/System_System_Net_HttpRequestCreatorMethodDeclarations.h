#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1558;
// System.Net.WebRequest
struct WebRequest_t1539;
// System.Uri
struct Uri_t603;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m7597 (HttpRequestCreator_t1558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1539 * HttpRequestCreator_Create_m7598 (HttpRequestCreator_t1558 * __this, Uri_t603 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
