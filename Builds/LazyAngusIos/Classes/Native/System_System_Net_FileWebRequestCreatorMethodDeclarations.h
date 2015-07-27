#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t2022;
// System.Net.WebRequest
struct WebRequest_t1704;
// System.Uri
struct Uri_t656;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m10289 (FileWebRequestCreator_t2022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1704 * FileWebRequestCreator_Create_m10290 (FileWebRequestCreator_t2022 * __this, Uri_t656 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
