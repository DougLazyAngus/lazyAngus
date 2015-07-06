#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1507;
// System.Net.WebRequest
struct WebRequest_t1506;
// System.Uri
struct Uri_t574;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m7248 (FileWebRequestCreator_t1507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1506 * FileWebRequestCreator_Create_m7249 (FileWebRequestCreator_t1507 * __this, Uri_t574 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
