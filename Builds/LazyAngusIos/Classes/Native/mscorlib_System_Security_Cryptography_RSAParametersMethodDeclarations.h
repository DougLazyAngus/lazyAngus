#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3225;
struct RSAParameters_t3225_marshaled;

void RSAParameters_t3225_marshal(const RSAParameters_t3225& unmarshaled, RSAParameters_t3225_marshaled& marshaled);
void RSAParameters_t3225_marshal_back(const RSAParameters_t3225_marshaled& marshaled, RSAParameters_t3225& unmarshaled);
void RSAParameters_t3225_marshal_cleanup(RSAParameters_t3225_marshaled& marshaled);
