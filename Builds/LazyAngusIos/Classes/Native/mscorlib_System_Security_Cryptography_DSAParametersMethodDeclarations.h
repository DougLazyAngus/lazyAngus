#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3251;
struct DSAParameters_t3251_marshaled;

void DSAParameters_t3251_marshal(const DSAParameters_t3251& unmarshaled, DSAParameters_t3251_marshaled& marshaled);
void DSAParameters_t3251_marshal_back(const DSAParameters_t3251_marshaled& marshaled, DSAParameters_t3251& unmarshaled);
void DSAParameters_t3251_marshal_cleanup(DSAParameters_t3251_marshaled& marshaled);
