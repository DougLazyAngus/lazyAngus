#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3835;
struct RSAParameters_t3835_marshaled;

void RSAParameters_t3835_marshal(const RSAParameters_t3835& unmarshaled, RSAParameters_t3835_marshaled& marshaled);
void RSAParameters_t3835_marshal_back(const RSAParameters_t3835_marshaled& marshaled, RSAParameters_t3835& unmarshaled);
void RSAParameters_t3835_marshal_cleanup(RSAParameters_t3835_marshaled& marshaled);
