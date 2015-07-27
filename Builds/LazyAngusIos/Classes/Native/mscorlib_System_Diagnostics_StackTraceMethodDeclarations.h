#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackTrace
struct StackTrace_t1300;
// System.Exception
struct Exception_t27;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t2432;
// System.Diagnostics.StackFrame
struct StackFrame_t1342;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C" void StackTrace__ctor_m11601 (StackTrace_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m7234 (StackTrace_t1300 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C" void StackTrace__ctor_m13483 (StackTrace_t1300 * __this, Exception_t27 * ___e, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C" void StackTrace__ctor_m13484 (StackTrace_t1300 * __this, Exception_t27 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C" void StackTrace__ctor_m13485 (StackTrace_t1300 * __this, Exception_t27 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C" void StackTrace_init_frames_m13486 (StackTrace_t1300 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C" StackFrameU5BU5D_t2432* StackTrace_get_trace_m13487 (Object_t * __this /* static, unused */, Exception_t27 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C" int32_t StackTrace_get_FrameCount_m13488 (StackTrace_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C" StackFrame_t1342 * StackTrace_GetFrame_m13489 (StackTrace_t1300 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C" String_t* StackTrace_ToString_m13490 (StackTrace_t1300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
