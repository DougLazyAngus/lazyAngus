#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2801;
struct SkeletonBone_t2801_marshaled;

void SkeletonBone_t2801_marshal(const SkeletonBone_t2801& unmarshaled, SkeletonBone_t2801_marshaled& marshaled);
void SkeletonBone_t2801_marshal_back(const SkeletonBone_t2801_marshaled& marshaled, SkeletonBone_t2801& unmarshaled);
void SkeletonBone_t2801_marshal_cleanup(SkeletonBone_t2801_marshaled& marshaled);
