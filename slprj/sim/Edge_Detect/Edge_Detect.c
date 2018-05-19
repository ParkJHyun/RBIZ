#include "__cf_Edge_Detect.h"
#include "Edge_Detect_capi.h"
#include "Edge_Detect.h"
#include "Edge_Detect_private.h"
static RegMdlInfo rtMdlInfo_Edge_Detect [ 47 ] = { { "nj3kg0czn2q" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"gbchmmotl5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "gmd0chs0p5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "prxgcbsuep" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"fdgwtcztfb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "aojjc25h3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "irb4mo1ckr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"kwmf1f24om" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "ntq3f42ojf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "bchpuoddsj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"i4zifcr1xa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "e3i5wpcrtj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "lqgowdqhsl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"cdbir4twvx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "bxiopgh2vr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "neaesb4uu0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"akyeifbrlh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "gvipj2gzxb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "ern2x24lih" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"ifigzolx4z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "Edge_Detect" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( NULL ) } , { "peeew1viovc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "Edge_Detect" } , { "c124grfbls0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"puzrgcwez3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "km0gp0znfgq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "Edge_Detect" } , { "nwzfoq433ys" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"ol4km1bi4o4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "peeew1viov" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "c124grfbls" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"km0gp0znfg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"Edge_Detect" } , { "czzg0vkgzg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "Edge_Detect" } , { "ialue22ooy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"struct_WLOnDAJlMFi5IZVHs48dt" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "mr_Edge_Detect_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "Edge_Detect" } , { "mr_Edge_Detect_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "Edge_Detect" } , { "mr_Edge_Detect_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "Edge_Detect" } , {
"mr_Edge_Detect_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"Edge_Detect" } , { "mr_Edge_Detect_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "Edge_Detect" } , { "Edge_Detect.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "Edge_Detect.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "Edge_Detect" } } ;
f4pca2wkaoz f4pca2wkao = { 4.0F } ; void ern2x24lih ( i4zifcr1xa * localDW )
{ int32_T nonZeroIdx ; int32_T i3vw4qmhfc_tmp ; localDW -> nefsgukubs =
3.55113639E-6F ; for ( nonZeroIdx = 0 ; nonZeroIdx < 6 ; nonZeroIdx ++ ) {
i3vw4qmhfc_tmp = km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] * 220 + km0gp0znfgq
. dhp0fb2z3y [ nonZeroIdx ] ; localDW -> i3vw4qmhfc [ nonZeroIdx ] =
i3vw4qmhfc_tmp ; if ( km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] > 0 ) { localDW
-> grresqkzfe [ nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> oneofifd3l [
nonZeroIdx ] = km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] * 220 ; } else {
localDW -> grresqkzfe [ nonZeroIdx ] = km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx
] * 220 ; localDW -> oneofifd3l [ nonZeroIdx ] = i3vw4qmhfc_tmp ; } if (
km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] > 0 ) { localDW -> b3drdrgpzu [
nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> ib01jgpnhu [ nonZeroIdx ] =
km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] ; } else { localDW -> b3drdrgpzu [
nonZeroIdx ] = km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] ; localDW ->
ib01jgpnhu [ nonZeroIdx ] = i3vw4qmhfc_tmp ; } if ( ( km0gp0znfgq .
dhp0fb2z3y [ nonZeroIdx ] < 0 ) && ( km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ]
< 0 ) ) { localDW -> bbe4kixblz [ nonZeroIdx ] = 0 ; localDW -> i13v4oqmw1 [
nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> foujm3y5vc [ nonZeroIdx ] =
km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] ; localDW -> erdi3jjm30 [ nonZeroIdx
] = km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] * 220 ; } if ( ( km0gp0znfgq .
dhp0fb2z3y [ nonZeroIdx ] >= 0 ) && ( km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ]
< 0 ) ) { localDW -> foujm3y5vc [ nonZeroIdx ] = 0 ; localDW -> erdi3jjm30 [
nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> bbe4kixblz [ nonZeroIdx ] =
km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] ; localDW -> i13v4oqmw1 [ nonZeroIdx
] = km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] * 220 ; } if ( ( km0gp0znfgq .
dhp0fb2z3y [ nonZeroIdx ] < 0 ) && ( km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ]
>= 0 ) ) { localDW -> erdi3jjm30 [ nonZeroIdx ] = 0 ; localDW -> foujm3y5vc [
nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> bbe4kixblz [ nonZeroIdx ] =
km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] * 220 ; localDW -> i13v4oqmw1 [
nonZeroIdx ] = km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] ; } if ( ( km0gp0znfgq
. dhp0fb2z3y [ nonZeroIdx ] >= 0 ) && ( km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx
] >= 0 ) ) { localDW -> i13v4oqmw1 [ nonZeroIdx ] = 0 ; localDW -> bbe4kixblz
[ nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> foujm3y5vc [ nonZeroIdx ] =
km0gp0znfgq . hbjm1n3mfy [ nonZeroIdx ] * 220 ; localDW -> erdi3jjm30 [
nonZeroIdx ] = km0gp0znfgq . dhp0fb2z3y [ nonZeroIdx ] ; } i3vw4qmhfc_tmp =
km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] * 220 + km0gp0znfgq . jvcjz4rtu5 [
nonZeroIdx ] ; localDW -> g5o3nva520 [ nonZeroIdx ] = i3vw4qmhfc_tmp ; if (
km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx ] > 0 ) { localDW -> ptksmpc1ct [
nonZeroIdx ] = i3vw4qmhfc_tmp ; localDW -> e03rw12zua [ nonZeroIdx ] =
km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] * 220 ; } else { localDW ->
ptksmpc1ct [ nonZeroIdx ] = km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] * 220 ;
localDW -> e03rw12zua [ nonZeroIdx ] = i3vw4qmhfc_tmp ; } if ( km0gp0znfgq .
bygsgtmz34 [ nonZeroIdx ] > 0 ) { localDW -> osjlku4d5o [ nonZeroIdx ] =
i3vw4qmhfc_tmp ; localDW -> nrx5gphl25 [ nonZeroIdx ] = km0gp0znfgq .
jvcjz4rtu5 [ nonZeroIdx ] ; } else { localDW -> osjlku4d5o [ nonZeroIdx ] =
km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx ] ; localDW -> nrx5gphl25 [ nonZeroIdx
] = i3vw4qmhfc_tmp ; } if ( ( km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx ] < 0 )
&& ( km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] < 0 ) ) { localDW -> ca12tktmfe
[ nonZeroIdx ] = 0 ; localDW -> koqgwcxopi [ nonZeroIdx ] = i3vw4qmhfc_tmp ;
localDW -> ijmp033z0v [ nonZeroIdx ] = km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx
] ; localDW -> edb50dybyl [ nonZeroIdx ] = km0gp0znfgq . bygsgtmz34 [
nonZeroIdx ] * 220 ; } if ( ( km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx ] >= 0 )
&& ( km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] < 0 ) ) { localDW -> ijmp033z0v
[ nonZeroIdx ] = 0 ; localDW -> edb50dybyl [ nonZeroIdx ] = i3vw4qmhfc_tmp ;
localDW -> ca12tktmfe [ nonZeroIdx ] = km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx
] ; localDW -> koqgwcxopi [ nonZeroIdx ] = km0gp0znfgq . bygsgtmz34 [
nonZeroIdx ] * 220 ; } if ( ( km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx ] < 0 )
&& ( km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] >= 0 ) ) { localDW -> edb50dybyl
[ nonZeroIdx ] = 0 ; localDW -> ijmp033z0v [ nonZeroIdx ] = i3vw4qmhfc_tmp ;
localDW -> ca12tktmfe [ nonZeroIdx ] = km0gp0znfgq . bygsgtmz34 [ nonZeroIdx
] * 220 ; localDW -> koqgwcxopi [ nonZeroIdx ] = km0gp0znfgq . jvcjz4rtu5 [
nonZeroIdx ] ; } if ( ( km0gp0znfgq . jvcjz4rtu5 [ nonZeroIdx ] >= 0 ) && (
km0gp0znfgq . bygsgtmz34 [ nonZeroIdx ] >= 0 ) ) { localDW -> koqgwcxopi [
nonZeroIdx ] = 0 ; localDW -> ca12tktmfe [ nonZeroIdx ] = i3vw4qmhfc_tmp ;
localDW -> ijmp033z0v [ nonZeroIdx ] = km0gp0znfgq . bygsgtmz34 [ nonZeroIdx
] * 220 ; localDW -> edb50dybyl [ nonZeroIdx ] = km0gp0znfgq . jvcjz4rtu5 [
nonZeroIdx ] ; } } } void Edge_Detect ( const real32_T cheve0hzyz [ 2764800 ]
, boolean_T oj00zjf1um [ 281600 ] , e3i5wpcrtj * localB , i4zifcr1xa *
localDW ) { int32_T imgRow ; int32_T m ; boolean_T b4 ; boolean_T b3 ;
boolean_T b2 ; boolean_T b1 ; real32_T accumOne ; real32_T accumTwo ; int32_T
numElem ; real32_T accumFour ; real32_T accumThree ; int32_T imgIdx_d ; for (
numElem = 0 ; numElem < 921600 ; numElem ++ ) { localB -> ls01dwr3oj [
numElem ] = ( cheve0hzyz [ 921600 + numElem ] * 0.587F + cheve0hzyz [ numElem
] * 0.299F ) + cheve0hzyz [ 1843200 + numElem ] * 0.114F ; if ( localB ->
ls01dwr3oj [ numElem ] > 1.0F ) { localB -> ls01dwr3oj [ numElem ] = 1.0F ; }
else { if ( localB -> ls01dwr3oj [ numElem ] < 0.0F ) { localB -> ls01dwr3oj
[ numElem ] = 0.0F ; } } } for ( imgRow = 0 ; imgRow < 1280 ; imgRow ++ ) {
memcpy ( & localB -> e3vxywm5cf [ imgRow * 220 ] , & localB -> ls01dwr3oj [
imgRow * 720 + 500 ] , 220U * sizeof ( real32_T ) ) ; } for ( numElem = 0 ;
numElem < 1278 ; numElem ++ ) { for ( imgRow = 0 ; imgRow < 218 ; imgRow ++ )
{ accumOne = 0.0F ; accumTwo = 0.0F ; imgIdx_d = ( ( numElem + 1 ) * 220 +
imgRow ) + 1 ; for ( m = 0 ; m < 6 ; m ++ ) { accumOne += localB ->
e3vxywm5cf [ imgIdx_d + localDW -> i3vw4qmhfc [ m ] ] * km0gp0znfgq .
llgo0iirpb [ m ] ; accumTwo += localB -> e3vxywm5cf [ imgIdx_d + localDW ->
g5o3nva520 [ m ] ] * km0gp0znfgq . ecluwc1s52 [ m ] ; } localB -> pqtzr2jyqm
[ imgIdx_d ] = accumOne ; localB -> lhi5vhk5ly [ imgIdx_d ] = accumTwo ; } }
for ( numElem = 0 ; numElem < 1278 ; numElem ++ ) { accumOne = 0.0F ;
accumTwo = 0.0F ; accumThree = 0.0F ; accumFour = 0.0F ; imgRow = ( numElem +
1 ) * 220 ; imgIdx_d = ( numElem + 1 ) * 220 + 219 ; for ( m = 0 ; m < 6 ; m
++ ) { accumOne += localB -> e3vxywm5cf [ imgRow + localDW -> ptksmpc1ct [ m
] ] * km0gp0znfgq . ecluwc1s52 [ m ] ; accumTwo += localB -> e3vxywm5cf [
imgIdx_d + localDW -> e03rw12zua [ m ] ] * km0gp0znfgq . ecluwc1s52 [ m ] ;
accumThree += localB -> e3vxywm5cf [ imgRow + localDW -> grresqkzfe [ m ] ] *
km0gp0znfgq . llgo0iirpb [ m ] ; accumFour += localB -> e3vxywm5cf [ imgIdx_d
+ localDW -> oneofifd3l [ m ] ] * km0gp0znfgq . llgo0iirpb [ m ] ; } localB
-> pqtzr2jyqm [ imgRow ] = accumThree ; localB -> lhi5vhk5ly [ imgRow ] =
accumOne ; localB -> pqtzr2jyqm [ imgIdx_d ] = accumFour ; localB ->
lhi5vhk5ly [ imgIdx_d ] = accumTwo ; } for ( imgRow = 0 ; imgRow < 218 ;
imgRow ++ ) { accumOne = 0.0F ; accumTwo = 0.0F ; accumThree = 0.0F ;
accumFour = 0.0F ; for ( m = 0 ; m < 6 ; m ++ ) { accumOne += localB ->
e3vxywm5cf [ ( imgRow + localDW -> b3drdrgpzu [ m ] ) + 1 ] * km0gp0znfgq .
llgo0iirpb [ m ] ; accumTwo += localB -> e3vxywm5cf [ ( imgRow + localDW ->
ib01jgpnhu [ m ] ) + 281381 ] * km0gp0znfgq . llgo0iirpb [ m ] ; accumThree
+= localB -> e3vxywm5cf [ ( imgRow + localDW -> osjlku4d5o [ m ] ) + 1 ] *
km0gp0znfgq . ecluwc1s52 [ m ] ; accumFour += localB -> e3vxywm5cf [ ( imgRow
+ localDW -> nrx5gphl25 [ m ] ) + 281381 ] * km0gp0znfgq . ecluwc1s52 [ m ] ;
} localB -> pqtzr2jyqm [ imgRow + 1 ] = accumOne ; localB -> lhi5vhk5ly [
imgRow + 1 ] = accumThree ; localB -> pqtzr2jyqm [ 281381 + imgRow ] =
accumTwo ; localB -> lhi5vhk5ly [ 281381 + imgRow ] = accumFour ; } accumOne
= 0.0F ; accumTwo = 0.0F ; accumThree = 0.0F ; accumFour = 0.0F ; for ( m = 0
; m < 6 ; m ++ ) { accumOne += localB -> e3vxywm5cf [ localDW -> bbe4kixblz [
m ] ] * km0gp0znfgq . llgo0iirpb [ m ] ; accumTwo += localB -> e3vxywm5cf [
localDW -> ca12tktmfe [ m ] ] * km0gp0znfgq . ecluwc1s52 [ m ] ; accumThree
+= localB -> e3vxywm5cf [ 219 + localDW -> foujm3y5vc [ m ] ] * km0gp0znfgq .
llgo0iirpb [ m ] ; accumFour += localB -> e3vxywm5cf [ 219 + localDW ->
ijmp033z0v [ m ] ] * km0gp0znfgq . ecluwc1s52 [ m ] ; } localB -> pqtzr2jyqm
[ 0 ] = accumOne ; localB -> lhi5vhk5ly [ 0 ] = accumTwo ; localB ->
pqtzr2jyqm [ 219 ] = accumThree ; localB -> lhi5vhk5ly [ 219 ] = accumFour ;
accumOne = 0.0F ; accumTwo = 0.0F ; accumThree = 0.0F ; accumFour = 0.0F ;
for ( m = 0 ; m < 6 ; m ++ ) { accumOne += localB -> e3vxywm5cf [ 281380 +
localDW -> erdi3jjm30 [ m ] ] * km0gp0znfgq . llgo0iirpb [ m ] ; accumTwo +=
localB -> e3vxywm5cf [ 281380 + localDW -> edb50dybyl [ m ] ] * km0gp0znfgq .
ecluwc1s52 [ m ] ; accumThree += localB -> e3vxywm5cf [ 281599 + localDW ->
i13v4oqmw1 [ m ] ] * km0gp0znfgq . llgo0iirpb [ m ] ; accumFour += localB ->
e3vxywm5cf [ 281599 + localDW -> koqgwcxopi [ m ] ] * km0gp0znfgq .
ecluwc1s52 [ m ] ; } localB -> pqtzr2jyqm [ 281380 ] = accumOne ; localB ->
lhi5vhk5ly [ 281380 ] = accumTwo ; localB -> pqtzr2jyqm [ 281599 ] =
accumThree ; localB -> lhi5vhk5ly [ 281599 ] = accumFour ; accumTwo = 0.0F ;
for ( m = 0 ; m < 281600 ; m ++ ) { localDW -> j2c1zccvmm [ m ] = localB ->
pqtzr2jyqm [ m ] * localB -> pqtzr2jyqm [ m ] ; localDW -> jkz1dmnjlz [ m ] =
localB -> lhi5vhk5ly [ m ] * localB -> lhi5vhk5ly [ m ] ; localDW ->
mkqejx2fbb [ m ] = localDW -> j2c1zccvmm [ m ] ; localDW -> mkqejx2fbb [ m ]
+= localDW -> jkz1dmnjlz [ m ] ; accumTwo += localDW -> mkqejx2fbb [ m ] *
localDW -> nefsgukubs ; } accumOne = f4pca2wkao . P_0 * accumTwo ; for (
numElem = 0 ; numElem < 1280 ; numElem ++ ) { for ( imgRow = 0 ; imgRow < 220
; imgRow ++ ) { m = numElem * 220 + imgRow ; b1 = true ; b2 = true ; b3 =
true ; b4 = true ; if ( numElem != 0 ) { b1 = ( localDW -> mkqejx2fbb [ m -
220 ] <= localDW -> mkqejx2fbb [ m ] ) ; } if ( numElem != 1279 ) { b2 = (
localDW -> mkqejx2fbb [ m ] > localDW -> mkqejx2fbb [ m + 220 ] ) ; } if (
imgRow != 0 ) { b3 = ( localDW -> mkqejx2fbb [ m - 1 ] <= localDW ->
mkqejx2fbb [ m ] ) ; } if ( imgRow != 219 ) { b4 = ( localDW -> mkqejx2fbb [
m ] > localDW -> mkqejx2fbb [ m + 1 ] ) ; } localB -> fei0qvuicn [ m ] = ( (
localDW -> mkqejx2fbb [ m ] > accumOne ) && ( ( ( localDW -> j2c1zccvmm [ m ]
>= localDW -> jkz1dmnjlz [ m ] ) && b1 && b2 ) || ( ( localDW -> jkz1dmnjlz [
m ] >= localDW -> j2c1zccvmm [ m ] ) && b3 && b4 ) ) ) ; } } memset ( &
oj00zjf1um [ 0 ] , 0 , 281600U * sizeof ( boolean_T ) ) ; for ( imgIdx_d = 0
; imgIdx_d < 1280 ; imgIdx_d ++ ) { for ( numElem = 0 ; numElem < 220 ;
numElem ++ ) { imgRow = 220 * imgIdx_d + numElem ; if ( localB -> fei0qvuicn
[ imgRow ] ) { accumOne = muSingleScalarAbs ( muSingleScalarAtan2 ( localB ->
pqtzr2jyqm [ imgRow ] , localB -> lhi5vhk5ly [ imgRow ] ) * 57.2957802F ) ;
if ( ( ! ( accumOne < 20.0F ) ) && ( ! ( accumOne > 100.0F ) ) ) { oj00zjf1um
[ numElem + 220 * imgIdx_d ] = true ; } } } } } void cdbir4twvx ( ialue22ooy
* const cay1qbx2yb ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( cay1qbx2yb -> _mdlRefSfcnS , "Edge_Detect" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void gvipj2gzxb (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , ialue22ooy * const cay1qbx2yb
, e3i5wpcrtj * localB , i4zifcr1xa * localDW , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) cay1qbx2yb , 0 , sizeof
( ialue22ooy ) ) ; cay1qbx2yb -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; cay1qbx2yb -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( cay1qbx2yb ->
_mdlRefSfcnS , "Edge_Detect" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ;
} ( void ) memset ( ( ( void * ) localB ) , 0 , sizeof ( e3i5wpcrtj ) ) ; {
int32_T i ; for ( i = 0 ; i < 281600 ; i ++ ) { localB -> pqtzr2jyqm [ i ] =
0.0F ; } for ( i = 0 ; i < 281600 ; i ++ ) { localB -> lhi5vhk5ly [ i ] =
0.0F ; } for ( i = 0 ; i < 921600 ; i ++ ) { localB -> ls01dwr3oj [ i ] =
0.0F ; } } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( i4zifcr1xa ) )
; { int32_T i ; for ( i = 0 ; i < 2764800 ; i ++ ) { localDW -> ex3ddzfw0l [
i ] = 0.0F ; } } localDW -> nefsgukubs = 0.0F ;
Edge_Detect_InitializeDataMapInfo ( cay1qbx2yb , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
cay1qbx2yb -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( cay1qbx2yb ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
cay1qbx2yb -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_Edge_Detect_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo = false ;
ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if (
regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS
, modelName , rtMdlInfo_Edge_Detect , 47 ) ; * retVal = 1 ; } static void
mr_Edge_Detect_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_Edge_Detect_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Edge_Detect_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Edge_Detect_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_Edge_Detect_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Edge_Detect_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int
j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Edge_Detect_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Edge_Detect_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Edge_Detect_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_Edge_Detect_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
{ uint8_T * varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber (
destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes
] , ( const uint8_T * ) srcData , numBytes ) ; } static void
mr_Edge_Detect_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_Edge_Detect_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Edge_Detect_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_Edge_Detect_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_Edge_Detect_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Edge_Detect_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_Edge_Detect_GetDWork ( const nj3kg0czn2q * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Edge_Detect_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW -> rtb ) ,
sizeof ( mdlrefDW -> rtb ) ) ; { static const char * rtdwDataFieldNames [ 23
] = { "mdlrefDW->rtdw.ex3ddzfw0l" , "mdlrefDW->rtdw.jkz1dmnjlz" ,
"mdlrefDW->rtdw.j2c1zccvmm" , "mdlrefDW->rtdw.mkqejx2fbb" ,
"mdlrefDW->rtdw.nefsgukubs" , "mdlrefDW->rtdw.i3vw4qmhfc" ,
"mdlrefDW->rtdw.g5o3nva520" , "mdlrefDW->rtdw.grresqkzfe" ,
"mdlrefDW->rtdw.oneofifd3l" , "mdlrefDW->rtdw.b3drdrgpzu" ,
"mdlrefDW->rtdw.ib01jgpnhu" , "mdlrefDW->rtdw.ptksmpc1ct" ,
"mdlrefDW->rtdw.e03rw12zua" , "mdlrefDW->rtdw.osjlku4d5o" ,
"mdlrefDW->rtdw.nrx5gphl25" , "mdlrefDW->rtdw.bbe4kixblz" ,
"mdlrefDW->rtdw.foujm3y5vc" , "mdlrefDW->rtdw.erdi3jjm30" ,
"mdlrefDW->rtdw.i13v4oqmw1" , "mdlrefDW->rtdw.ca12tktmfe" ,
"mdlrefDW->rtdw.ijmp033z0v" , "mdlrefDW->rtdw.edb50dybyl" ,
"mdlrefDW->rtdw.koqgwcxopi" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 23 , rtdwDataFieldNames ) ; mr_Edge_Detect_cacheDataAsMxArray (
rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw . ex3ddzfw0l ) , sizeof ( mdlrefDW ->
rtdw . ex3ddzfw0l ) ) ; mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 1
, & ( mdlrefDW -> rtdw . jkz1dmnjlz ) , sizeof ( mdlrefDW -> rtdw .
jkz1dmnjlz ) ) ; mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 2 , & (
mdlrefDW -> rtdw . j2c1zccvmm ) , sizeof ( mdlrefDW -> rtdw . j2c1zccvmm ) )
; mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW -> rtdw
. mkqejx2fbb ) , sizeof ( mdlrefDW -> rtdw . mkqejx2fbb ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW -> rtdw .
nefsgukubs ) , sizeof ( mdlrefDW -> rtdw . nefsgukubs ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW -> rtdw .
i3vw4qmhfc ) , sizeof ( mdlrefDW -> rtdw . i3vw4qmhfc ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 6 , & ( mdlrefDW -> rtdw .
g5o3nva520 ) , sizeof ( mdlrefDW -> rtdw . g5o3nva520 ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 7 , & ( mdlrefDW -> rtdw .
grresqkzfe ) , sizeof ( mdlrefDW -> rtdw . grresqkzfe ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 8 , & ( mdlrefDW -> rtdw .
oneofifd3l ) , sizeof ( mdlrefDW -> rtdw . oneofifd3l ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 9 , & ( mdlrefDW -> rtdw .
b3drdrgpzu ) , sizeof ( mdlrefDW -> rtdw . b3drdrgpzu ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 10 , & ( mdlrefDW -> rtdw
. ib01jgpnhu ) , sizeof ( mdlrefDW -> rtdw . ib01jgpnhu ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 11 , & ( mdlrefDW -> rtdw
. ptksmpc1ct ) , sizeof ( mdlrefDW -> rtdw . ptksmpc1ct ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 12 , & ( mdlrefDW -> rtdw
. e03rw12zua ) , sizeof ( mdlrefDW -> rtdw . e03rw12zua ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 13 , & ( mdlrefDW -> rtdw
. osjlku4d5o ) , sizeof ( mdlrefDW -> rtdw . osjlku4d5o ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 14 , & ( mdlrefDW -> rtdw
. nrx5gphl25 ) , sizeof ( mdlrefDW -> rtdw . nrx5gphl25 ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 15 , & ( mdlrefDW -> rtdw
. bbe4kixblz ) , sizeof ( mdlrefDW -> rtdw . bbe4kixblz ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 16 , & ( mdlrefDW -> rtdw
. foujm3y5vc ) , sizeof ( mdlrefDW -> rtdw . foujm3y5vc ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 17 , & ( mdlrefDW -> rtdw
. erdi3jjm30 ) , sizeof ( mdlrefDW -> rtdw . erdi3jjm30 ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 18 , & ( mdlrefDW -> rtdw
. i13v4oqmw1 ) , sizeof ( mdlrefDW -> rtdw . i13v4oqmw1 ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 19 , & ( mdlrefDW -> rtdw
. ca12tktmfe ) , sizeof ( mdlrefDW -> rtdw . ca12tktmfe ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 20 , & ( mdlrefDW -> rtdw
. ijmp033z0v ) , sizeof ( mdlrefDW -> rtdw . ijmp033z0v ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 21 , & ( mdlrefDW -> rtdw
. edb50dybyl ) , sizeof ( mdlrefDW -> rtdw . edb50dybyl ) ) ;
mr_Edge_Detect_cacheDataAsMxArray ( rtdwData , 0 , 22 , & ( mdlrefDW -> rtdw
. koqgwcxopi ) , sizeof ( mdlrefDW -> rtdw . koqgwcxopi ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Edge_Detect_SetDWork ( nj3kg0czn2q * mdlrefDW , const mxArray * ssDW ) {
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0 , 0
, sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Edge_Detect_restoreDataFromMxArray (
& ( mdlrefDW -> rtdw . ex3ddzfw0l ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW ->
rtdw . ex3ddzfw0l ) ) ; mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW
-> rtdw . jkz1dmnjlz ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw .
jkz1dmnjlz ) ) ; mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw
. j2c1zccvmm ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . j2c1zccvmm )
) ; mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . mkqejx2fbb
) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . mkqejx2fbb ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nefsgukubs ) ,
rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . nefsgukubs ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . i3vw4qmhfc ) ,
rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . i3vw4qmhfc ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . g5o3nva520 ) ,
rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . g5o3nva520 ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . grresqkzfe ) ,
rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . grresqkzfe ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . oneofifd3l ) ,
rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . oneofifd3l ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . b3drdrgpzu ) ,
rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . b3drdrgpzu ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ib01jgpnhu ) ,
rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . ib01jgpnhu ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ptksmpc1ct ) ,
rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . ptksmpc1ct ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . e03rw12zua ) ,
rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . e03rw12zua ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . osjlku4d5o ) ,
rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . osjlku4d5o ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nrx5gphl25 ) ,
rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . nrx5gphl25 ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . bbe4kixblz ) ,
rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw . bbe4kixblz ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . foujm3y5vc ) ,
rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw . foujm3y5vc ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . erdi3jjm30 ) ,
rtdwData , 0 , 17 , sizeof ( mdlrefDW -> rtdw . erdi3jjm30 ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . i13v4oqmw1 ) ,
rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw . i13v4oqmw1 ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ca12tktmfe ) ,
rtdwData , 0 , 19 , sizeof ( mdlrefDW -> rtdw . ca12tktmfe ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . ijmp033z0v ) ,
rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw . ijmp033z0v ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . edb50dybyl ) ,
rtdwData , 0 , 21 , sizeof ( mdlrefDW -> rtdw . edb50dybyl ) ) ;
mr_Edge_Detect_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . koqgwcxopi ) ,
rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw . koqgwcxopi ) ) ; } } void
mr_Edge_Detect_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1419538466U , 730306100U , 1656711953U , 1120027677U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "Edge_Detect" , & chksum [ 0 ] ) ;
} mxArray * mr_Edge_Detect_GetSimStateDisallowedBlocks ( ) { return NULL ; }
