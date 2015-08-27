#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4051;
// System.Net.WebRequest
struct WebRequest_t3302;
// System.Uri
struct Uri_t758;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13977 (HttpRequestCreator_t4051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3302 * HttpRequestCreator_Create_m13978 (HttpRequestCreator_t4051 * __this, Uri_t758 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
