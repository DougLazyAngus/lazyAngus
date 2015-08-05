#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3838;
struct RSAParameters_t3838_marshaled;

void RSAParameters_t3838_marshal(const RSAParameters_t3838& unmarshaled, RSAParameters_t3838_marshaled& marshaled);
void RSAParameters_t3838_marshal_back(const RSAParameters_t3838_marshaled& marshaled, RSAParameters_t3838& unmarshaled);
void RSAParameters_t3838_marshal_cleanup(RSAParameters_t3838_marshaled& marshaled);
