#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1540;
// System.Net.WebRequest
struct WebRequest_t1539;
// System.Uri
struct Uri_t603;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m7466 (FileWebRequestCreator_t1540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1539 * FileWebRequestCreator_Create_m7467 (FileWebRequestCreator_t1540 * __this, Uri_t603 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
