#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t4368;
// System.Net.WebRequest
struct WebRequest_t3284;
// System.Uri
struct Uri_t775;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m16562 (FtpRequestCreator_t4368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3284 * FtpRequestCreator_Create_m16563 (FtpRequestCreator_t4368 * __this, Uri_t775 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
