#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t2732;
struct SkeletonBone_t2732_marshaled;

void SkeletonBone_t2732_marshal(const SkeletonBone_t2732& unmarshaled, SkeletonBone_t2732_marshaled& marshaled);
void SkeletonBone_t2732_marshal_back(const SkeletonBone_t2732_marshaled& marshaled, SkeletonBone_t2732& unmarshaled);
void SkeletonBone_t2732_marshal_cleanup(SkeletonBone_t2732_marshaled& marshaled);
