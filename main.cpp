// igcse pre release oct/noc 2019 code: 0478/21
//KawaiiPillow

#include <iostream>
#include <vector>
#include "test_functions.hpp"

std::vector<std::string> type_of_slab = {"Dover", "Exeter", "London", "Portland", "Shaftsbury", "York"};

std::vector<double> price = {30.00, 35.00, 42.00, 49.50, 55.00, 62.75};

double type;
double len;
double width;
int area;
double type_price;
double total_price;
int area_choice;
int num_tiles;
bool rep = true;
int wastage;


int main() {

  for (int abc = 0; abc < type_of_slab.size(); abc++){
    std::cout << abc + 1 << ") " << type_of_slab[abc] << "\n";
  }


  std::cout << "enter the type of stone slab \n";

  std::cin >> type;

  type = type - 1;

  type_price = price[type];


  while (rep == true){

    std::cout << "pick and option from the following \n" << "1) giving the total area \n" << "2) giving area of stone slabs and number of slabs \n";
  
    std::cin >> area_choice;

    if (area_choice == 1) {

      rep = false;

      area = area_choice_func_1(area, len, width);
      
    }

    if (area_choice == 2) {

      rep = false;

      area = area_choice_func_2(area, len, width, num_tiles);
      
    }
    

  }
 
  total_price = test_thing(area, type_price, total_price);

  std::cout << area << "\n" << total_price << "\n";

  rep = true;

  while (rep == true) {

    std::cout << "is there any waste, enter 1 for yes and 2 for no \n";
    
    std::cin >> wastage;

    if (wastage == 1) {

      area = wastage_func(area);
      
      rep = false;

    }

    if (wastage == 2) {

      rep = false;

    }
    
  }
  
  total_price = test_thing(area, type_price, total_price);


  std::cout << "the area of stone slabs needed is: " << area << "\n" << "the total cost of the slabs will be: " << total_price << "\n" << "and the type of stone slab is: " << type_of_slab[type];

}

