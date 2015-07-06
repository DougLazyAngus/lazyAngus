#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1733;
struct DSAParameters_t1733_marshaled;

void DSAParameters_t1733_marshal(const DSAParameters_t1733& unmarshaled, DSAParameters_t1733_marshaled& marshaled);
void DSAParameters_t1733_marshal_back(const DSAParameters_t1733_marshaled& marshaled, DSAParameters_t1733& unmarshaled);
void DSAParameters_t1733_marshal_cleanup(DSAParameters_t1733_marshaled& marshaled);
