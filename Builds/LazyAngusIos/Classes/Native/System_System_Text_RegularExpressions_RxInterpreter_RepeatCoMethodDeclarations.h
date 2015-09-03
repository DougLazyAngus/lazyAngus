#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t4509;

// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::.ctor(System.Text.RegularExpressions.RxInterpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" void RepeatContext__ctor_m17699 (RepeatContext_t4509 * __this, RepeatContext_t4509 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Count()
extern "C" int32_t RepeatContext_get_Count_m17700 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Count(System.Int32)
extern "C" void RepeatContext_set_Count_m17701 (RepeatContext_t4509 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Start()
extern "C" int32_t RepeatContext_get_Start_m17702 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Start(System.Int32)
extern "C" void RepeatContext_set_Start_m17703 (RepeatContext_t4509 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMinimum()
extern "C" bool RepeatContext_get_IsMinimum_m17704 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMaximum()
extern "C" bool RepeatContext_get_IsMaximum_m17705 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsLazy()
extern "C" bool RepeatContext_get_IsLazy_m17706 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Expression()
extern "C" int32_t RepeatContext_get_Expression_m17707 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Previous()
extern "C" RepeatContext_t4509 * RepeatContext_get_Previous_m17708 (RepeatContext_t4509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
