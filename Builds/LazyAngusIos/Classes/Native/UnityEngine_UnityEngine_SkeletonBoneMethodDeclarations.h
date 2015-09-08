#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2802;
struct SkeletonBone_t2802_marshaled;

void SkeletonBone_t2802_marshal(const SkeletonBone_t2802& unmarshaled, SkeletonBone_t2802_marshaled& marshaled);
void SkeletonBone_t2802_marshal_back(const SkeletonBone_t2802_marshaled& marshaled, SkeletonBone_t2802& unmarshaled);
void SkeletonBone_t2802_marshal_cleanup(SkeletonBone_t2802_marshaled& marshaled);
