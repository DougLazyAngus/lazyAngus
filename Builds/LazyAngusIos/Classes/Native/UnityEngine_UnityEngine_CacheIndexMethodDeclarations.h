#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2688;
struct CacheIndex_t2688_marshaled;

void CacheIndex_t2688_marshal(const CacheIndex_t2688& unmarshaled, CacheIndex_t2688_marshaled& marshaled);
void CacheIndex_t2688_marshal_back(const CacheIndex_t2688_marshaled& marshaled, CacheIndex_t2688& unmarshaled);
void CacheIndex_t2688_marshal_cleanup(CacheIndex_t2688_marshaled& marshaled);
