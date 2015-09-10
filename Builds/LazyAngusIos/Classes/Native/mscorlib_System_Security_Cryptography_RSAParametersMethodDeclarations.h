#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3235;
struct RSAParameters_t3235_marshaled;

void RSAParameters_t3235_marshal(const RSAParameters_t3235& unmarshaled, RSAParameters_t3235_marshaled& marshaled);
void RSAParameters_t3235_marshal_back(const RSAParameters_t3235_marshaled& marshaled, RSAParameters_t3235& unmarshaled);
void RSAParameters_t3235_marshal_cleanup(RSAParameters_t3235_marshaled& marshaled);
