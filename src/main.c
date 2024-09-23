#include "common.h"
#include "CloseButton.h"
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = create_main_window();
    GtkWidget *close_button = create_close_button(G_CALLBACK(on_window_closed));

    gtk_container_add(GTK_CONTAINER(window), close_button);
    gtk_widget_show_all(window);

    gtk_main();
        
    return 0;
}