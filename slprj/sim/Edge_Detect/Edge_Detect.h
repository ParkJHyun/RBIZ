#include "__cf_Edge_Detect.h"
#ifndef RTW_HEADER_Edge_Detect_h_
#define RTW_HEADER_Edge_Detect_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Edge_Detect_COMMON_INCLUDES_
#define Edge_Detect_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Edge_Detect_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real32_T pqtzr2jyqm [ 281600 ] ; real32_T lhi5vhk5ly [
281600 ] ; real32_T ls01dwr3oj [ 921600 ] ; real32_T e3vxywm5cf [ 281600 ] ;
boolean_T fei0qvuicn [ 281600 ] ; } e3i5wpcrtj ; typedef struct { real32_T
ex3ddzfw0l [ 2764800 ] ; real32_T jkz1dmnjlz [ 281600 ] ; real32_T j2c1zccvmm
[ 281600 ] ; real32_T mkqejx2fbb [ 281600 ] ; real32_T nefsgukubs ; int32_T
i3vw4qmhfc [ 6 ] ; int32_T g5o3nva520 [ 6 ] ; int32_T grresqkzfe [ 6 ] ;
int32_T oneofifd3l [ 6 ] ; int32_T b3drdrgpzu [ 6 ] ; int32_T ib01jgpnhu [ 6
] ; int32_T ptksmpc1ct [ 6 ] ; int32_T e03rw12zua [ 6 ] ; int32_T osjlku4d5o
[ 6 ] ; int32_T nrx5gphl25 [ 6 ] ; int32_T bbe4kixblz [ 6 ] ; int32_T
foujm3y5vc [ 6 ] ; int32_T erdi3jjm30 [ 6 ] ; int32_T i13v4oqmw1 [ 6 ] ;
int32_T ca12tktmfe [ 6 ] ; int32_T ijmp033z0v [ 6 ] ; int32_T edb50dybyl [ 6
] ; int32_T koqgwcxopi [ 6 ] ; } i4zifcr1xa ; struct f4pca2wkaoz_ { real32_T
P_0 ; } ; struct czzg0vkgzg { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { e3i5wpcrtj rtb ; i4zifcr1xa rtdw ; ialue22ooy rtm ; }
nj3kg0czn2q ; extern void gvipj2gzxb ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , ialue22ooy * const cay1qbx2yb , e3i5wpcrtj * localB ,
i4zifcr1xa * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Edge_Detect_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_Edge_Detect_GetDWork ( const
nj3kg0czn2q * mdlrefDW ) ; extern void mr_Edge_Detect_SetDWork ( nj3kg0czn2q
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Edge_Detect_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_Edge_Detect_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Edge_Detect_GetCAPIStaticMap ( void ) ;
extern void ern2x24lih ( i4zifcr1xa * localDW ) ; extern void Edge_Detect (
const real32_T cheve0hzyz [ 2764800 ] , boolean_T oj00zjf1um [ 281600 ] ,
e3i5wpcrtj * localB , i4zifcr1xa * localDW ) ; extern void cdbir4twvx (
ialue22ooy * const cay1qbx2yb ) ;
#endif
