#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t4352;
// System.Net.WebRequest
struct WebRequest_t3280;
// System.Uri
struct Uri_t771;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m16468 (FileWebRequestCreator_t4352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3280 * FileWebRequestCreator_Create_m16469 (FileWebRequestCreator_t4352 * __this, Uri_t771 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
