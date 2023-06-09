#include "camera.h"

Camera::Camera(void) {
	x = y = z = 0;
}

Camera::Camera(float _x, float _y, float _z) {
	x = _x;
	y = _y;
	z = _z;
}