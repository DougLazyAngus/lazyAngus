#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t3988;
// System.Net.WebRequest
struct WebRequest_t3253;
// System.Uri
struct Uri_t707;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13566 (FileWebRequestCreator_t3988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3253 * FileWebRequestCreator_Create_m13567 (FileWebRequestCreator_t3988 * __this, Uri_t707 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
