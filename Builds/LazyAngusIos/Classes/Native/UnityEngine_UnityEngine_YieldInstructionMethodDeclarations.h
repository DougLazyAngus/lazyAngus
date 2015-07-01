#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t961;
struct YieldInstruction_t961_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m5605 (YieldInstruction_t961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t961_marshal(const YieldInstruction_t961& unmarshaled, YieldInstruction_t961_marshaled& marshaled);
void YieldInstruction_t961_marshal_back(const YieldInstruction_t961_marshaled& marshaled, YieldInstruction_t961& unmarshaled);
void YieldInstruction_t961_marshal_cleanup(YieldInstruction_t961_marshaled& marshaled);
