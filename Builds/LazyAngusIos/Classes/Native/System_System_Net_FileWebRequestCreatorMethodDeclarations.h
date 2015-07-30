#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t3986;
// System.Net.WebRequest
struct WebRequest_t3251;
// System.Uri
struct Uri_t707;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13550 (FileWebRequestCreator_t3986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3251 * FileWebRequestCreator_Create_m13551 (FileWebRequestCreator_t3986 * __this, Uri_t707 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
