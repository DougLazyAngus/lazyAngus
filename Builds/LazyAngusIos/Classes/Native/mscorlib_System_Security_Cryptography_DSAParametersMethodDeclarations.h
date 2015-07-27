#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1859;
struct DSAParameters_t1859_marshaled;

void DSAParameters_t1859_marshal(const DSAParameters_t1859& unmarshaled, DSAParameters_t1859_marshaled& marshaled);
void DSAParameters_t1859_marshal_back(const DSAParameters_t1859_marshaled& marshaled, DSAParameters_t1859& unmarshaled);
void DSAParameters_t1859_marshal_cleanup(DSAParameters_t1859_marshaled& marshaled);
