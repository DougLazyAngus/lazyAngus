#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1831;
struct RSAParameters_t1831_marshaled;

void RSAParameters_t1831_marshal(const RSAParameters_t1831& unmarshaled, RSAParameters_t1831_marshaled& marshaled);
void RSAParameters_t1831_marshal_back(const RSAParameters_t1831_marshaled& marshaled, RSAParameters_t1831& unmarshaled);
void RSAParameters_t1831_marshal_cleanup(RSAParameters_t1831_marshaled& marshaled);
