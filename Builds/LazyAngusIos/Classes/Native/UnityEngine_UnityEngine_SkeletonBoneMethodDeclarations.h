#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2734;
struct SkeletonBone_t2734_marshaled;

void SkeletonBone_t2734_marshal(const SkeletonBone_t2734& unmarshaled, SkeletonBone_t2734_marshaled& marshaled);
void SkeletonBone_t2734_marshal_back(const SkeletonBone_t2734_marshaled& marshaled, SkeletonBone_t2734& unmarshaled);
void SkeletonBone_t2734_marshal_cleanup(SkeletonBone_t2734_marshaled& marshaled);
