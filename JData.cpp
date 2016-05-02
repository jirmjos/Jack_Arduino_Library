/*
   Copyright 2016 Alessandro Pasqualini

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
   
   @author         Alessandro Pasqualini <alessandro.pasqualini.1105@gmail.com>
   @url            https://github.com/alessandro1105
*/

#include <Arduino.h>
#include "JData.h"


//---JDATA---
JData::JData() { //costruttore

   //costruisco la root
   _root = &jsonBuffer.createObject();

   //indico che l'oggetto nested non è ancora stato creato
   _nestedObjectExists = 0;
}


JData::~JData() { //distruttore

   //elimino la root
   delete _root;
}

//---ADD FUNCTION---
void JData::add(const char *key, bool value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;

}

void JData::add(const char *key, float value, uint8_t decimals = 2) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, double value, uint8_t decimals = 2) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, signed char value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, signed long value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, signed int value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, signed short value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, unsigned char value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, unsigned long value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, unsigned int value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, unsigned short value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, const char *value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

void JData::add(const char *key, const String &value) {
   //verifico se è stato costruito l'oggetto nested per memorizzare i dati
   if (!_nestedObjectExists) {
      createNestedObject();
   }

   _root[JK_MESSAGE_TYPE_DATA][key] = value;
}

//---GET FUNCTION---
JsonVariant JData::get(const char *key) {

   //ritorno il dato richiesto
   return _root[JK_MESSAGE_TYPE_DATA][key];
}

//---PRIVATE---

//funzione che crea l'oggetto nested
void JData::createNestedObject() {

   //creo l'oggetto nested
   _root.createNestedObject(JK_MESSAGE_TYPE_DATA);

   //indico che è stato creato
   _nestedObjectExists = 1;
}


