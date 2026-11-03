/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3D_UTIL_GetObject from https://github.com/Project-Holon/aletheia src/game/arm9/g3d_util.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef s16 fx16;
typedef s32 fx32;
typedef struct G3dUtilUnit {
    u16 resIdx;
    u16 resCount;
    u16 objIdx;
    u16 objCount;
} G3dUtilUnit;
typedef struct G3dUtil {
    void **res;
    u8 *resStat;
    u16 resCount;
    void **obj;
    u8 *objStat;
    u16 objCount;
    G3dUtilUnit unit[0x40];
    u16 heapID;
} G3dUtil;
typedef struct NNSG3dJntAnmResult {
    u32 flag;
    fx32 scale[3];
    fx32 scaleEx0[3];
    fx32 scaleEx1[3];
    fx32 rot[3][3];
    fx32 trans[3];
} NNSG3dJntAnmResult;
typedef void (*NNSG3dAnmObjFunc)(void *result, const struct NNSG3dAnmObj *anmObj, u32 dataIdx);
typedef struct NNSG3dAnmObj {
    fx32 frame;
    fx32 ratio;
    const void *resAnm;
    NNSG3dAnmObjFunc funcAnm;
    struct NNSG3dAnmObj *next;
    const void *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
} NNSG3dAnmObj;
typedef struct NNSG3dSbcNodeDesc {
    u8 cmd;
    u8 nodeId;
    u8 parentNodeId;
    u8 flag;
} NNSG3dSbcNodeDesc;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy;
    u16 ofsEntry;
} NNSG3dResDict;
typedef struct NNSG3dResMdlInfo {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackId;
    u8 dummy_;
    fx32 posScale;
    fx32 invPosScale;
    u16 numVertex;
    u16 numPolygon;
    u16 numTriangle;
    u16 numQuad;
    fx16 boxX;
    fx16 boxY;
    fx16 boxZ;
    fx16 boxW;
    fx16 boxH;
    fx16 boxD;
    fx32 boxPosScale;
    fx32 boxInvPosScale;
} NNSG3dResMdlInfo;
typedef struct NNSG3dResMdl {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResDict nodeInfo;
} NNSG3dResMdl;
typedef void (*NNSG3dJntScaleFunc)(NNSG3dJntAnmResult *pResult, const fx32 *pScale, const NNSG3dSbcNodeDesc *pCmd, u32 flag);
typedef struct NNSG3dResMat {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;
typedef struct NNSG3dResShp {
    NNSG3dResDict dict;
} NNSG3dResShp;
typedef struct NNSG3dMatAnmResult {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 sinR;
    fx16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dMatAnmResult;
typedef struct NNSG3dVisAnmResult {
    u32 isVisible;
} NNSG3dVisAnmResult;
typedef void (*NNSG3dSbcCallBackFunc)(struct NNSG3dRS *pRS);
typedef void (*NNSG3dFuncMatTexMtx)(NNSG3dMatAnmResult *pResult);
typedef void (*NNSG3dFuncJntMtx)(const NNSG3dJntAnmResult *pResult);
typedef void (*NNSG3dFuncBlendMat)(NNSG3dMatAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 idxMat);
typedef int (*NNSG3dFuncBlendJnt)(NNSG3dJntAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 idxNode);
typedef int (*NNSG3dFuncBlendVis)(NNSG3dVisAnmResult *pResult, const NNSG3dAnmObj *pAnmObj, u32 idxNode);
typedef struct NNSG3dRenderObj {
    u32 flag;
    const NNSG3dResMdl *resMdl;
    NNSG3dAnmObj *anmMat;
    NNSG3dFuncBlendMat funcBlendMat;
    NNSG3dAnmObj *anmJnt;
    NNSG3dFuncBlendJnt funcBlendJnt;
    NNSG3dAnmObj *anmVis;
    NNSG3dFuncBlendVis funcBlendVis;
    NNSG3dSbcCallBackFunc cbFunc;
    u8 cbCmd;
    u8 cbTiming;
    u8 reserved26[2];
    NNSG3dSbcCallBackFunc cbInitFunc;
    u32 reserved2C;
    const u8 *ptrSbc;
    NNSG3dJntAnmResult *recJntAnm;
    NNSG3dMatAnmResult *recMatAnm;
    u32 matAnmExist[2];
    u32 jntAnmExist[2];
    u32 visAnmExist[2];
} NNSG3dRenderObj;
typedef struct NNSG3dRS {
    const NNSG3dSbcNodeDesc *c;
    NNSG3dRenderObj *pRenderObj;
    u32 flag;
    NNSG3dSbcCallBackFunc cbVecFunc[32];
    u8 cbVecTiming[32];
    u8 currentNode;
    u8 currentMat;
    u8 currentNodeDesc;
    u8 dummy_;
    NNSG3dMatAnmResult *pMatAnmResult;
    NNSG3dJntAnmResult *pJntAnmResult;
    NNSG3dVisAnmResult *pVisAnmResult;
    u32 isMatCached[2];
    union {
        u32 bits[4];
        struct {
            u32 isMtxCached[2];
            u32 isEvpCached[2];
        };
    };
    const NNSG3dResDict *nodeDict;
    NNSG3dResMat *pResMat;
    NNSG3dResShp *pResShp;
    fx32 posScale;
    fx32 invPosScale;
    NNSG3dJntScaleFunc jntScaleFunc;
    NNSG3dFuncJntMtx jntMtxFunc;
    NNSG3dFuncMatTexMtx matTexMtxFunc;
    NNSG3dMatAnmResult tmpMatAnmResult;
    NNSG3dJntAnmResult tmpJntAnmResult;
    NNSG3dVisAnmResult tmpVisAnmResult;
} NNSG3dRS;
typedef struct G3dResource {
    u16 magic;
    u16 type;
    void *file;
} G3dResource;
typedef struct G3dRender {
    u16 magic;
    NNSG3dRenderObj *rndObj;
    G3dResource *mdlRes;
    G3dResource *texRes;
} G3dRender;
typedef struct G3dAnime {
    u16 magic;
    NNSG3dAnmObj *anmObj;
    const G3dResource *anmRes;
} G3dAnime;
typedef struct G3dObject {
    u16 magic;
    G3dRender *render;
    G3dAnime **anmTbl;
    u16 anmCount;
} G3dObject;
extern G3dObject *func_02018598(G3dUtil *util, int i);
G3dObject *func_02018598(G3dUtil *util, int objIdx) {
    return (G3dObject *) util->obj[objIdx];
}
