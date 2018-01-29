#include<allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<iostream>
using namespace std;

int main() {
	ALLEGRO_DISPLAY *gamewindow = NULL;
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	int age;
	cout << "what is your age" << endl;
	cin >> age;

	ALLEGRO_FONT *font = al_load_ttf_font("t.ttf", 72, 0);
	gamewindow = al_create_display(600, 500);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	
	al_set_window_position(gamewindow, 200, 200);
	al_set_window_title(gamewindow, "goat");

	al_draw_textf(font, al_map_rgb(255, 255, 255), 640 / 2, (400 / 4), ALLEGRO_ALIGN_CENTRE, "Happy %d th Birthday!", age);

	al_flip_display();

	al_rest(50.0);

	al_destroy_display(gamewindow); 
	




















 }