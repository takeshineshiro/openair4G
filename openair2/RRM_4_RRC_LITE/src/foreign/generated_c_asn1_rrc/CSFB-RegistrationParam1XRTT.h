/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CSFB_RegistrationParam1XRTT_H_
#define	_CSFB_RegistrationParam1XRTT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSFB-RegistrationParam1XRTT */
typedef struct CSFB_RegistrationParam1XRTT {
	BIT_STRING_t	 sid;
	BIT_STRING_t	 nid;
	BOOLEAN_t	 multipleSID;
	BOOLEAN_t	 multipleNID;
	BOOLEAN_t	 homeReg;
	BOOLEAN_t	 foreignSIDReg;
	BOOLEAN_t	 foreignNIDReg;
	BOOLEAN_t	 parameterReg;
	BOOLEAN_t	 powerUpReg;
	BIT_STRING_t	 registrationPeriod;
	BIT_STRING_t	 registrationZone;
	BIT_STRING_t	 totalZone;
	BIT_STRING_t	 zoneTimer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSFB_RegistrationParam1XRTT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSFB_RegistrationParam1XRTT;

#ifdef __cplusplus
}
#endif

#endif	/* _CSFB_RegistrationParam1XRTT_H_ */
#include <asn_internal.h>
