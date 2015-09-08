#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t4365;
// System.Net.WebRequest
struct WebRequest_t3281;
// System.Uri
struct Uri_t772;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m16562 (FtpRequestCreator_t4365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3281 * FtpRequestCreator_Create_m16563 (FtpRequestCreator_t4365 * __this, Uri_t772 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
