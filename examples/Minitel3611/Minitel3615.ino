/**
 * Minitel library for Arduino (v0.1) / May 2013
 * http://github.com/01010101/Minitel
 *
 * By Jerome Saint-Clair aka 01010101
 * http://saint-clair.net
 * 
 * For the Graffiti Research Lab France
 * http://graffitiresearchlab.fr
 * 
 * Based on works by the Tetalab (Fabrice, Renaud, PG & Phil)
 * http://tetalab.org
 */
 
#include <SoftwareSerial.h>
#include <Minitel.h>
Minitel m;

void setup() {
}

void dots(int x, int y, int w) {
  m.text(".", x, y);
  m.repeat(w);
}

void loop() {

  m.clearScreen();
  
// logo

  m.textMode();
  m.charSize(SIZE_DOUBLE_HEIGHT);
  m.text("MINITEL 3615", 2, 2);
  m.charSize(SIZE_NORMAL);
  
// Title

  m.text("Prix de la communication", 17, 1);
  m.text("(Métropole)", 17, 2);

// Menu
  
  m.text("CODE:", 2, 4);
  m.text(".", 7, 4);
  m.repeat(28);
  m.text("ou indiquez votre recherche puis", 2, 7);
  m.text("(ex: programmes de cinéma)", 5, 9);

// Cadre

  m.graphicMode();
  m.textColor(BLUE);
  graph(1, 13, 39);
  graph(1, 14, 39);
  graph(1, 15, 39);
  graph(1, 16, 39);
  graph(1, 17, 39);
  graph(1, 18, 39);
  graph(1, 19, 39);
  graph(1, 20, 39);
  graph(1, 21, 39);
  
  m.textColor(CYAN);
  
  graph(1, 22, 39);
  graph(1, 23, 39);

// Menu

  m.textMode();
  m.invertVideo();
  m.textColor(BLUE);
  
  m.text("Spécial Examens", 5, 14);
  m.text("Presse TV Radio", 5, 15);
  m.text("Annulaires Mail SMS", 5, 16);
  m.text("Astro Messageries", 5, 17);
  m.text("Sorties Loisirs Jeux", 5, 18);
  m.text("Transports Itinéraires", 5, 19);
  m.text("Voyages Hébergement", 5, 20);
  m.text("Emploi Formation", 5, 21);

  m.text("Bourse", 31, 14);
  m.text("Météo", 31, 15);
  m.text("Shopping", 31, 16);
  m.text("Logement", 31, 17);
  m.text("Santé", 31, 18);
  m.text("Sports", 31, 19);
  m.text("Entreprise", 31, 20);
  m.text("Autres", 31, 21);

// Selection

  m.textColor(CYAN);
  
  m.specialChar(SPE_CHAR_ARROW_RIGHT, 3, 22);
  m.text("N", 5, 22);
  m.specialChar(SPE_CHAR_DEGREE, 6, 22);
  m.text("puis Envoi", 7, 22);

// Title

   m.standardVideo();
   m.textColor(WHITE);
   
   m.text("(c) france telecom", 2, 24);
  
// Selection

  m.invertVideo();
  
  m.text("Sommaire", 33, 2);
  
  m.charSize(SIZE_DOUBLE_HEIGHT);
  
  m.text("Envoi", 36, 5);
  m.text("Guide", 36, 8);
  
  m.charSize(SIZE_NORMAL);
  
  m.text(" 1", 2, 14);
  m.text(" 2", 2, 15);
  m.text(" 3", 2, 16);
  m.text(" 4", 2, 17);
  m.text(" 5", 2, 18);
  m.text(" 6", 2, 19);
  m.text(" 7", 2, 20);
  m.text(" 8", 2, 21);

  m.text(" 9", 28, 14);
  m.text("10", 28, 15);
  m.text("11", 28, 16);
  m.text("12", 28, 17);
  m.text("13", 28, 18);
  m.text("14", 28, 19);
  m.text("15", 28, 20);
  m.text("16", 28, 21);
  m.text("Cx/Fin", 35, 24);
  
  m.standardVideo();

//end

  m.bip(10000);
  m.moveCursorTo(7, 4);
  m.cursor();
  
  delay(60000);

}
