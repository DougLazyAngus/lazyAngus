#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t4097;
struct IntStack_t4097_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m14493 (IntStack_t4097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m14494 (IntStack_t4097 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m14495 (IntStack_t4097 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m14496 (IntStack_t4097 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t4097_marshal(const IntStack_t4097& unmarshaled, IntStack_t4097_marshaled& marshaled);
void IntStack_t4097_marshal_back(const IntStack_t4097_marshaled& marshaled, IntStack_t4097& unmarshaled);
void IntStack_t4097_marshal_cleanup(IntStack_t4097_marshaled& marshaled);
