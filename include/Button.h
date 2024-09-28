#ifndef BUTTON_H
#define BUTTON_H

#include "common.h"

GtkWidget *create_button(GCallback callback, const gchar *label, GtkWidget *connected_label);
GtkWidget *create_close_button(void);
GtkWidget *Button(ButtonProps props);

#endif // BUTTON_H