/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RadioResourceConfigCommon_H_
#define	_RadioResourceConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PRACH-Config.h"
#include "PUSCH-ConfigCommon.h"
#include "P-Max.h"
#include "UL-CyclicPrefixLength.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RACH_ConfigCommon;
struct PDSCH_ConfigCommon;
struct PHICH_Config;
struct PUCCH_ConfigCommon;
struct SoundingRS_UL_ConfigCommon;
struct UplinkPowerControlCommon;
struct AntennaInfoCommon;
struct TDD_Config;

/* RadioResourceConfigCommon */
typedef struct RadioResourceConfigCommon {
	struct RACH_ConfigCommon	*rach_ConfigCommon	/* OPTIONAL */;
	PRACH_Config_t	 prach_Config;
	struct PDSCH_ConfigCommon	*pdsch_ConfigCommon	/* OPTIONAL */;
	PUSCH_ConfigCommon_t	 pusch_ConfigCommon;
	struct PHICH_Config	*phich_Config	/* OPTIONAL */;
	struct PUCCH_ConfigCommon	*pucch_ConfigCommon	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigCommon	*soundingRS_UL_ConfigCommon	/* OPTIONAL */;
	struct UplinkPowerControlCommon	*uplinkPowerControlCommon	/* OPTIONAL */;
	struct AntennaInfoCommon	*antennaInfoCommon	/* OPTIONAL */;
	P_Max_t	*p_Max	/* OPTIONAL */;
	struct TDD_Config	*tdd_Config	/* OPTIONAL */;
	UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioResourceConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigCommon;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RACH-ConfigCommon.h"
#include "PDSCH-ConfigCommon.h"
#include "PHICH-Config.h"
#include "PUCCH-ConfigCommon.h"
#include "SoundingRS-UL-ConfigCommon.h"
#include "UplinkPowerControlCommon.h"
#include "AntennaInfoCommon.h"
#include "TDD-Config.h"

#endif	/* _RadioResourceConfigCommon_H_ */
#include <asn_internal.h>
