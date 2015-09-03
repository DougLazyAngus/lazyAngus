#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InputRecord
struct InputRecord_t4929;
struct InputRecord_t4929_marshaled;

void InputRecord_t4929_marshal(const InputRecord_t4929& unmarshaled, InputRecord_t4929_marshaled& marshaled);
void InputRecord_t4929_marshal_back(const InputRecord_t4929_marshaled& marshaled, InputRecord_t4929& unmarshaled);
void InputRecord_t4929_marshal_cleanup(InputRecord_t4929_marshaled& marshaled);
