#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4050;
// System.Net.WebRequest
struct WebRequest_t3301;
// System.Uri
struct Uri_t757;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13955 (HttpRequestCreator_t4050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3301 * HttpRequestCreator_Create_m13956 (HttpRequestCreator_t4050 * __this, Uri_t757 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
