#include "include_asm.h"

#include "shared/bt_span_1000_code_800824E4.h"
#include <ultra64.h>
#include "shared/bt_span_1000_code_8008011C.h"


s32 func_80094C58(s32 a, s32 b, s32 c, s32 d, s32 view, s32 *x0, s32 *d0, s32 *x1, s32 *d1);
s32 func_80094C58(s32 a, s32 b, s32 c, s32 d, s32 view, s32 *x0, s32 *d0, s32 *x1, s32 *d1) {
    Scene *scene = func_800821C0();
    SceneView *v = &scene->views[view];
    f32 px1;
    f32 py1;
    f32 px2;
    f32 py2;
    f32 e1;
    f32 e2;
    f32 z1;
    f32 z2;
    f32 sx0;
    f32 sx1;
    f32 dep0;
    f32 dep1;
    f32 t;
    u8 f1 = 0;
    u8 f2 = 0;
    px1 = a + v->offsetX;
    py1 = b + v->offsetZ;
    px2 = c + v->offsetX;
    py2 = d + v->offsetZ;
    e1 = v->sideX * px1 - v->sideZ * py1;
    z1 = v->forwardZ * py1 + v->forwardX * px1;
    e2 = v->sideX * px2 - v->sideZ * py2;
    z2 = v->forwardZ * py2 + v->forwardX * px2;
    if (0.0f < z1) f1 = 1;
    if (0.0f < z2) f2 = 1;
    if ((u8)(f1 | f2) == 0) return 0;
    if (e1 < z1) f1 |= 4;
    if (e2 < z2) f2 |= 4;
    if (((f1 | f2) & 4) == 0) return 0;
    if (-e1 < z1) f1 |= 2;
    if (-e2 < z2) f2 |= 2;
    if (((f1 | f2) & 2) == 0) return 0;
    switch (f1) {
    case 7:
        switch (f2) {
        case 7:
            sx0 = e1 * 100.0f / 2.0f / z1 + 50.0f;
            sx1 = e2 * 100.0f / 2.0f / z2 + 50.0f;
            if (sx0 < sx1) {
                dep0 = z1;
                dep1 = z2;
            } else {
                t = sx0;
                sx0 = sx1;
                sx1 = t;
                dep1 = z1;
                dep0 = z2;
            }
            break;
        case 4:
        case 5:
            sx0 = 0.0f;
            sx1 = e1 * 100.0f / 2.0f / z1 + 50.0f;
            dep0 = (-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2);
            dep1 = z1;
            break;
        case 0:
            dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2));
            if (0.0f < dep0) {
                sx1 = e1 * 100.0f / 2.0f / z1 + 50.0f;
                sx0 = 0.0f;
                dep1 = z1;
            } else {
                sx0 = e1 * 100.0f / 2.0f / z1 + 50.0f;
                dep0 = z1;
                sx1 = 99.0f;
                dep1 = (dep0 * e2 - z2 * e1) / (e2 - e1 + dep0 - z2);
            }
            break;
        case 2:
        case 3:
            sx0 = e1 * 100.0f / 2.0f / z1 + 50.0f;
            dep0 = z1;
            sx1 = 99.0f;
            dep1 = (dep0 * e2 - z2 * e1) / (e2 - e1 + dep0 - z2);
            break;
        default:
            return 1;
        }
        break;
    case 5:
        switch (f2) {
        case 3: dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); dep1 = ((z1 * e2 - z2 * e1) / (e2 - e1 + z1 - z2)); sx0 = 0.0f; sx1 = 99.0f; break;
        case 7: sx0 = 0.0f; sx1 = e2 * 100.0f / 2.0f / z2 + 50.0f; dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); dep1 = z2; break;
        case 2: dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); if (dep0 < 0.0f) { *d0 = dep0; return 0; } dep1 = ((z1 * e2 - z2 * e1) / (e2 - e1 + z1 - z2)); sx0 = 0.0f; sx1 = 99.0f; break;
        default: return 0;
        }
        break;
    case 4:
        switch (f2) {
        case 7: sx0 = 0.0f; sx1 = e2 * 100.0f / 2.0f / z2 + 50.0f; dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); dep1 = z2; break;
        case 3: dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); if (dep0 < 0.0f) { *d0 = dep0; return 0; } dep1 = ((z1 * e2 - z2 * e1) / (e2 - e1 + z1 - z2)); sx0 = 0.0f; sx1 = 99.0f; break;
        default: return 0;
        }
        break;
    case 0:
        if (f2 != 7) return 0;
        dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2));
        if (0.0f < dep0) {
            sx1 = e2 * 100.0f / 2.0f / z2 + 50.0f;
            sx0 = 0.0f;
            dep1 = z2;
        } else {
            sx0 = e2 * 100.0f / 2.0f / z2 + 50.0f;
            dep0 = z2;
            sx1 = 99.0f;
            dep1 = (z1 * e2 - z2 * e1) / (e2 - e1 + z1 - dep0);
        }
        break;
    case 2:
        switch (f2) {
        case 7: sx0 = e2 * 100.0f / 2.0f / z2 + 50.0f; dep0 = z2; sx1 = 99.0f; dep1 = (z1 * e2 - dep0 * e1) / (e2 - e1 + z1 - dep0); break;
        case 5: dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); if (dep0 < 0.0f) { *d0 = dep0; return 0; } dep1 = ((z1 * e2 - z2 * e1) / (e2 - e1 + z1 - z2)); sx0 = 0.0f; sx1 = 99.0f; break;
        default: return 0;
        }
        break;
    case 3:
        switch (f2) {
        case 7: sx0 = e2 * 100.0f / 2.0f / z2 + 50.0f; dep0 = z2; sx1 = 99.0f; dep1 = (z1 * e2 - dep0 * e1) / (e2 - e1 + z1 - dep0); break;
        case 5: dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); dep1 = ((z1 * e2 - z2 * e1) / (e2 - e1 + z1 - z2)); sx0 = 0.0f; sx1 = 99.0f; break;
        case 4: dep0 = ((-z1 * e2 + z2 * e1) / (-e2 + e1 + z1 - z2)); if (dep0 < 0.0f) { *d0 = dep0; return 0; } dep1 = ((z1 * e2 - z2 * e1) / (e2 - e1 + z1 - z2)); sx0 = 0.0f; sx1 = 99.0f; break;
        default: return 0;
        }
        break;
    default:
        return 1;
    }
    *x0 = sx0;
    *x1 = sx1;
    *d0 = dep0;
    *d1 = dep1;
    return 1;
}

INCLUDE_DATA("span_1000", D_800720EC);
