#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3885;
struct RSAParameters_t3885_marshaled;

void RSAParameters_t3885_marshal(const RSAParameters_t3885& unmarshaled, RSAParameters_t3885_marshaled& marshaled);
void RSAParameters_t3885_marshal_back(const RSAParameters_t3885_marshaled& marshaled, RSAParameters_t3885& unmarshaled);
void RSAParameters_t3885_marshal_cleanup(RSAParameters_t3885_marshaled& marshaled);
