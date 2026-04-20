#include "draw_primitives.h"
#include "pl_math.h"
#include <math.h>


void draw_rectangle(dcDrawContext *context,
                    const float x,
                    const float y,
                    const float width,
                    const float height)
{
    const plVec2 points[4] = {
        {x, y},
        {x + width, y},
        {x + width, y + height},
        {x, y + height}
    };

    dcDrawSolidOptions options = {};
    options.uColor = 0xFFFF00FF;

    context->draw->add_convex_polygon_filled(context->layer, points, 4, options);
}

void draw_ellipse(dcDrawContext *context,
                  const float x,
                  const float y,
                  const float radius_x,
                  const float radius_y)
{
    const int num_segments = 64;
    plVec2 points[num_segments];

    for (int ii = 0; ii < num_segments; ii++) {
        float  angle  = ii * (2.0f * (float)3.14 / num_segments);
        plVec4 point4 = (plVec4){
            radius_x * (1.0f + cosf(angle)),
            radius_y * (1.0f + sinf(angle)),
            0, 1};
        points[ii] = (plVec2){x + point4.x, y + point4.y};
    }

    dcDrawSolidOptions opts = {};
    opts.uColor = 0xFF0000FF;

    context->draw->add_convex_polygon_filled(context->layer, points, num_segments, opts);
}