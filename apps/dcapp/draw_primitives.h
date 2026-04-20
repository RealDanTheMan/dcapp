#ifndef _DCAPP_DRAW_PRIMITIVES_H_
#define _DCAPP_DRAW_PRIMITIVES_H_

#include "dc_draw_ext.h"


typedef struct _dcDrawContext
{
    const dcDrawI *draw;
    dcDrawLayer2D *layer;
} dcDrawContext;

void draw_rectangle(dcDrawContext *context, const float x, const float y, const float width, const float height);
void draw_ellipse(dcDrawContext *context, const float center_x, const float center_y, const float radius_x, const float radius_y);

#endif // _DCAPP_DRAW_PRIMITIVES_H_