#include "common.h"
#include "Button.h"

GtkWidget *Button(ButtonProps props)
{
    return create_button(G_CALLBACK(props.onPress), props.label, props.connected_label);
}

GtkWidget *create_close_button()
{
    return create_button(G_CALLBACK(on_window_closed), "Close", NULL);
}

GtkWidget *create_button(GCallback callback, const gchar *label, GtkWidget *connected_label)
{
    GtkWidget *btn = gtk_button_new_with_label(label);
    g_signal_connect(btn, "clicked", callback, connected_label);
    return btn;
}