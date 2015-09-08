#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InputRecord
struct InputRecord_t4933;
struct InputRecord_t4933_marshaled;

void InputRecord_t4933_marshal(const InputRecord_t4933& unmarshaled, InputRecord_t4933_marshaled& marshaled);
void InputRecord_t4933_marshal_back(const InputRecord_t4933_marshaled& marshaled, InputRecord_t4933& unmarshaled);
void InputRecord_t4933_marshal_cleanup(InputRecord_t4933_marshaled& marshaled);
