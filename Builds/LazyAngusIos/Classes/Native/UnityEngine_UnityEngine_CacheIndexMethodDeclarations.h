#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1043;
struct CacheIndex_t1043_marshaled;

void CacheIndex_t1043_marshal(const CacheIndex_t1043& unmarshaled, CacheIndex_t1043_marshaled& marshaled);
void CacheIndex_t1043_marshal_back(const CacheIndex_t1043_marshaled& marshaled, CacheIndex_t1043& unmarshaled);
void CacheIndex_t1043_marshal_cleanup(CacheIndex_t1043_marshaled& marshaled);
