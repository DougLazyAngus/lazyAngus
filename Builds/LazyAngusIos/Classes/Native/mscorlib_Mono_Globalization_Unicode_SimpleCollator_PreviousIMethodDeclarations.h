#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t4332;
struct PreviousInfo_t4332_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m16093 (PreviousInfo_t4332 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t4332_marshal(const PreviousInfo_t4332& unmarshaled, PreviousInfo_t4332_marshaled& marshaled);
void PreviousInfo_t4332_marshal_back(const PreviousInfo_t4332_marshaled& marshaled, PreviousInfo_t4332& unmarshaled);
void PreviousInfo_t4332_marshal_cleanup(PreviousInfo_t4332_marshaled& marshaled);
