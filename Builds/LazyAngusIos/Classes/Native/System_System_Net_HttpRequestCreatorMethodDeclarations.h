#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t1550;
// System.Net.WebRequest
struct WebRequest_t1531;
// System.Uri
struct Uri_t595;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m7559 (HttpRequestCreator_t1550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1531 * HttpRequestCreator_Create_m7560 (HttpRequestCreator_t1550 * __this, Uri_t595 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
