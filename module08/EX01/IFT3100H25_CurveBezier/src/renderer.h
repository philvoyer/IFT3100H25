// IFT3100H25_CurveBezier/renderer.h
// Classe responsable du rendu de l'application.

#pragma once

#include "ofMain.h"

// énumération de types de courbe
enum class CurveType {bezier_quadratic, bezier_cubic};

// énumération de types d'interpolation
enum class InterpolationType {lerp, smoothstep};

class Renderer
{
public:

  CurveType curve_type;

  InterpolationType interpolation_type;

  string curve_name;

  ofPolyline line_renderer;

  ofVec3f* selected_ctrl_point;

  ofVec3f ctrl_point1;
  ofVec3f ctrl_point2;
  ofVec3f ctrl_point3;
  ofVec3f ctrl_point4;

  ofVec3f initial_position1;
  ofVec3f initial_position2;
  ofVec3f initial_position3;
  ofVec3f initial_position4;
  ofVec3f initial_position5;

  ofVec3f position;

  ofVec3f playhead_position;

  float playhead;

  float line_width_outline;
  float line_width_curve;

  float radius;
  float scale;
  float smooth;
  float offset;

  float delta_x;
  float delta_y;

  float motion_speed;

  float oscillation;
  float oscillation_frequency;
  float oscillation_amplitude;

  int framebuffer_width;
  int framebuffer_height;

  int line_resolution;

  int index;

  bool isAnimationActive;

  void setup();
  void update();
  void draw();
  void reset();
};
