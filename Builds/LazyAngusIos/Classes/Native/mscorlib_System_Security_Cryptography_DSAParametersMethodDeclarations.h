#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3913;
struct DSAParameters_t3913_marshaled;

void DSAParameters_t3913_marshal(const DSAParameters_t3913& unmarshaled, DSAParameters_t3913_marshaled& marshaled);
void DSAParameters_t3913_marshal_back(const DSAParameters_t3913_marshaled& marshaled, DSAParameters_t3913& unmarshaled);
void DSAParameters_t3913_marshal_cleanup(DSAParameters_t3913_marshaled& marshaled);
