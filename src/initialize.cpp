#include "main.h"

bool mirror = false;

void on_center_button() {
	static bool pressed = false;
	pressed = !pressed;
	if (pressed) {
		pros::lcd::set_text(2, "Aman and Yahya are battry tings");
	} else {
		pros::lcd::clear_line(2);
	}
}

void initialize() {
	pros::lcd::initialize();
	master.set_text(0, 0, "Hey, Amanda");

	pros::lcd::set_text(1, "Jil is amazing");

	pros::lcd::register_btn1_cb(on_center_button);
}

void disabled() {}
void competition_initialize() {}
