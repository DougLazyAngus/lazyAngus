#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1121;
struct CacheIndex_t1121_marshaled;

void CacheIndex_t1121_marshal(const CacheIndex_t1121& unmarshaled, CacheIndex_t1121_marshaled& marshaled);
void CacheIndex_t1121_marshal_back(const CacheIndex_t1121_marshaled& marshaled, CacheIndex_t1121& unmarshaled);
void CacheIndex_t1121_marshal_cleanup(CacheIndex_t1121_marshaled& marshaled);
