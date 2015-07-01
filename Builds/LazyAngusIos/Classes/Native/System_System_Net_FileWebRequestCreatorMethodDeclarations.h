#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1485;
// System.Net.WebRequest
struct WebRequest_t1484;
// System.Uri
struct Uri_t550;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m7100 (FileWebRequestCreator_t1485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1484 * FileWebRequestCreator_Create_m7101 (FileWebRequestCreator_t1485 * __this, Uri_t550 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
