#define PL_MAX_NAME_LENGTH 1024

#include "dcapp.h"
#include "draw_primitives.h"


void draw_function_test(const dcDrawI *draw, dcDrawLayer2D *layer)
{
    dcDrawContext context = {};
    context.draw = draw;
    context.layer = layer;

    draw_rectangle(&context, 100.0f, 100.0f, 200.0f, 150.0f);
    draw_ellipse(&context, 300.0f, 300.0f, 100.0f, 100.0f);
}

