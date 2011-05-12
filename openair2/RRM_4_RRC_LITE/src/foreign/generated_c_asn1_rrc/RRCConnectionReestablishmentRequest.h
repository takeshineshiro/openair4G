/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReestablishmentRequest_H_
#define	_RRCConnectionReestablishmentRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishmentRequest-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionReestablishmentRequest__criticalExtensions_PR {
	RRCConnectionReestablishmentRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCConnectionReestablishmentRequest__criticalExtensions_PR_rrcConnectionReestablishmentRequest_r8,
	RRCConnectionReestablishmentRequest__criticalExtensions_PR_criticalExtensionsFuture
} RRCConnectionReestablishmentRequest__criticalExtensions_PR;

/* RRCConnectionReestablishmentRequest */
typedef struct RRCConnectionReestablishmentRequest {
	struct RRCConnectionReestablishmentRequest__criticalExtensions {
		RRCConnectionReestablishmentRequest__criticalExtensions_PR present;
		union RRCConnectionReestablishmentRequest__criticalExtensions_u {
			RRCConnectionReestablishmentRequest_r8_IEs_t	 rrcConnectionReestablishmentRequest_r8;
			struct RRCConnectionReestablishmentRequest__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReestablishmentRequest_H_ */
#include <asn_internal.h>
