#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter/IntStack
struct IntStack_t4519;
struct IntStack_t4519_marshaled;

// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m17765 (IntStack_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m17766 (IntStack_t4519 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m17767 (IntStack_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m17768 (IntStack_t4519 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t4519_marshal(const IntStack_t4519& unmarshaled, IntStack_t4519_marshaled& marshaled);
void IntStack_t4519_marshal_back(const IntStack_t4519_marshaled& marshaled, IntStack_t4519& unmarshaled);
void IntStack_t4519_marshal_cleanup(IntStack_t4519_marshaled& marshaled);
