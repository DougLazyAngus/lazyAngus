#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2805;
struct SkeletonBone_t2805_marshaled;

void SkeletonBone_t2805_marshal(const SkeletonBone_t2805& unmarshaled, SkeletonBone_t2805_marshaled& marshaled);
void SkeletonBone_t2805_marshal_back(const SkeletonBone_t2805_marshaled& marshaled, SkeletonBone_t2805& unmarshaled);
void SkeletonBone_t2805_marshal_cleanup(SkeletonBone_t2805_marshaled& marshaled);
