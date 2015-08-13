#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2784;
struct SkeletonBone_t2784_marshaled;

void SkeletonBone_t2784_marshal(const SkeletonBone_t2784& unmarshaled, SkeletonBone_t2784_marshaled& marshaled);
void SkeletonBone_t2784_marshal_back(const SkeletonBone_t2784_marshaled& marshaled, SkeletonBone_t2784& unmarshaled);
void SkeletonBone_t2784_marshal_cleanup(SkeletonBone_t2784_marshaled& marshaled);
