// IFT3100H25_LambertTeapot/main.cpp
// Exemple d'importation et de rendu d'un teapot avec un shader de Lambert.
// Un autre shader permet aussi de visualiser les normales sur la surface du modèle par conversion des composantes XYZ en couleur RGB.
// Le fichier de géométrie du teapot et les shaders sont dans le répertoire ./bin/data.

#include "ofMain.h"
#include "application.h"

int main()
{
  // paramètres du contexte de rendu
  ofGLFWWindowSettings windowSettings;

  // résolution de la fenêtre d'affichage
  windowSettings.setSize(512, 512);

  // sélection de la version de OpenGL
  windowSettings.setGLVersion(3, 3);

  // création de la fenêtre
  ofCreateWindow(windowSettings);

  // démarrer l'exécution de l'application
  ofRunApp(new Application());
}
