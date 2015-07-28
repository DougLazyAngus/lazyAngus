#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2687;
struct CacheIndex_t2687_marshaled;

void CacheIndex_t2687_marshal(const CacheIndex_t2687& unmarshaled, CacheIndex_t2687_marshaled& marshaled);
void CacheIndex_t2687_marshal_back(const CacheIndex_t2687_marshaled& marshaled, CacheIndex_t2687& unmarshaled);
void CacheIndex_t2687_marshal_cleanup(CacheIndex_t2687_marshaled& marshaled);
