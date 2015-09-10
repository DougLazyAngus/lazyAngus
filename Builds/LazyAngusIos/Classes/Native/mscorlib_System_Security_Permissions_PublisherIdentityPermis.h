#pragma once
#include <stdint.h>
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3232;
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t5316  : public CodeAccessPermission_t5237
{
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t3232 * ___x509_0;
};
