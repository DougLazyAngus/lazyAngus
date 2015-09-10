#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2774;
struct CacheIndex_t2774_marshaled;

void CacheIndex_t2774_marshal(const CacheIndex_t2774& unmarshaled, CacheIndex_t2774_marshaled& marshaled);
void CacheIndex_t2774_marshal_back(const CacheIndex_t2774_marshaled& marshaled, CacheIndex_t2774& unmarshaled);
void CacheIndex_t2774_marshal_cleanup(CacheIndex_t2774_marshaled& marshaled);
