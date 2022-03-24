#include <gtk/gtk.h>

#include "appdata.h"

/* function prototypes */
void reset_test_widgets (void);
void set_random_drawing_color (cairo_t *cr);
void perform_test_type (AppData * data);
void setup_widgets (void);
void setup_appdata (AppData * appdata_in);


void on_button_start_clicked (GtkButton * button, gpointer user_data);
void on_cmdline_run_all (void);
void on_cmdline_help (void) ;
void on_cmdline_count (char *optarg) ;
void on_window_main_show (AppData * data);

gboolean
on_window_main_destroy_event (GtkWidget * widget,
			      GdkEvent * event, gpointer user_data);
gboolean
on_cleanup_and_exit(void);

gboolean
on_window_main_delete_event (GtkWidget * widget,
			     GdkEvent * event, gpointer user_data);

void on_button_clear_clicked (GtkButton * button, gpointer user_data);
