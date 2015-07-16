#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1548;
// System.Net.WebRequest
struct WebRequest_t1539;
// System.Uri
struct Uri_t603;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m7523 (FtpRequestCreator_t1548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1539 * FtpRequestCreator_Create_m7524 (FtpRequestCreator_t1548 * __this, Uri_t603 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
