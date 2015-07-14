#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1538;
// System.Net.WebRequest
struct WebRequest_t1529;
// System.Uri
struct Uri_t593;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m7460 (FtpRequestCreator_t1538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1529 * FtpRequestCreator_Create_m7461 (FtpRequestCreator_t1538 * __this, Uri_t593 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
