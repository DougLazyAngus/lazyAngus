#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1860;
struct DSAParameters_t1860_marshaled;

void DSAParameters_t1860_marshal(const DSAParameters_t1860& unmarshaled, DSAParameters_t1860_marshaled& marshaled);
void DSAParameters_t1860_marshal_back(const DSAParameters_t1860_marshaled& marshaled, DSAParameters_t1860& unmarshaled);
void DSAParameters_t1860_marshal_cleanup(DSAParameters_t1860_marshaled& marshaled);
