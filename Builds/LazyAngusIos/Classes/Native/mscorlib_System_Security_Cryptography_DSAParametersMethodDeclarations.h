#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3252;
struct DSAParameters_t3252_marshaled;

void DSAParameters_t3252_marshal(const DSAParameters_t3252& unmarshaled, DSAParameters_t3252_marshaled& marshaled);
void DSAParameters_t3252_marshal_back(const DSAParameters_t3252_marshaled& marshaled, DSAParameters_t3252& unmarshaled);
void DSAParameters_t3252_marshal_cleanup(DSAParameters_t3252_marshaled& marshaled);
