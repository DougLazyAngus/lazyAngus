#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3827;
struct RSAParameters_t3827_marshaled;

void RSAParameters_t3827_marshal(const RSAParameters_t3827& unmarshaled, RSAParameters_t3827_marshaled& marshaled);
void RSAParameters_t3827_marshal_back(const RSAParameters_t3827_marshaled& marshaled, RSAParameters_t3827& unmarshaled);
void RSAParameters_t3827_marshal_cleanup(RSAParameters_t3827_marshaled& marshaled);
