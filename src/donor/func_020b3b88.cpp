/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_021109ec from projets/sims-2-the/src/donor/func_021109ec.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
inline char *__DecodeAddress(char *p, void **paddr) {
    unsigned long addr;

    addr = ((unsigned char *) p)[0] | (((unsigned char *) p)[1] << 8) | (((unsigned char *) p)[2] << 16) |
           (((unsigned char *) p)[3] << 24);

    *paddr = (void *) addr;
    return (p + 4);
}
extern char *__DecodeSignedNumber(char *p, long *pnum);
extern char *__DecodeUnsignedNumber(char *p, unsigned long *pnum);
typedef struct ExceptionTableIndex {
    char *function_address;
    unsigned long function_size;
    char *exception_table;
} ExceptionTableIndex;
typedef unsigned char exaction_type;
extern "C" {
typedef struct CatchInfo {
    void *location;
    void *typeinfo;
    void *dtor;
    void *sublocation;
    long pointercopy;
    void *stacktop;
} CatchInfo;
}
typedef struct TargetContext {
    unsigned long GPR[16];
    char *throwSP;
    unsigned long frame_size;
    unsigned long argument_size;
    unsigned short saved_GPRs;
    bool has_flushback;
    bool has_frame_ptr;
    bool is_Thumb;
} TargetContext;
typedef struct ThrowContext {
    unsigned char *throwtype;
    void *location;
    void *dtor;
    CatchInfo *catchinfo;
    char *returnaddr;
    char *SP;
    char *FP;
    TargetContext target;
} ThrowContext;
typedef struct TargetExceptionInfo {
    int dummy;
} TargetExceptionInfo;
typedef struct ExceptionInfo {
    char *current_function;
    char *exception_record;
    char *action_pointer;
    ExceptionTableIndex *exception_table_start;
    ExceptionTableIndex *exception_table_end;
    TargetExceptionInfo target;
} ExceptionInfo;
namespace std {
    extern void terminate();
}
extern "C" char func_020b4f4c(const char *throwtype, const char *catchtype, long *offset_result);
typedef struct ActionIterator {
    ExceptionInfo info;
    ThrowContext context;
} ActionIterator;
typedef struct ex_catchblock {
    char *catch_type;
    unsigned long pcoffset;
    long cinfo_ref;
} ex_catchblock;
typedef struct ex_specification {
    unsigned long nspecs;
    unsigned long pcoffset;
    long cinfo_ref;
    char *specs;
} ex_specification;
inline void DecodeCatchBlock(char *ap, ex_catchblock *cb) {
    ap += sizeof(exaction_type);
    ap = __DecodeAddress(ap, (void **) &cb->catch_type);
    ap = __DecodeUnsignedNumber(ap, &cb->pcoffset);
    ap = __DecodeSignedNumber(ap, &cb->cinfo_ref);
}
inline void DecodeSpecification(char *ap, ex_specification *sp) {
    ap += sizeof(exaction_type);
    ap        = __DecodeUnsignedNumber(ap, &sp->nspecs);
    ap        = __DecodeUnsignedNumber(ap, &sp->pcoffset);
    ap        = __DecodeSignedNumber(ap, &sp->cinfo_ref);
    sp->specs = ap;
}
extern "C" exaction_type func_020b4cb0(const ActionIterator *iter);
extern "C" exaction_type func_020b4914(ActionIterator *iter);
extern "C" int func_020b3ea8(const char *extype, ex_specification *spec);
extern "C" void func_020b3d68(ThrowContext *context, ExceptionInfo *info, ex_specification *spec, char *unexp);
extern "C" char *func_020b3b88(ThrowContext *context, ExceptionInfo *info, long *result_offset) {
    ActionIterator iter;
    exaction_type action;
    ex_catchblock handler;
    ex_specification spec;

    iter.info    = *info;
    iter.context = *context;

    for (action = func_020b4cb0(&iter);; action = func_020b4914(&iter)) {
        switch (action) {
            case 12:
                DecodeCatchBlock(iter.info.action_pointer, &handler);
                if (func_020b4f4c((const char *) context->throwtype, handler.catch_type, result_offset) == 0) {
                    continue;
                }
                break;
            case 15:
                DecodeSpecification(iter.info.action_pointer, &spec);
                if (func_020b3ea8((char *) context->throwtype, &spec) == 0) {
                    func_020b3d68(context, info, &spec, iter.info.action_pointer);
                }
                continue;
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 16:
            case 17:
            case 18:
            case 19:
                continue;
            case 14:
            default:
                std::terminate();
                break;
        }
        break;
    }
    return iter.info.action_pointer;
}
