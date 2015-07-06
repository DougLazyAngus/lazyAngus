#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1078;
struct SkeletonBone_t1078_marshaled;

void SkeletonBone_t1078_marshal(const SkeletonBone_t1078& unmarshaled, SkeletonBone_t1078_marshaled& marshaled);
void SkeletonBone_t1078_marshal_back(const SkeletonBone_t1078_marshaled& marshaled, SkeletonBone_t1078& unmarshaled);
void SkeletonBone_t1078_marshal_cleanup(SkeletonBone_t1078_marshaled& marshaled);
