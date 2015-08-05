#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2698;
struct CacheIndex_t2698_marshaled;

void CacheIndex_t2698_marshal(const CacheIndex_t2698& unmarshaled, CacheIndex_t2698_marshaled& marshaled);
void CacheIndex_t2698_marshal_back(const CacheIndex_t2698_marshaled& marshaled, CacheIndex_t2698& unmarshaled);
void CacheIndex_t2698_marshal_cleanup(CacheIndex_t2698_marshaled& marshaled);
