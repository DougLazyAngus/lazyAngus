#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3837;
struct RSAParameters_t3837_marshaled;

void RSAParameters_t3837_marshal(const RSAParameters_t3837& unmarshaled, RSAParameters_t3837_marshaled& marshaled);
void RSAParameters_t3837_marshal_back(const RSAParameters_t3837_marshaled& marshaled, RSAParameters_t3837& unmarshaled);
void RSAParameters_t3837_marshal_cleanup(RSAParameters_t3837_marshaled& marshaled);
