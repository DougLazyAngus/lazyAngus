#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1766;
struct DSAParameters_t1766_marshaled;

void DSAParameters_t1766_marshal(const DSAParameters_t1766& unmarshaled, DSAParameters_t1766_marshaled& marshaled);
void DSAParameters_t1766_marshal_back(const DSAParameters_t1766_marshaled& marshaled, DSAParameters_t1766& unmarshaled);
void DSAParameters_t1766_marshal_cleanup(DSAParameters_t1766_marshaled& marshaled);
