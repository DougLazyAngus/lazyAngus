#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1111;
struct SkeletonBone_t1111_marshaled;

void SkeletonBone_t1111_marshal(const SkeletonBone_t1111& unmarshaled, SkeletonBone_t1111_marshaled& marshaled);
void SkeletonBone_t1111_marshal_back(const SkeletonBone_t1111_marshaled& marshaled, SkeletonBone_t1111& unmarshaled);
void SkeletonBone_t1111_marshal_cleanup(SkeletonBone_t1111_marshaled& marshaled);
