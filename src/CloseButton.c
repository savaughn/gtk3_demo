#include "CloseButton.h"

GtkWidget *create_close_button(GCallback callback)
{
    GtkWidget *btn = gtk_button_new_with_label("Close");
    g_signal_connect(btn, "clicked", G_CALLBACK(callback), NULL);
    return btn;
}