#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3864;
struct DSAParameters_t3864_marshaled;

void DSAParameters_t3864_marshal(const DSAParameters_t3864& unmarshaled, DSAParameters_t3864_marshaled& marshaled);
void DSAParameters_t3864_marshal_back(const DSAParameters_t3864_marshaled& marshaled, DSAParameters_t3864& unmarshaled);
void DSAParameters_t3864_marshal_cleanup(DSAParameters_t3864_marshaled& marshaled);
