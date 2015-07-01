#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1711;
struct DSAParameters_t1711_marshaled;

void DSAParameters_t1711_marshal(const DSAParameters_t1711& unmarshaled, DSAParameters_t1711_marshaled& marshaled);
void DSAParameters_t1711_marshal_back(const DSAParameters_t1711_marshaled& marshaled, DSAParameters_t1711& unmarshaled);
void DSAParameters_t1711_marshal_cleanup(DSAParameters_t1711_marshaled& marshaled);
