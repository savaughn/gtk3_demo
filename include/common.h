#ifndef COMMON_H
#define COMMON_H

#include <gtk/gtk.h>

#define DEFAULT_WIDTH 400
#define DEFAULT_HEIGHT 300

void on_window_closed(GtkWidget *widget, gpointer data);
gboolean on_key_press(GtkWidget *widget, GdkEventKey *event, gpointer data);

#endif // COMMON_H