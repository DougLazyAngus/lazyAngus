#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1103;
struct SkeletonBone_t1103_marshaled;

void SkeletonBone_t1103_marshal(const SkeletonBone_t1103& unmarshaled, SkeletonBone_t1103_marshaled& marshaled);
void SkeletonBone_t1103_marshal_back(const SkeletonBone_t1103_marshaled& marshaled, SkeletonBone_t1103& unmarshaled);
void SkeletonBone_t1103_marshal_cleanup(SkeletonBone_t1103_marshaled& marshaled);
