#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1158;
struct SkeletonBone_t1158_marshaled;

void SkeletonBone_t1158_marshal(const SkeletonBone_t1158& unmarshaled, SkeletonBone_t1158_marshaled& marshaled);
void SkeletonBone_t1158_marshal_back(const SkeletonBone_t1158_marshaled& marshaled, SkeletonBone_t1158& unmarshaled);
void SkeletonBone_t1158_marshal_cleanup(SkeletonBone_t1158_marshaled& marshaled);
