#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2346;
struct PreviousInfo_t2346_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m12717 (PreviousInfo_t2346 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t2346_marshal(const PreviousInfo_t2346& unmarshaled, PreviousInfo_t2346_marshaled& marshaled);
void PreviousInfo_t2346_marshal_back(const PreviousInfo_t2346_marshaled& marshaled, PreviousInfo_t2346& unmarshaled);
void PreviousInfo_t2346_marshal_cleanup(PreviousInfo_t2346_marshaled& marshaled);
