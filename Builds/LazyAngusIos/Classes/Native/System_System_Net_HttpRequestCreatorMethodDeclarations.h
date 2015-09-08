#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4373;
// System.Net.WebRequest
struct WebRequest_t3281;
// System.Uri
struct Uri_t772;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m16636 (HttpRequestCreator_t4373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3281 * HttpRequestCreator_Create_m16637 (HttpRequestCreator_t4373 * __this, Uri_t772 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
