#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1530;
// System.Net.WebRequest
struct WebRequest_t1529;
// System.Uri
struct Uri_t593;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m7403 (FileWebRequestCreator_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1529 * FileWebRequestCreator_Create_m7404 (FileWebRequestCreator_t1530 * __this, Uri_t593 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
