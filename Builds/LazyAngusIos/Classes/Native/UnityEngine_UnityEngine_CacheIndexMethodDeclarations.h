#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2746;
struct CacheIndex_t2746_marshaled;

void CacheIndex_t2746_marshal(const CacheIndex_t2746& unmarshaled, CacheIndex_t2746_marshaled& marshaled);
void CacheIndex_t2746_marshal_back(const CacheIndex_t2746_marshaled& marshaled, CacheIndex_t2746& unmarshaled);
void CacheIndex_t2746_marshal_cleanup(CacheIndex_t2746_marshaled& marshaled);
