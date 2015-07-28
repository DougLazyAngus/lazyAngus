#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2726;
struct SkeletonBone_t2726_marshaled;

void SkeletonBone_t2726_marshal(const SkeletonBone_t2726& unmarshaled, SkeletonBone_t2726_marshaled& marshaled);
void SkeletonBone_t2726_marshal_back(const SkeletonBone_t2726_marshaled& marshaled, SkeletonBone_t2726& unmarshaled);
void SkeletonBone_t2726_marshal_cleanup(SkeletonBone_t2726_marshaled& marshaled);
