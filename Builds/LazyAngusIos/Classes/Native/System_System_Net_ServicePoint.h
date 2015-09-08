#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t775;
// System.Version
struct Version_t1405;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3225;
// System.Net.IPHostEntry
struct IPHostEntry_t4372;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Object
struct Object_t;
// System.Net.BindIPEndPoint
struct BindIPEndPoint_t4398;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.ServicePoint
struct  ServicePoint_t3280  : public Object_t
{
	// System.Uri System.Net.ServicePoint::uri
	Uri_t775 * ___uri_0;
	// System.Int32 System.Net.ServicePoint::connectionLimit
	int32_t ___connectionLimit_1;
	// System.Int32 System.Net.ServicePoint::maxIdleTime
	int32_t ___maxIdleTime_2;
	// System.Int32 System.Net.ServicePoint::currentConnections
	int32_t ___currentConnections_3;
	// System.DateTime System.Net.ServicePoint::idleSince
	DateTime_t287  ___idleSince_4;
	// System.Version System.Net.ServicePoint::protocolVersion
	Version_t1405 * ___protocolVersion_5;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::certificate
	X509Certificate_t3225 * ___certificate_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::clientCertificate
	X509Certificate_t3225 * ___clientCertificate_7;
	// System.Net.IPHostEntry System.Net.ServicePoint::host
	IPHostEntry_t4372 * ___host_8;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy_9;
	// System.Collections.Hashtable System.Net.ServicePoint::groups
	Hashtable_t714 * ___groups_10;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue_11;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect_12;
	// System.Object System.Net.ServicePoint::locker
	Object_t * ___locker_13;
	// System.Object System.Net.ServicePoint::hostE
	Object_t * ___hostE_14;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle_15;
	// System.Net.BindIPEndPoint System.Net.ServicePoint::endPointCallback
	BindIPEndPoint_t4398 * ___endPointCallback_16;
};
