#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3910;
struct DSAParameters_t3910_marshaled;

void DSAParameters_t3910_marshal(const DSAParameters_t3910& unmarshaled, DSAParameters_t3910_marshaled& marshaled);
void DSAParameters_t3910_marshal_back(const DSAParameters_t3910_marshaled& marshaled, DSAParameters_t3910& unmarshaled);
void DSAParameters_t3910_marshal_cleanup(DSAParameters_t3910_marshaled& marshaled);
