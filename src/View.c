#include "View.h"

GtkWidget *View(ViewProps props)
{
    GtkWidget *new_view = gtk_box_new(props.orientation, props.spacing);
    guint element_count = props.element_count;

    for(int i = 0; i < element_count; i++)
    {
        Element *element = props.elements[i];
        gtk_box_pack_start(GTK_BOX(new_view), element->widget, element->widget_props.expand, element->widget_props.fill, element->widget_props.padding);
    }

    return new_view;
}