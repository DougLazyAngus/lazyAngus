#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t3990;
// System.Net.WebRequest
struct WebRequest_t3255;
// System.Uri
struct Uri_t709;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13578 (FileWebRequestCreator_t3990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3255 * FileWebRequestCreator_Create_m13579 (FileWebRequestCreator_t3990 * __this, Uri_t709 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
