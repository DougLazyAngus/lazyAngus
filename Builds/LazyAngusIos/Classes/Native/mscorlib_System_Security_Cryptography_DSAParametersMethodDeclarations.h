#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3912;
struct DSAParameters_t3912_marshaled;

void DSAParameters_t3912_marshal(const DSAParameters_t3912& unmarshaled, DSAParameters_t3912_marshaled& marshaled);
void DSAParameters_t3912_marshal_back(const DSAParameters_t3912_marshaled& marshaled, DSAParameters_t3912& unmarshaled);
void DSAParameters_t3912_marshal_cleanup(DSAParameters_t3912_marshaled& marshaled);
