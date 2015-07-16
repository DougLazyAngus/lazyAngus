#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1758;
struct DSAParameters_t1758_marshaled;

void DSAParameters_t1758_marshal(const DSAParameters_t1758& unmarshaled, DSAParameters_t1758_marshaled& marshaled);
void DSAParameters_t1758_marshal_back(const DSAParameters_t1758_marshaled& marshaled, DSAParameters_t1758& unmarshaled);
void DSAParameters_t1758_marshal_cleanup(DSAParameters_t1758_marshaled& marshaled);
