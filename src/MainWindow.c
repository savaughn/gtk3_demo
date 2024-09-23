#include "MainWindow.h" 

GtkWidget *create_main_window()
{
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "GTK3 Demo");
    gtk_window_set_default_size(GTK_WINDOW(window), DEFAULT_WIDTH, DEFAULT_HEIGHT);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    g_signal_connect(window, "delete_event", G_CALLBACK(on_window_closed), NULL);

    return window;
}