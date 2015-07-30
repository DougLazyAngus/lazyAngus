#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3862;
struct DSAParameters_t3862_marshaled;

void DSAParameters_t3862_marshal(const DSAParameters_t3862& unmarshaled, DSAParameters_t3862_marshaled& marshaled);
void DSAParameters_t3862_marshal_back(const DSAParameters_t3862_marshaled& marshaled, DSAParameters_t3862& unmarshaled);
void DSAParameters_t3862_marshal_cleanup(DSAParameters_t3862_marshaled& marshaled);
