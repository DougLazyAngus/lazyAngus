#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GP_RTM_Network_Package
struct GP_RTM_Network_Package_t189;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t36;

// System.Void GP_RTM_Network_Package::.ctor(System.String,System.String)
extern "C" void GP_RTM_Network_Package__ctor_m1067 (GP_RTM_Network_Package_t189 * __this, String_t* ___player, String_t* ___recievedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GP_RTM_Network_Package::get_participantId()
extern "C" String_t* GP_RTM_Network_Package_get_participantId_m1068 (GP_RTM_Network_Package_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GP_RTM_Network_Package::get_buffer()
extern "C" ByteU5BU5D_t36* GP_RTM_Network_Package_get_buffer_m1069 (GP_RTM_Network_Package_t189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GP_RTM_Network_Package::ConvertStringToByteData(System.String)
extern "C" ByteU5BU5D_t36* GP_RTM_Network_Package_ConvertStringToByteData_m1070 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
