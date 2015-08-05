#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3839;
struct RSAParameters_t3839_marshaled;

void RSAParameters_t3839_marshal(const RSAParameters_t3839& unmarshaled, RSAParameters_t3839_marshaled& marshaled);
void RSAParameters_t3839_marshal_back(const RSAParameters_t3839_marshaled& marshaled, RSAParameters_t3839& unmarshaled);
void RSAParameters_t3839_marshal_cleanup(RSAParameters_t3839_marshaled& marshaled);
