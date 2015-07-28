#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3855;
struct DSAParameters_t3855_marshaled;

void DSAParameters_t3855_marshal(const DSAParameters_t3855& unmarshaled, DSAParameters_t3855_marshaled& marshaled);
void DSAParameters_t3855_marshal_back(const DSAParameters_t3855_marshaled& marshaled, DSAParameters_t3855& unmarshaled);
void DSAParameters_t3855_marshal_cleanup(DSAParameters_t3855_marshaled& marshaled);
