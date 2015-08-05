#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3865;
struct DSAParameters_t3865_marshaled;

void DSAParameters_t3865_marshal(const DSAParameters_t3865& unmarshaled, DSAParameters_t3865_marshaled& marshaled);
void DSAParameters_t3865_marshal_back(const DSAParameters_t3865_marshaled& marshaled, DSAParameters_t3865& unmarshaled);
void DSAParameters_t3865_marshal_cleanup(DSAParameters_t3865_marshaled& marshaled);
