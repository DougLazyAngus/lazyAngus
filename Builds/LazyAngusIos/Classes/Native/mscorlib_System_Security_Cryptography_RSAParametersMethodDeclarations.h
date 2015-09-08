#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3228;
struct RSAParameters_t3228_marshaled;

void RSAParameters_t3228_marshal(const RSAParameters_t3228& unmarshaled, RSAParameters_t3228_marshaled& marshaled);
void RSAParameters_t3228_marshal_back(const RSAParameters_t3228_marshaled& marshaled, RSAParameters_t3228& unmarshaled);
void RSAParameters_t3228_marshal_cleanup(RSAParameters_t3228_marshaled& marshaled);
