#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3929;
struct DSAParameters_t3929_marshaled;

void DSAParameters_t3929_marshal(const DSAParameters_t3929& unmarshaled, DSAParameters_t3929_marshaled& marshaled);
void DSAParameters_t3929_marshal_back(const DSAParameters_t3929_marshaled& marshaled, DSAParameters_t3929& unmarshaled);
void DSAParameters_t3929_marshal_cleanup(DSAParameters_t3929_marshaled& marshaled);
