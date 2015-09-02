#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3902;
struct RSAParameters_t3902_marshaled;

void RSAParameters_t3902_marshal(const RSAParameters_t3902& unmarshaled, RSAParameters_t3902_marshaled& marshaled);
void RSAParameters_t3902_marshal_back(const RSAParameters_t3902_marshaled& marshaled, RSAParameters_t3902& unmarshaled);
void RSAParameters_t3902_marshal_cleanup(RSAParameters_t3902_marshaled& marshaled);
