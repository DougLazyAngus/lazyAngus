#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3886;
struct RSAParameters_t3886_marshaled;

void RSAParameters_t3886_marshal(const RSAParameters_t3886& unmarshaled, RSAParameters_t3886_marshaled& marshaled);
void RSAParameters_t3886_marshal_back(const RSAParameters_t3886_marshaled& marshaled, RSAParameters_t3886& unmarshaled);
void RSAParameters_t3886_marshal_cleanup(RSAParameters_t3886_marshaled& marshaled);
