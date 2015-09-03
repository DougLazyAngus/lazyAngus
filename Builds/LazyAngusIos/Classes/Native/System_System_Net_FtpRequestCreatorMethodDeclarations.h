#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t4364;
// System.Net.WebRequest
struct WebRequest_t3280;
// System.Uri
struct Uri_t771;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m16549 (FtpRequestCreator_t4364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3280 * FtpRequestCreator_Create_m16550 (FtpRequestCreator_t4364 * __this, Uri_t771 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
