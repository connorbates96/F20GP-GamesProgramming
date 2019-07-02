#pragma once

using namespace std;
#include "Shapes.h"

class Boundings {

public:
	Boundings();
	~Boundings();

	Boundings createSphere(Sphere sphere);
	Boundings createBox(Cube cube);
	
	glm::vec3 boxMin;
	glm::vec3 boxMax;

	float sphereCentre;
	float sphereRadius;


};