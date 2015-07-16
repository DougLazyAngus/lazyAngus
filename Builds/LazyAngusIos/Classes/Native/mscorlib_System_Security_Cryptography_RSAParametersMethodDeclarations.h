#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1764;
struct RSAParameters_t1764_marshaled;

void RSAParameters_t1764_marshal(const RSAParameters_t1764& unmarshaled, RSAParameters_t1764_marshaled& marshaled);
void RSAParameters_t1764_marshal_back(const RSAParameters_t1764_marshaled& marshaled, RSAParameters_t1764& unmarshaled);
void RSAParameters_t1764_marshal_cleanup(RSAParameters_t1764_marshaled& marshaled);
