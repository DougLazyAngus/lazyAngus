#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1056;
struct SkeletonBone_t1056_marshaled;

void SkeletonBone_t1056_marshal(const SkeletonBone_t1056& unmarshaled, SkeletonBone_t1056_marshaled& marshaled);
void SkeletonBone_t1056_marshal_back(const SkeletonBone_t1056_marshaled& marshaled, SkeletonBone_t1056& unmarshaled);
void SkeletonBone_t1056_marshal_cleanup(SkeletonBone_t1056_marshaled& marshaled);
