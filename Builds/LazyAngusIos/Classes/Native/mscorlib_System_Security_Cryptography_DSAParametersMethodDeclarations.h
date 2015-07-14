#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1756;
struct DSAParameters_t1756_marshaled;

void DSAParameters_t1756_marshal(const DSAParameters_t1756& unmarshaled, DSAParameters_t1756_marshaled& marshaled);
void DSAParameters_t1756_marshal_back(const DSAParameters_t1756_marshaled& marshaled, DSAParameters_t1756& unmarshaled);
void DSAParameters_t1756_marshal_cleanup(DSAParameters_t1756_marshaled& marshaled);
