#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1101;
struct SkeletonBone_t1101_marshaled;

void SkeletonBone_t1101_marshal(const SkeletonBone_t1101& unmarshaled, SkeletonBone_t1101_marshaled& marshaled);
void SkeletonBone_t1101_marshal_back(const SkeletonBone_t1101_marshaled& marshaled, SkeletonBone_t1101& unmarshaled);
void SkeletonBone_t1101_marshal_cleanup(SkeletonBone_t1101_marshaled& marshaled);
