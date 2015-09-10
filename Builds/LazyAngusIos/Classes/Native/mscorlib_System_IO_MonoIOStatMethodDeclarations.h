#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t5001;
struct MonoIOStat_t5001_marshaled;

void MonoIOStat_t5001_marshal(const MonoIOStat_t5001& unmarshaled, MonoIOStat_t5001_marshaled& marshaled);
void MonoIOStat_t5001_marshal_back(const MonoIOStat_t5001_marshaled& marshaled, MonoIOStat_t5001& unmarshaled);
void MonoIOStat_t5001_marshal_cleanup(MonoIOStat_t5001_marshaled& marshaled);
