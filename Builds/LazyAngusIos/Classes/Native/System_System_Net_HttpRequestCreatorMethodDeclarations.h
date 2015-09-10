#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4383;
// System.Net.WebRequest
struct WebRequest_t3291;
// System.Uri
struct Uri_t782;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m16693 (HttpRequestCreator_t4383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3291 * HttpRequestCreator_Create_m16694 (HttpRequestCreator_t4383 * __this, Uri_t782 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
