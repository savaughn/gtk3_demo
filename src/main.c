#include "common.h"
#include "MainWindow.h"
#include "Button.h"
#include "View.h"

int count = 0;

static inline void on_button_count_press(GtkWidget *widget, gpointer ptr)
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
    GtkWidget *label = gtk_label_new("My Label");

    GtkWidget *view = View((ViewProps){
        .orientation = GTK_ORIENTATION_VERTICAL,
        .spacing = 5,
        .element_count = 3,
        .elements = {
            &(Element){
                .widget = Button((ButtonProps){
                    .label = "Count",
                    .onPress = on_button_count_press,
                    .connected_label = label,
                }),
                .widget_props = {
                    .expand = FALSE,
                    .fill = FALSE,
                    .padding = 5,
                    .justify = "start"
                }
            },
            &(Element){
                .widget = label,
                .widget_props = {
                    .expand = TRUE,
                    .fill = TRUE,
                    .padding = 5,
                    .justify = "start"
                }
            },
            &(Element){
                .widget = create_close_button(),
                .widget_props = {
                    .expand = FALSE,
                    .fill = FALSE,
                    .padding = 5,
                    .justify = "start"
                }
            }
        }
    });

    gtk_container_add(GTK_CONTAINER(window), view);
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}