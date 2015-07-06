#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1525;
// System.Net.WebRequest
struct WebRequest_t1506;
// System.Uri
struct Uri_t574;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m7379 (HttpRequestCreator_t1525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1506 * HttpRequestCreator_Create_m7380 (HttpRequestCreator_t1525 * __this, Uri_t574 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
