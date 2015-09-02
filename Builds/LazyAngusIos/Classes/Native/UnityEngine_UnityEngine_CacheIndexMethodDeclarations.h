#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2763;
struct CacheIndex_t2763_marshaled;

void CacheIndex_t2763_marshal(const CacheIndex_t2763& unmarshaled, CacheIndex_t2763_marshaled& marshaled);
void CacheIndex_t2763_marshal_back(const CacheIndex_t2763_marshaled& marshaled, CacheIndex_t2763& unmarshaled);
void CacheIndex_t2763_marshal_cleanup(CacheIndex_t2763_marshaled& marshaled);
