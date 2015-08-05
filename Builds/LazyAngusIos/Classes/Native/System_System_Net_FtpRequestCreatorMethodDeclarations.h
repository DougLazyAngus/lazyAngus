#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t3997;
// System.Net.WebRequest
struct WebRequest_t3255;
// System.Uri
struct Uri_t709;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m13635 (FtpRequestCreator_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3255 * FtpRequestCreator_Create_m13636 (FtpRequestCreator_t3997 * __this, Uri_t709 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
