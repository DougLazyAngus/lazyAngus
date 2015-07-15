#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1540;
// System.Net.WebRequest
struct WebRequest_t1531;
// System.Uri
struct Uri_t595;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m7485 (FtpRequestCreator_t1540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1531 * FtpRequestCreator_Create_m7486 (FtpRequestCreator_t1540 * __this, Uri_t595 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
