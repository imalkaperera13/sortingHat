#include<iostream>
using namespace std;
int main(){
  int gryffindor,hufflepuff,ravenclaw,slytherin;
  int answer1,answer2,answer3,answer4;

  cout<<"The Sorting Hat Quiz! \n";
  cout<<"Q1) When I'm dead, I want people to remember me as: "<<endl;

  cout<<"1) The Good"<<endl;
  cout<<"2) The Great"<<endl;
  cout<<"3) The Wise"<<endl;
  cout<<"4) The Bold"<<endl;

  cin>>answer1;

  if(answer1 == 1){
    hufflepuff++;
  }
  else if(answer1 == 2){
    slytherin++;
  }
  else if(answer1 == 3){
    ravenclaw++;
  }
  else if(answer1 == 4){
    gryffindor++;
  }
  else{
    cout<<"Invalid input.";
  }

  cout<<"Q2) Dawn or Dusk? "<<endl;

  cout<<"1) Dawn"<<endl;
  cout<<"2) Dusk"<<endl;

  cin>>answer2;

  if(answer2 == 1){
    gryffindor++;
    ravenclaw++;
  }
  else if(answer2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else{
    cout<<"Invalid input.";
  }

  cout<<"Q3) Which kind of instrument most please your ear? "<<endl;

  cout<<"1) The violin"<<endl;
  cout<<"2) The trumpet"<<endl;
  cout<<"3) The piano"<<endl;
  cout<<"4) The drum"<<endl;

  cin>>answer3;

  if(answer3 == 1){
    slytherin++;
  }
  else if(answer3 == 2){
    hufflepuff++;
  }
  else if(answer3 == 3){
    ravenclaw++;
  }
  else if(answer3 == 4){
    gryffindor++;
  }
  else{
    cout<<"Invalid input.";
  }
  cout<<"Q4) Which road tempts you most? "<<endl;

  cout<<"1) The vwide, sunny grassy lane."<<endl;
  cout<<"2) The narrow, dark, lantern-lit alley."<<endl;
  cout<<"3) The twisting, leaf-strewn path through woods."<<endl;
  cout<<"4) The cobbled street lined (ancient buildings)."<<endl;

  cin>>answer4;

  if(answer4 == 1){
    hufflepuff++;
  }
  else if(answer4 == 2){
    slytherin++;
  }
  else if(answer4 == 3){
    gryffindor++;
  }
  else if(answer4 == 4){
    ravenclaw++;
  }
  else{
    cout<<"Invalid input.";
  }

  string house;
  int max;

  if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
  }
if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
}
if (ravenclaw > max) {
   max = ravenclaw;
  house = "Ravenclaw";
}
if (slytherin > max) {
   max = slytherin;
  house = "Slytherin";
}

cout <<"Winner is : "<< house << "!\n";





  }
