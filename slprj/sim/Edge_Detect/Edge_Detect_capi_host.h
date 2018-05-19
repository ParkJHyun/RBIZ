#include "__cf_Edge_Detect.h"
#ifndef RTW_HEADER_Edge_Detect_cap_host_h_
#define RTW_HEADER_Edge_Detect_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Edge_Detect_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Edge_Detect_host_InitializeDataMapInfo ( Edge_Detect_host_DataMapInfo_T
* dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
