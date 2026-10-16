#ifndef UNBAKE_SPAN_1000_CODE_80091A60_H
#define UNBAKE_SPAN_1000_CODE_80091A60_H
#include "shared/bt_types.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_gfx.h"
struct QueryObject;

struct QueryObject { char prefix[0x18]; int index; };


struct QueryObject;

struct QueryResult;

typedef void ( *QueryCallback)(struct QueryResult *, struct QueryObject *, int, void *, void *);


struct QueryWork;

typedef struct QueryWork QueryWork;







struct QueryResult;

typedef struct QueryResult QueryResult;


struct QueryRecord;

typedef struct QueryRecord QueryRecord;


struct QueryDispatch;

struct QueryDispatch { QueryCallback callback; int tail[2]; };


extern void func_80093F34(void);


struct QueryRecord;

struct QueryRecord { QueryBox box; char tail[22]; };





struct QueryObject;

extern void func_80092534(struct QueryObject * object);


struct PolygonPoint;

struct PolygonPoint {
    f32 y;
    f32 x;
};


struct QueryObject;

typedef struct QueryObject QueryObject;


extern QueryRecord D_803B8254[];


struct QueryDispatch;

typedef struct QueryDispatch QueryDispatch;





extern QueryDispatch D_802C3804[];


struct QueryWork;

struct QueryWork {
        QueryBox box;
        short alignment[3];
        QueryResult *results[32];
        char callbackData[32];
        char callbackOutput[16];
        int count;
};


extern int func_80091D04(void *unused, int *out);


extern float D_80071EA0;









typedef struct ViewCone {
    f32 m00;
    f32 m01;
    f32 m10;
    f32 m11;
    f32 offsetZ;
    f32 offsetX;
    u8 disabled;
} ViewCone;

/* A four-corner polygon in the shared planar coordinate order. */
typedef struct Quad2f { struct PolygonPoint points[4]; } Quad2f;

#endif
