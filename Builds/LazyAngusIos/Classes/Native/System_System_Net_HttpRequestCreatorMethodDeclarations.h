#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4005;
// System.Net.WebRequest
struct WebRequest_t3255;
// System.Uri
struct Uri_t709;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13709 (HttpRequestCreator_t4005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3255 * HttpRequestCreator_Create_m13710 (HttpRequestCreator_t4005 * __this, Uri_t709 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
