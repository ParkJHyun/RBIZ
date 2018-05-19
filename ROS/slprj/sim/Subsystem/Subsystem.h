#include "__cf_Subsystem.h"
#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Subsystem_COMMON_INCLUDES_
#define Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Subsystem_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
typedef struct { real32_T ay4u1wq1za [ 409600 ] ; real32_T l5fic42hxf [
409600 ] ; real32_T isu3uhkbxs [ 921600 ] ; real32_T cqs0xkvtdt [ 409600 ] ;
boolean_T pj01wvmsql [ 409600 ] ; } lwnfj3a5x3 ; typedef struct { real32_T
mlvmokvlrq [ 2764800 ] ; real32_T axujtlevjr [ 409600 ] ; real32_T dvxfbmlbgl
[ 409600 ] ; real32_T k3qe1q2sdl [ 409600 ] ; real32_T p4zyxbkcrc ; int32_T
nm3uypcaqv [ 6 ] ; int32_T g3bz1bvx5n [ 6 ] ; int32_T a0jgpf34pv [ 6 ] ;
int32_T m0vw0jkdiv [ 6 ] ; int32_T ow1nprdlus [ 6 ] ; int32_T aoub4yj0pd [ 6
] ; int32_T dja4ojuvi3 [ 6 ] ; int32_T kntonvsr5y [ 6 ] ; int32_T bfmblepu1d
[ 6 ] ; int32_T hixqwgp03n [ 6 ] ; int32_T m1zagbqjnn [ 6 ] ; int32_T
ipsvemx14a [ 6 ] ; int32_T owxhpsmadt [ 6 ] ; int32_T dxcukftslk [ 6 ] ;
int32_T p30htlbpse [ 6 ] ; int32_T nreevljcqk [ 6 ] ; int32_T lz30nsnxjo [ 6
] ; int32_T cqdxuamzto [ 6 ] ; } p54ca2qtpw ; struct epnkfcn23ox_ { real32_T
P_0 ; } ; struct ffnzdxzx2l { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { lwnfj3a5x3 rtb ; p54ca2qtpw rtdw ; dhfqeartud rtm ; }
lv5k3yfyktq ; extern void ffkf2sfekd ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , dhfqeartud * const aubz52bxjg , lwnfj3a5x3 * localB ,
p54ca2qtpw * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Subsystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_Subsystem_GetDWork ( const lv5k3yfyktq
* mdlrefDW ) ; extern void mr_Subsystem_SetDWork ( lv5k3yfyktq * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_Subsystem_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_Subsystem_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * Subsystem_GetCAPIStaticMap
( void ) ; extern void er2wgkaxlg ( p54ca2qtpw * localDW ) ; extern void
Subsystem ( const real32_T pzpc5siw1f [ 2764800 ] , boolean_T j5dwzohnv5 [
409600 ] , lwnfj3a5x3 * localB , p54ca2qtpw * localDW ) ; extern void
cjev2n2srg ( dhfqeartud * const aubz52bxjg ) ;
#endif
