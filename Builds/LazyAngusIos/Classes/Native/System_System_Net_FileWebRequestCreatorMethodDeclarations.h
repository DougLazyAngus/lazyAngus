#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t4036;
// System.Net.WebRequest
struct WebRequest_t3302;
// System.Uri
struct Uri_t758;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13846 (FileWebRequestCreator_t4036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3302 * FileWebRequestCreator_Create_m13847 (FileWebRequestCreator_t4036 * __this, Uri_t758 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
