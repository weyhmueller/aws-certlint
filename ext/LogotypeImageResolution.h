/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_LogotypeImageResolution_H_
#define	_LogotypeImageResolution_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LogotypeImageResolution_PR {
	LogotypeImageResolution_PR_NOTHING,	/* No components present */
	LogotypeImageResolution_PR_numBits,
	LogotypeImageResolution_PR_tableSize
} LogotypeImageResolution_PR;

/* LogotypeImageResolution */
typedef struct LogotypeImageResolution {
	LogotypeImageResolution_PR present;
	union LogotypeImageResolution_u {
		INTEGER_t	 numBits;
		INTEGER_t	 tableSize;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogotypeImageResolution_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogotypeImageResolution;

#ifdef __cplusplus
}
#endif

#endif	/* _LogotypeImageResolution_H_ */
#include <asn_internal.h>
