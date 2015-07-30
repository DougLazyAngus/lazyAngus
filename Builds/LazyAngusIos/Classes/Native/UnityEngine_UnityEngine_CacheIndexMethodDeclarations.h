#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2694;
struct CacheIndex_t2694_marshaled;

void CacheIndex_t2694_marshal(const CacheIndex_t2694& unmarshaled, CacheIndex_t2694_marshaled& marshaled);
void CacheIndex_t2694_marshal_back(const CacheIndex_t2694_marshaled& marshaled, CacheIndex_t2694& unmarshaled);
void CacheIndex_t2694_marshal_cleanup(CacheIndex_t2694_marshaled& marshaled);
