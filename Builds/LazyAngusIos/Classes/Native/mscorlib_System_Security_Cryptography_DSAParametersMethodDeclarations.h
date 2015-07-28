#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3854;
struct DSAParameters_t3854_marshaled;

void DSAParameters_t3854_marshal(const DSAParameters_t3854& unmarshaled, DSAParameters_t3854_marshaled& marshaled);
void DSAParameters_t3854_marshal_back(const DSAParameters_t3854_marshaled& marshaled, DSAParameters_t3854& unmarshaled);
void DSAParameters_t3854_marshal_cleanup(DSAParameters_t3854_marshaled& marshaled);
