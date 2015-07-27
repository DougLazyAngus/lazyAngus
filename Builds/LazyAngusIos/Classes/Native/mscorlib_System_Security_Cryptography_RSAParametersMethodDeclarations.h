#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1833;
struct RSAParameters_t1833_marshaled;

void RSAParameters_t1833_marshal(const RSAParameters_t1833& unmarshaled, RSAParameters_t1833_marshaled& marshaled);
void RSAParameters_t1833_marshal_back(const RSAParameters_t1833_marshaled& marshaled, RSAParameters_t1833& unmarshaled);
void RSAParameters_t1833_marshal_cleanup(RSAParameters_t1833_marshaled& marshaled);
