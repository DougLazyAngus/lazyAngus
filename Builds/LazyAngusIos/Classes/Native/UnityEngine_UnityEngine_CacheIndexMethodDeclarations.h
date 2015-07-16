#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1076;
struct CacheIndex_t1076_marshaled;

void CacheIndex_t1076_marshal(const CacheIndex_t1076& unmarshaled, CacheIndex_t1076_marshaled& marshaled);
void CacheIndex_t1076_marshal_back(const CacheIndex_t1076_marshaled& marshaled, CacheIndex_t1076& unmarshaled);
void CacheIndex_t1076_marshal_cleanup(CacheIndex_t1076_marshaled& marshaled);
