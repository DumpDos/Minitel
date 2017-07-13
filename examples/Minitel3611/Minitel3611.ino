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

void loop() {

  m.clearScreen();
  
// logo

  m.graphicMode();
  m.pixelate();
  
  m.graphic("000001", 1, 1);
  m.graphic("011000", 2, 1);
  m.graphic("110000", 3, 1);
  m.graphic("110000", 4, 1);
  m.graphic("101101", 5, 1);
  m.graphic("000010", 6, 1);

  m.graphic("100010", 1, 2);
  m.graphic("000110", 3, 2);
  m.graphic("000110", 4, 2);
  m.graphic("000110", 5, 2);
  m.graphic("000110", 6, 2);

  m.graphic("000001", 1, 3);
  m.graphic("011001", 2, 3);
  m.graphic("011001", 3, 3);
  m.graphic("011001", 4, 3);
  m.graphic("011000", 5, 3);
  m.graphic("000001", 6, 3);

  m.graphic("100001", 1, 4);
  m.graphic("100010", 2, 4);
  m.graphic("100000", 3, 4);
  m.graphic("100000", 4, 4);
  m.graphic("000110", 6, 4);

  m.graphic("110100", 2, 5);
  m.graphic("001100", 3, 5);
  m.graphic("001100", 4, 5);
  m.graphic("011000", 5, 5);
  
  m.noPixelate();
  
// Title

  m.textMode();
  m.bgColor(RED);
  m.text(" RECHERCHE                  ", 13, 1);
  m.text(" PAR NOM                    ", 13, 2);
  m.text(" OU PAR RUBRIQUE            ", 13, 3);

// 11
  
  m.graphicMode();
  
  m.graphic("000001", 36, 1);
  m.graphic("010000", 36, 2);
  m.graphic("001111", 37, 1);
  m.graphic("111111", 37, 2);
  m.graphic("111100", 37, 3);
 
  m.graphic("000001", 38, 1);
  m.graphic("010000", 38, 2);
  m.graphic("001111", 39, 1);
  m.graphic("111111", 39, 2);
  m.graphic("111100", 39, 3);

// Menu

  m.textMode();
  
  m.bgColor(BLACK);
  m.text("NOM:...........................", 9, 5);
  m.text("ou  ...........................", 9, 6);
  m.text("RUBRIQUE:...........................", 4, 7);
  m.text("...........................", 13, 8);
  m.text("...........................", 13, 9);
  m.text("LOCALITE:...........................", 4, 10);
  m.text("...........................", 13, 11);
  m.text("vous pouvez préciser", 13, 12);
  m.text("DEPARTEMENT:...........................", 1, 13);
  m.text("ADRESSE:...........................", 5, 14);
  m.text("PRENOM:...........................", 6, 15);
  m.text("________________________________________", 1, 16);
  m.text("ligne suivante", 18, 18);
  m.text("ligne précédente", 16, 19);
  m.text("effacer", 25, 20);
  m.text("choisir dans une liste", 10, 21);
  m.text("obtenir la reponse", 14, 22);

// Selection
  
  m.invertVideo();
  
  m.text(" Suite  ", 33, 18);
  m.text(" Retour ", 33, 19);
  m.text(" Correc.", 33, 20);
  m.text(" Guide  ", 33, 21);
  m.text(" Envoi  ", 33, 22);
  
  m.standardVideo();

//end

  m.bip(10000);
  m.moveCursorTo(13, 5);
  m.cursor();
  
  delay(200000);

}
