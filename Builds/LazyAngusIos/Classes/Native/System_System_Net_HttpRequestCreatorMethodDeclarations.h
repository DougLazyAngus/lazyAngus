#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1503;
// System.Net.WebRequest
struct WebRequest_t1484;
// System.Uri
struct Uri_t550;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m7231 (HttpRequestCreator_t1503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1484 * HttpRequestCreator_Create_m7232 (HttpRequestCreator_t1503 * __this, Uri_t550 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
