#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2038;
// System.Net.WebRequest
struct WebRequest_t1704;
// System.Uri
struct Uri_t656;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m10420 (HttpRequestCreator_t2038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1704 * HttpRequestCreator_Create_m10421 (HttpRequestCreator_t2038 * __this, Uri_t656 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
