#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1754;
struct RSAParameters_t1754_marshaled;

void RSAParameters_t1754_marshal(const RSAParameters_t1754& unmarshaled, RSAParameters_t1754_marshaled& marshaled);
void RSAParameters_t1754_marshal_back(const RSAParameters_t1754_marshaled& marshaled, RSAParameters_t1754& unmarshaled);
void RSAParameters_t1754_marshal_cleanup(RSAParameters_t1754_marshaled& marshaled);
