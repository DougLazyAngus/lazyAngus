#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t3979;
// System.Net.WebRequest
struct WebRequest_t3244;
// System.Uri
struct Uri_t700;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13503 (FileWebRequestCreator_t3979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3244 * FileWebRequestCreator_Create_m13504 (FileWebRequestCreator_t3979 * __this, Uri_t700 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
