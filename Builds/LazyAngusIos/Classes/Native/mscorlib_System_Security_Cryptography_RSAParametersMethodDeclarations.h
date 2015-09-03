#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3224;
struct RSAParameters_t3224_marshaled;

void RSAParameters_t3224_marshal(const RSAParameters_t3224& unmarshaled, RSAParameters_t3224_marshaled& marshaled);
void RSAParameters_t3224_marshal_back(const RSAParameters_t3224_marshaled& marshaled, RSAParameters_t3224& unmarshaled);
void RSAParameters_t3224_marshal_cleanup(RSAParameters_t3224_marshaled& marshaled);
