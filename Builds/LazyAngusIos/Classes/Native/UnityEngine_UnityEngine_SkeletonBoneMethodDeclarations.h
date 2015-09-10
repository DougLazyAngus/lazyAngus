#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2812;
struct SkeletonBone_t2812_marshaled;

void SkeletonBone_t2812_marshal(const SkeletonBone_t2812& unmarshaled, SkeletonBone_t2812_marshaled& marshaled);
void SkeletonBone_t2812_marshal_back(const SkeletonBone_t2812_marshaled& marshaled, SkeletonBone_t2812& unmarshaled);
void SkeletonBone_t2812_marshal_cleanup(SkeletonBone_t2812_marshaled& marshaled);
