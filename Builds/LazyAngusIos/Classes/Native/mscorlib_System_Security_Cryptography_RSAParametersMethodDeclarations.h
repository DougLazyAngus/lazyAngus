#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1709;
struct RSAParameters_t1709_marshaled;

void RSAParameters_t1709_marshal(const RSAParameters_t1709& unmarshaled, RSAParameters_t1709_marshaled& marshaled);
void RSAParameters_t1709_marshal_back(const RSAParameters_t1709_marshaled& marshaled, RSAParameters_t1709& unmarshaled);
void RSAParameters_t1709_marshal_cleanup(RSAParameters_t1709_marshaled& marshaled);
