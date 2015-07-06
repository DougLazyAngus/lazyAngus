#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t983;
struct YieldInstruction_t983_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m5751 (YieldInstruction_t983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t983_marshal(const YieldInstruction_t983& unmarshaled, YieldInstruction_t983_marshaled& marshaled);
void YieldInstruction_t983_marshal_back(const YieldInstruction_t983_marshaled& marshaled, YieldInstruction_t983& unmarshaled);
void YieldInstruction_t983_marshal_cleanup(YieldInstruction_t983_marshaled& marshaled);
