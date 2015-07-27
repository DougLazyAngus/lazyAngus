#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1832;
struct RSAParameters_t1832_marshaled;

void RSAParameters_t1832_marshal(const RSAParameters_t1832& unmarshaled, RSAParameters_t1832_marshaled& marshaled);
void RSAParameters_t1832_marshal_back(const RSAParameters_t1832_marshaled& marshaled, RSAParameters_t1832& unmarshaled);
void RSAParameters_t1832_marshal_cleanup(RSAParameters_t1832_marshaled& marshaled);
