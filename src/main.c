#include <gtk/gtk.h>

int main()
{
    gtk_init(NULL, NULL);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello World");
    gtk_widget_show(window);
    gtk_main();
        
    return 0;
}