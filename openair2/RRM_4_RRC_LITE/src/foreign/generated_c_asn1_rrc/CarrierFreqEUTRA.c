/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "CarrierFreqEUTRA.h"

static asn_TYPE_member_t asn_MBR_CarrierFreqEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqEUTRA, dl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqEUTRA, ul_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CarrierFreq"
		},
};
static int asn_MAP_CarrierFreqEUTRA_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_CarrierFreqEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierFreqEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq at 1869 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-CarrierFreq at 1870 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqEUTRA_specs_1 = {
	sizeof(struct CarrierFreqEUTRA),
	offsetof(struct CarrierFreqEUTRA, _asn_ctx),
	asn_MAP_CarrierFreqEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CarrierFreqEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqEUTRA = {
	"CarrierFreqEUTRA",
	"CarrierFreqEUTRA",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CarrierFreqEUTRA_tags_1,
	sizeof(asn_DEF_CarrierFreqEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierFreqEUTRA_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierFreqEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreqEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqEUTRA_specs_1	/* Additional specs */
};

