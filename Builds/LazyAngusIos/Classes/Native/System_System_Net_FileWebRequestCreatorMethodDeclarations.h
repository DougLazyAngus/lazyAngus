#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t3989;
// System.Net.WebRequest
struct WebRequest_t3254;
// System.Uri
struct Uri_t708;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13573 (FileWebRequestCreator_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3254 * FileWebRequestCreator_Create_m13574 (FileWebRequestCreator_t3989 * __this, Uri_t708 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
