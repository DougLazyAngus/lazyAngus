#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1756;
struct RSAParameters_t1756_marshaled;

void RSAParameters_t1756_marshal(const RSAParameters_t1756& unmarshaled, RSAParameters_t1756_marshaled& marshaled);
void RSAParameters_t1756_marshal_back(const RSAParameters_t1756_marshaled& marshaled, RSAParameters_t1756& unmarshaled);
void RSAParameters_t1756_marshal_cleanup(RSAParameters_t1756_marshaled& marshaled);
