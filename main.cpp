#include <iostream>

int main()
{

  int nums[9][9] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0}
  };

  //Draw board
  std::cout<<nums[0][0]<<nums[0][1]<<nums[0][2]<<"|"<<nums[0][3]<<nums[0][4]<<nums[0][5]<<"|"<<nums[0][6]<<nums[0][7]<<nums[0][8]<<std::endl;
  std::cout<<nums[1][0]<<nums[1][1]<<nums[1][2]<<"|"<<nums[1][3]<<nums[1][4]<<nums[1][5]<<"|"<<nums[1][6]<<nums[1][7]<<nums[1][8]<<std::endl;
  std::cout<<nums[2][0]<<nums[2][1]<<nums[2][2]<<"|"<<nums[2][3]<<nums[2][4]<<nums[2][5]<<"|"<<nums[2][6]<<nums[2][7]<<nums[2][8]<<std::endl;
  std::cout<<"-----------"<<std::endl;
  std::cout<<nums[3][0]<<nums[3][1]<<nums[3][2]<<"|"<<nums[3][3]<<nums[3][4]<<nums[3][5]<<"|"<<nums[3][6]<<nums[3][7]<<nums[3][8]<<std::endl;
  std::cout<<nums[4][0]<<nums[4][1]<<nums[4][2]<<"|"<<nums[4][3]<<nums[4][4]<<nums[4][5]<<"|"<<nums[4][6]<<nums[4][7]<<nums[4][8]<<std::endl;
  std::cout<<nums[5][0]<<nums[5][1]<<nums[5][2]<<"|"<<nums[5][3]<<nums[5][4]<<nums[5][5]<<"|"<<nums[5][6]<<nums[5][7]<<nums[5][8]<<std::endl;
 std::cout<<"-----------"<<std::endl;
  std::cout<<nums[6][0]<<nums[6][1]<<nums[6][2]<<"|"<<nums[6][3]<<nums[6][4]<<nums[6][5]<<"|"<<nums[6][6]<<nums[6][7]<<nums[6][8]<<std::endl;
  std::cout<<nums[7][0]<<nums[7][1]<<nums[7][2]<<"|"<<nums[7][3]<<nums[7][4]<<nums[7][5]<<"|"<<nums[7][6]<<nums[7][7]<<nums[7][8]<<std::endl;
  std::cout<<nums[8][0]<<nums[8][1]<<nums[8][2]<<"|"<<nums[8][3]<<nums[8][4]<<nums[8][5]<<"|"<<nums[8][6]<<nums[8][7]<<nums[8][8]<<std::endl;
  
  return 0;
}
