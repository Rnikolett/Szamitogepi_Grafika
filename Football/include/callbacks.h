#ifndef CALLBACKS_H
#define CALLBACKS_H

#include "camera.h"
#include "scene.h"

#include <GL/glut.h>

/**
 * Scene
 */
Scene scene;

Ball ball;


/**
 * Camera
 */
Camera camera;

/**
 * Call when need to display the graphical content.
 */
void display();

/**
 * Call after windows resizing.
 */
void reshape(GLsizei width, GLsizei height);


/**
 * Call after keyboard event.
 */
void keyboard(unsigned char key);


/**
 * Call when there is no other event.
 */
void idle();

#endif /* CALLBACKS_H */
