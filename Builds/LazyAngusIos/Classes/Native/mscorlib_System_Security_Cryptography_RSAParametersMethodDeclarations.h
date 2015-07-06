#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1731;
struct RSAParameters_t1731_marshaled;

void RSAParameters_t1731_marshal(const RSAParameters_t1731& unmarshaled, RSAParameters_t1731_marshaled& marshaled);
void RSAParameters_t1731_marshal_back(const RSAParameters_t1731_marshaled& marshaled, RSAParameters_t1731& unmarshaled);
void RSAParameters_t1731_marshal_cleanup(RSAParameters_t1731_marshaled& marshaled);
