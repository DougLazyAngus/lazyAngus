#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InputRecord
struct InputRecord_t4940;
struct InputRecord_t4940_marshaled;

void InputRecord_t4940_marshal(const InputRecord_t4940& unmarshaled, InputRecord_t4940_marshaled& marshaled);
void InputRecord_t4940_marshal_back(const InputRecord_t4940_marshaled& marshaled, InputRecord_t4940& unmarshaled);
void InputRecord_t4940_marshal_cleanup(InputRecord_t4940_marshaled& marshaled);
