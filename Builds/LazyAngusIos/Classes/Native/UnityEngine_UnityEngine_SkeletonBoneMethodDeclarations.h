#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2736;
struct SkeletonBone_t2736_marshaled;

void SkeletonBone_t2736_marshal(const SkeletonBone_t2736& unmarshaled, SkeletonBone_t2736_marshaled& marshaled);
void SkeletonBone_t2736_marshal_back(const SkeletonBone_t2736_marshaled& marshaled, SkeletonBone_t2736& unmarshaled);
void SkeletonBone_t2736_marshal_cleanup(SkeletonBone_t2736_marshaled& marshaled);
