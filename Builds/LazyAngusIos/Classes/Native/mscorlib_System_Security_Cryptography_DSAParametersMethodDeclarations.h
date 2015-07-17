#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1858;
struct DSAParameters_t1858_marshaled;

void DSAParameters_t1858_marshal(const DSAParameters_t1858& unmarshaled, DSAParameters_t1858_marshaled& marshaled);
void DSAParameters_t1858_marshal_back(const DSAParameters_t1858_marshaled& marshaled, DSAParameters_t1858& unmarshaled);
void DSAParameters_t1858_marshal_cleanup(DSAParameters_t1858_marshaled& marshaled);
