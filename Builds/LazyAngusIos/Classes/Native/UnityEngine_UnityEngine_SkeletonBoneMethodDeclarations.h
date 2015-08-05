#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2735;
struct SkeletonBone_t2735_marshaled;

void SkeletonBone_t2735_marshal(const SkeletonBone_t2735& unmarshaled, SkeletonBone_t2735_marshaled& marshaled);
void SkeletonBone_t2735_marshal_back(const SkeletonBone_t2735_marshaled& marshaled, SkeletonBone_t2735& unmarshaled);
void SkeletonBone_t2735_marshal_cleanup(SkeletonBone_t2735_marshaled& marshaled);
