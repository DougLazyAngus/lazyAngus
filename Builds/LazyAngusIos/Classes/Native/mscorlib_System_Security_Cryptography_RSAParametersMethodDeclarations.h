#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3883;
struct RSAParameters_t3883_marshaled;

void RSAParameters_t3883_marshal(const RSAParameters_t3883& unmarshaled, RSAParameters_t3883_marshaled& marshaled);
void RSAParameters_t3883_marshal_back(const RSAParameters_t3883_marshaled& marshaled, RSAParameters_t3883& unmarshaled);
void RSAParameters_t3883_marshal_cleanup(RSAParameters_t3883_marshaled& marshaled);
