#pragma once

class Camera {
public:
	Camera(void);
	Camera(float _x, float _y, float _z);
	float x, y, z, rot, scale;
};