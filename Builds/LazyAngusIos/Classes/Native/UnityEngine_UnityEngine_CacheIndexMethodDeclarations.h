#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2696;
struct CacheIndex_t2696_marshaled;

void CacheIndex_t2696_marshal(const CacheIndex_t2696& unmarshaled, CacheIndex_t2696_marshaled& marshaled);
void CacheIndex_t2696_marshal_back(const CacheIndex_t2696_marshaled& marshaled, CacheIndex_t2696& unmarshaled);
void CacheIndex_t2696_marshal_cleanup(CacheIndex_t2696_marshaled& marshaled);
