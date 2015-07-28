#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t3985;
// System.Net.WebRequest
struct WebRequest_t3243;
// System.Uri
struct Uri_t699;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m13560 (FtpRequestCreator_t3985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3243 * FtpRequestCreator_Create_m13561 (FtpRequestCreator_t3985 * __this, Uri_t699 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
