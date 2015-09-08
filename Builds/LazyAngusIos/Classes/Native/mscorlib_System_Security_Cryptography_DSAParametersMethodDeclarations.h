#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3255;
struct DSAParameters_t3255_marshaled;

void DSAParameters_t3255_marshal(const DSAParameters_t3255& unmarshaled, DSAParameters_t3255_marshaled& marshaled);
void DSAParameters_t3255_marshal_back(const DSAParameters_t3255_marshaled& marshaled, DSAParameters_t3255& unmarshaled);
void DSAParameters_t3255_marshal_cleanup(DSAParameters_t3255_marshaled& marshaled);
