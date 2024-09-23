#include "common.h"
#include "CloseButton.h"
#include "MainWindow.h"

int count = 0;

void on_button_count_press(GtkWidget *widget, gpointer ptr)
{
    char buffer[30];
    count++;
    sprintf(buffer, "Button Pressed %d times", count);
    gtk_label_set_text(GTK_LABEL(ptr), buffer);
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window = create_main_window();
    GtkWidget *close_button = create_close_button(G_CALLBACK(on_window_closed));

    GtkWidget *label = gtk_label_new("My Label");
    GtkWidget *count_button = gtk_button_new_with_label("Count button");
    g_signal_connect(count_button, "clicked", G_CALLBACK(on_button_count_press), label);
    
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(box), count_button, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(box), label, TRUE, TRUE, 5);
    gtk_box_pack_start(GTK_BOX(box), close_button, FALSE, FALSE, 5);

    gtk_container_add(GTK_CONTAINER(window), box);
    gtk_widget_show_all(window);

    g_signal_connect(window, "key_press_event", G_CALLBACK(on_key_press), NULL);

    gtk_main();
        
    return 0;
}