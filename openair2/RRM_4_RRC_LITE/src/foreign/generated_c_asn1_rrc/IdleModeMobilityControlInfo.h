/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IdleModeMobilityControlInfo_H_
#define	_IdleModeMobilityControlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IdleModeMobilityControlInfo__t320 {
	IdleModeMobilityControlInfo__t320_min5	= 0,
	IdleModeMobilityControlInfo__t320_min10	= 1,
	IdleModeMobilityControlInfo__t320_min20	= 2,
	IdleModeMobilityControlInfo__t320_min30	= 3,
	IdleModeMobilityControlInfo__t320_min60	= 4,
	IdleModeMobilityControlInfo__t320_min120	= 5,
	IdleModeMobilityControlInfo__t320_min180	= 6,
	IdleModeMobilityControlInfo__t320_spare1	= 7
} e_IdleModeMobilityControlInfo__t320;

/* Forward declarations */
struct FreqPriorityListEUTRA;
struct FreqsPriorityListGERAN;
struct FreqPriorityListUTRA_FDD;
struct FreqPriorityListUTRA_TDD;
struct BandClassPriorityListHRPD;
struct BandClassPriorityList1XRTT;

/* IdleModeMobilityControlInfo */
typedef struct IdleModeMobilityControlInfo {
	struct FreqPriorityListEUTRA	*freqPriorityListEUTRA	/* OPTIONAL */;
	struct FreqsPriorityListGERAN	*freqPriorityListGERAN	/* OPTIONAL */;
	struct FreqPriorityListUTRA_FDD	*freqPriorityListUTRA_FDD	/* OPTIONAL */;
	struct FreqPriorityListUTRA_TDD	*freqPriorityListUTRA_TDD	/* OPTIONAL */;
	struct BandClassPriorityListHRPD	*bandClassPriorityListHRPD	/* OPTIONAL */;
	struct BandClassPriorityList1XRTT	*bandClassPriorityList1XRTT	/* OPTIONAL */;
	long	*t320	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IdleModeMobilityControlInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t320_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IdleModeMobilityControlInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FreqPriorityListEUTRA.h"
#include "FreqsPriorityListGERAN.h"
#include "FreqPriorityListUTRA-FDD.h"
#include "FreqPriorityListUTRA-TDD.h"
#include "BandClassPriorityListHRPD.h"
#include "BandClassPriorityList1XRTT.h"

#endif	/* _IdleModeMobilityControlInfo_H_ */
#include <asn_internal.h>
