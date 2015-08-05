#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3866;
struct DSAParameters_t3866_marshaled;

void DSAParameters_t3866_marshal(const DSAParameters_t3866& unmarshaled, DSAParameters_t3866_marshaled& marshaled);
void DSAParameters_t3866_marshal_back(const DSAParameters_t3866_marshaled& marshaled, DSAParameters_t3866& unmarshaled);
void DSAParameters_t3866_marshal_cleanup(DSAParameters_t3866_marshaled& marshaled);
