#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t4513;

// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::.ctor(System.Text.RegularExpressions.RxInterpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" void RepeatContext__ctor_m17712 (RepeatContext_t4513 * __this, RepeatContext_t4513 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Count()
extern "C" int32_t RepeatContext_get_Count_m17713 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Count(System.Int32)
extern "C" void RepeatContext_set_Count_m17714 (RepeatContext_t4513 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Start()
extern "C" int32_t RepeatContext_get_Start_m17715 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Start(System.Int32)
extern "C" void RepeatContext_set_Start_m17716 (RepeatContext_t4513 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMinimum()
extern "C" bool RepeatContext_get_IsMinimum_m17717 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMaximum()
extern "C" bool RepeatContext_get_IsMaximum_m17718 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsLazy()
extern "C" bool RepeatContext_get_IsLazy_m17719 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Expression()
extern "C" int32_t RepeatContext_get_Expression_m17720 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Previous()
extern "C" RepeatContext_t4513 * RepeatContext_get_Previous_m17721 (RepeatContext_t4513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
