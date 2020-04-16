#include <iostream>
#include <vector>

double test_thing(double area, double type_price, double total_price) {

  total_price = type_price * area;
  
  return total_price;

}

double area_choice_func_1(double area, double len, double width) {

  std::cout << "enter the length and width in that order: \n";
  std::cin >> len;
  std::cin >> width;
  area = len * width;

  return area;

}

double area_choice_func_2(double area, double len, double width, int num_tiles) {

  std::cout << "enter the number of tiles: \n";
  std::cin >> num_tiles;
  std::cout << "now enter the length and then width of the tiles: \n";
  std::cin >> len; 
  std::cin >> width;
  area = (len * width) * num_tiles;

  return area;


}

int wastage_func(int area) {
  double wastage_percentage;
  std::cout << "enter the percentage waste: ";
  std::cin >> wastage_percentage;

  area = area * (1 + wastage_percentage/100);

  return area;

  
}
