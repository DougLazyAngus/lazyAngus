#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t4035;
// System.Net.WebRequest
struct WebRequest_t3301;
// System.Uri
struct Uri_t757;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m13822 (FileWebRequestCreator_t4035 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3301 * FileWebRequestCreator_Create_m13823 (FileWebRequestCreator_t4035 * __this, Uri_t757 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
