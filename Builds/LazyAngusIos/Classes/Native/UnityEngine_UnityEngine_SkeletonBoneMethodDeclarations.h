#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2785;
struct SkeletonBone_t2785_marshaled;

void SkeletonBone_t2785_marshal(const SkeletonBone_t2785& unmarshaled, SkeletonBone_t2785_marshaled& marshaled);
void SkeletonBone_t2785_marshal_back(const SkeletonBone_t2785_marshaled& marshaled, SkeletonBone_t2785& unmarshaled);
void SkeletonBone_t2785_marshal_cleanup(SkeletonBone_t2785_marshaled& marshaled);
