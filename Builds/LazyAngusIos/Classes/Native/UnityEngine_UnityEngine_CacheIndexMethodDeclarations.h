#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1123;
struct CacheIndex_t1123_marshaled;

void CacheIndex_t1123_marshal(const CacheIndex_t1123& unmarshaled, CacheIndex_t1123_marshaled& marshaled);
void CacheIndex_t1123_marshal_back(const CacheIndex_t1123_marshaled& marshaled, CacheIndex_t1123& unmarshaled);
void CacheIndex_t1123_marshal_cleanup(CacheIndex_t1123_marshaled& marshaled);
