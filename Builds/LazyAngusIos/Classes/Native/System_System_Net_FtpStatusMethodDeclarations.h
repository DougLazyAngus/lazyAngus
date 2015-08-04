#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpStatus
struct FtpStatus_t3996;
// System.String
struct String_t;
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpStatus::.ctor(System.Net.FtpStatusCode,System.String)
extern "C" void FtpStatus__ctor_m13625 (FtpStatus_t3996 * __this, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatusCode System.Net.FtpStatus::get_StatusCode()
extern "C" int32_t FtpStatus_get_StatusCode_m13626 (FtpStatus_t3996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpStatus::get_StatusDescription()
extern "C" String_t* FtpStatus_get_StatusDescription_m13627 (FtpStatus_t3996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
