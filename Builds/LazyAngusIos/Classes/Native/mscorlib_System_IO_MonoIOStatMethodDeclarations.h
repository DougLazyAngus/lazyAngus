#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t4444;
struct MonoIOStat_t4444_marshaled;

void MonoIOStat_t4444_marshal(const MonoIOStat_t4444& unmarshaled, MonoIOStat_t4444_marshaled& marshaled);
void MonoIOStat_t4444_marshal_back(const MonoIOStat_t4444_marshaled& marshaled, MonoIOStat_t4444& unmarshaled);
void MonoIOStat_t4444_marshal_cleanup(MonoIOStat_t4444_marshaled& marshaled);
