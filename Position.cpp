#include "Position.h"



Position::Position(int rowNew,int columNew){
    this->row = rowNew;
    this->column = columNew;
    // std::cout <<"Direccion de row:"<< &row << std::endl;
    // std::cout <<"Direccion de column:"<< &column << std::endl;

}
Position::Position(){
  this->row = 0;
  this->column = 0;
}


  //Método que te devuelve posicion relativa.
  Position Position::relativityPosition(Position& otherPosition){
    int columnNew = otherPosition.getColumn() - this->column;
    int rowNew = otherPosition.getRow() - this->row;
    Position newPosition(rowNew,columnNew);
    return newPosition;
  }

  Position Position::sum(Position& position){
    int newColumn = this->column + position.getColumn();
    int newRow = this->row + position.getRow();
    Position newPosition(newRow,newColumn);
    return newPosition;
  }

  void Position::set(int rowNew,int columnNew){
    // std::cout<< "Position::set: " <<rowNew<<","<<columnNew<< std::endl;
    setRow(rowNew);
    setColumn(columnNew);
    // std::cout << "despues de setear" << std::endl;
    // this->print();
  }


  void Position::setColumn(int columnNew){
    this->column = columnNew;
  }

  void Position::print(){
    std::cout << "("<< this->row << "," << this->column <<  ")" << std::endl;
  }

  void Position::setRow(int rowNew){
    this->row = rowNew;
  }

  int Position::getColumn(){
    return column;
  }

  int Position::getRow(){
    return row;
  }

  Position::~Position(){}
