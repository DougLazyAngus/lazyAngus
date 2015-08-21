#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4048;
// System.Net.WebRequest
struct WebRequest_t3299;
// System.Uri
struct Uri_t755;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13944 (HttpRequestCreator_t4048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3299 * HttpRequestCreator_Create_m13945 (HttpRequestCreator_t4048 * __this, Uri_t755 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
