#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4001;
// System.Net.WebRequest
struct WebRequest_t3251;
// System.Uri
struct Uri_t707;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13681 (HttpRequestCreator_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3251 * HttpRequestCreator_Create_m13682 (HttpRequestCreator_t4001 * __this, Uri_t707 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
