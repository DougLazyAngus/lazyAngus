#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t3993;
// System.Net.WebRequest
struct WebRequest_t3251;
// System.Uri
struct Uri_t707;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m13607 (FtpRequestCreator_t3993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3251 * FtpRequestCreator_Create_m13608 (FtpRequestCreator_t3993 * __this, Uri_t707 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
