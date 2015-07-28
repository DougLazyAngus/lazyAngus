#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t3978;
// System.Net.WebRequest
struct WebRequest_t3243;
// System.Uri
struct Uri_t699;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13503 (FileWebRequestCreator_t3978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3243 * FileWebRequestCreator_Create_m13504 (FileWebRequestCreator_t3978 * __this, Uri_t699 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
