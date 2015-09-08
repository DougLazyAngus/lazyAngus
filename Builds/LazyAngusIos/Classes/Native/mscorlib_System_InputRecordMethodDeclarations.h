#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InputRecord
struct InputRecord_t4930;
struct InputRecord_t4930_marshaled;

void InputRecord_t4930_marshal(const InputRecord_t4930& unmarshaled, InputRecord_t4930_marshaled& marshaled);
void InputRecord_t4930_marshal_back(const InputRecord_t4930_marshaled& marshaled, InputRecord_t4930& unmarshaled);
void InputRecord_t4930_marshal_cleanup(InputRecord_t4930_marshaled& marshaled);
