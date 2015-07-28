#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3828;
struct RSAParameters_t3828_marshaled;

void RSAParameters_t3828_marshal(const RSAParameters_t3828& unmarshaled, RSAParameters_t3828_marshaled& marshaled);
void RSAParameters_t3828_marshal_back(const RSAParameters_t3828_marshaled& marshaled, RSAParameters_t3828& unmarshaled);
void RSAParameters_t3828_marshal_cleanup(RSAParameters_t3828_marshaled& marshaled);
