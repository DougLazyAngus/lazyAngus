#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t3993;
// System.Net.WebRequest
struct WebRequest_t3243;
// System.Uri
struct Uri_t699;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m13634 (HttpRequestCreator_t3993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3243 * HttpRequestCreator_Create_m13635 (HttpRequestCreator_t3993 * __this, Uri_t699 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
