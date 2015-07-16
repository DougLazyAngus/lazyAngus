#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1532;
// System.Net.WebRequest
struct WebRequest_t1531;
// System.Uri
struct Uri_t595;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m7428 (FileWebRequestCreator_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1531 * FileWebRequestCreator_Create_m7429 (FileWebRequestCreator_t1532 * __this, Uri_t595 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
