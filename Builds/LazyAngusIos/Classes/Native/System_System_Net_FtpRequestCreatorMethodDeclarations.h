#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1515;
// System.Net.WebRequest
struct WebRequest_t1506;
// System.Uri
struct Uri_t574;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m7305 (FtpRequestCreator_t1515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1506 * FtpRequestCreator_Create_m7306 (FtpRequestCreator_t1515 * __this, Uri_t574 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
