#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t2021;
// System.Net.WebRequest
struct WebRequest_t1703;
// System.Uri
struct Uri_t655;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m10282 (FileWebRequestCreator_t2021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1703 * FileWebRequestCreator_Create_m10283 (FileWebRequestCreator_t2021 * __this, Uri_t655 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
