#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1066;
struct CacheIndex_t1066_marshaled;

void CacheIndex_t1066_marshal(const CacheIndex_t1066& unmarshaled, CacheIndex_t1066_marshaled& marshaled);
void CacheIndex_t1066_marshal_back(const CacheIndex_t1066_marshaled& marshaled, CacheIndex_t1066& unmarshaled);
void CacheIndex_t1066_marshal_cleanup(CacheIndex_t1066_marshaled& marshaled);
