#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.RxInterpreter/IntStack
struct IntStack_t4512;
struct IntStack_t4512_marshaled;

// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m17708 (IntStack_t4512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m17709 (IntStack_t4512 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m17710 (IntStack_t4512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m17711 (IntStack_t4512 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t4512_marshal(const IntStack_t4512& unmarshaled, IntStack_t4512_marshaled& marshaled);
void IntStack_t4512_marshal_back(const IntStack_t4512_marshaled& marshaled, IntStack_t4512& unmarshaled);
void IntStack_t4512_marshal_cleanup(IntStack_t4512_marshaled& marshaled);
