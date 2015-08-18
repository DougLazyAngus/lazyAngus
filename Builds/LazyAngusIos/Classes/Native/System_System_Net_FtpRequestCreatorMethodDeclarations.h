#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t4042;
// System.Net.WebRequest
struct WebRequest_t3301;
// System.Uri
struct Uri_t757;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m13881 (FtpRequestCreator_t4042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3301 * FtpRequestCreator_Create_m13882 (FtpRequestCreator_t4042 * __this, Uri_t757 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
