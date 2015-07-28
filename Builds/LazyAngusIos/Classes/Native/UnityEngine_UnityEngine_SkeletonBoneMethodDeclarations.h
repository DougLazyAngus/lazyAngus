#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2725;
struct SkeletonBone_t2725_marshaled;

void SkeletonBone_t2725_marshal(const SkeletonBone_t2725& unmarshaled, SkeletonBone_t2725_marshaled& marshaled);
void SkeletonBone_t2725_marshal_back(const SkeletonBone_t2725_marshaled& marshaled, SkeletonBone_t2725& unmarshaled);
void SkeletonBone_t2725_marshal_cleanup(SkeletonBone_t2725_marshaled& marshaled);
