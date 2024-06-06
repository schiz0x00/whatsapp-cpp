#include <gtk/gtk.h>
#include <webkit2/webkit2.h>

int main(int argc, char* argv[]) {
    gtk_init(&argc, &argv);

    // Create the main GTK window
    GtkWidget* window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create the WebKitGTK WebView
    GtkWidget* webView = webkit_web_view_new();
    gtk_container_add(GTK_CONTAINER(window), webView);

    // Load a website into the WebView
    webkit_web_view_load_uri(WEBKIT_WEB_VIEW(webView), "https://web.whatsapp.com/");

    // Show the window and start the GTK main loop
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
