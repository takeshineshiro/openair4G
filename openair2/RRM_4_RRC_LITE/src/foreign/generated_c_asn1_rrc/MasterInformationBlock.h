/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MasterInformationBlock_H_
#define	_MasterInformationBlock_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "PHICH-Config.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MasterInformationBlock__dl_Bandwidth {
	MasterInformationBlock__dl_Bandwidth_n6	= 0,
	MasterInformationBlock__dl_Bandwidth_n15	= 1,
	MasterInformationBlock__dl_Bandwidth_n25	= 2,
	MasterInformationBlock__dl_Bandwidth_n50	= 3,
	MasterInformationBlock__dl_Bandwidth_n75	= 4,
	MasterInformationBlock__dl_Bandwidth_n100	= 5
} e_MasterInformationBlock__dl_Bandwidth;

/* MasterInformationBlock */
typedef struct MasterInformationBlock {
	long	 dl_Bandwidth;
	PHICH_Config_t	 phich_Config;
	BIT_STRING_t	 systemFrameNumber;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterInformationBlock_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MasterInformationBlock;

#ifdef __cplusplus
}
#endif

#endif	/* _MasterInformationBlock_H_ */
#include <asn_internal.h>
