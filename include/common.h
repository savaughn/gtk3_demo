#ifndef COMMON_H
#define COMMON_H

#include <gtk/gtk.h>

#define DEFAULT_WIDTH 400
#define DEFAULT_HEIGHT 300
#define MAX_ELEMENT_COUNT 20

static enum ButtonTypes {
    PRIMARY = 0,
    SECONDARY,
    CLOSE
} ButtonTypes;

typedef struct {
    guint padding;
    gboolean fill;
    gboolean expand;
    char *justify;
} WidgetProps;


typedef struct {
    WidgetProps widget_props;
    void (*onPress) (GtkWidget *widget, gpointer ptr);
    const gchar *label;
    GtkWidget *connected_label;
} ButtonProps;

typedef struct {
    GtkWidget *widget;
    WidgetProps widget_props;
} Element;

typedef struct {
    gint spacing;
    GtkOrientation orientation;
    Element *elements[MAX_ELEMENT_COUNT];
    guint element_count;
} ViewProps;


void on_window_closed(GtkWidget *widget, gpointer data);
gboolean on_key_press(GtkWidget *widget, GdkEventKey *event, gpointer data);

#endif // COMMON_H