﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpStatus
struct FtpStatus_t1541;
// System.String
struct String_t;
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpStatus::.ctor(System.Net.FtpStatusCode,System.String)
extern "C" void FtpStatus__ctor_m7487 (FtpStatus_t1541 * __this, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatusCode System.Net.FtpStatus::get_StatusCode()
extern "C" int32_t FtpStatus_get_StatusCode_m7488 (FtpStatus_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpStatus::get_StatusDescription()
extern "C" String_t* FtpStatus_get_StatusDescription_m7489 (FtpStatus_t1541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
