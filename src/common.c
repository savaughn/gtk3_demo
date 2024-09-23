#include "common.h"

void on_window_closed(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

gboolean on_key_press(GtkWidget *widget, GdkEventKey *event, gpointer data)
{
    if (event->keyval == GDK_KEY_Escape) {
        on_window_closed(widget, data);
        return TRUE; // Event handled
    }
    return FALSE; // Event not handled
}
