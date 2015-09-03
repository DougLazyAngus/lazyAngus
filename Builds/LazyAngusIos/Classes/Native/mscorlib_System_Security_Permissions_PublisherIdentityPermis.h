#pragma once
#include <stdint.h>
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3221;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t5305  : public CodeAccessPermission_t5226
{
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t3221 * ___x509_0;
};
