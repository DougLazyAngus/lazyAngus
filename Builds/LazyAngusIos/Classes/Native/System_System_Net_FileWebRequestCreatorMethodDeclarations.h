#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t4033;
// System.Net.WebRequest
struct WebRequest_t3299;
// System.Uri
struct Uri_t755;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13814 (FileWebRequestCreator_t4033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3299 * FileWebRequestCreator_Create_m13815 (FileWebRequestCreator_t4033 * __this, Uri_t755 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
