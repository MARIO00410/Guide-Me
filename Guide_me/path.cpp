#include "path.h"

Path::Path(string destination,int money,string transportation) {
    this->destination = destination;
    this->money = money;
    this->transportation = transportation;
}
Path::Path(string destination,int money,string transportation,int id){
    this->destination = destination;
    this->money = money;
    this->transportation = transportation;
    this->id = id;

}
