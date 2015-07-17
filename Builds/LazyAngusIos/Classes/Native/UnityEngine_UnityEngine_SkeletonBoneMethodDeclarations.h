#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1156;
struct SkeletonBone_t1156_marshaled;

void SkeletonBone_t1156_marshal(const SkeletonBone_t1156& unmarshaled, SkeletonBone_t1156_marshaled& marshaled);
void SkeletonBone_t1156_marshal_back(const SkeletonBone_t1156_marshaled& marshaled, SkeletonBone_t1156& unmarshaled);
void SkeletonBone_t1156_marshal_cleanup(SkeletonBone_t1156_marshaled& marshaled);
