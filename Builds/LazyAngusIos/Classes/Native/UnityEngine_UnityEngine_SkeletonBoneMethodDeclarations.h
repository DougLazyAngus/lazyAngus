#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1157;
struct SkeletonBone_t1157_marshaled;

void SkeletonBone_t1157_marshal(const SkeletonBone_t1157& unmarshaled, SkeletonBone_t1157_marshaled& marshaled);
void SkeletonBone_t1157_marshal_back(const SkeletonBone_t1157_marshaled& marshaled, SkeletonBone_t1157& unmarshaled);
void SkeletonBone_t1157_marshal_cleanup(SkeletonBone_t1157_marshaled& marshaled);
