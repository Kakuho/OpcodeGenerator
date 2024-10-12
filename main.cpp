// basic test to see if it can generate the combinations for me
// 01-r-r'

#include <string>
#include <array>
#include <iostream>
#include <sstream>
#include <iomanip>

void DoubleRComboBuilder(){
  static std::array<std::string, 7> rtable = 
  {"000", "001", "010", "011", "100", "101", "111"};

  for(int i = 0; i < rtable.size(); i++){
    for(int j = 0; j < rtable.size(); j++){
      std::stringstream builder;
      builder << "01" << rtable[i] << rtable[j];
      std::cout << std::hex 
                << std::stoi(builder.str().c_str(), nullptr, 2)
                << '\n';
    }
  }
}

void RComboBuilder(){
  static std::array<std::string, 7> rtable = 
  {"000", "001", "010", "011", "100", "101", "111"};

  for(int i = 0; i < rtable.size(); i++){
    std::stringstream builder;
    builder << "01110" << rtable[i];
    std::cout << "0x"
              << std::hex << std::setw(2) << std::setfill('0')
              << std::stoi(builder.str().c_str(), nullptr, 2)
              << '\n';
  }
}

void RFlagComboBuilder(){
  // mostly for io group
  static std::array<std::string, 8> flagr_table = 
  {"110", "000", "001", "010", "011", "100", "101", "111"};

  for(int i = 0; i < flagr_table.size(); i++){
    std::stringstream builder;
    builder << "01" << flagr_table[i] << "000";
    std::cout << "0x"
              << std::hex << std::setw(2) << std::setfill('0')
              << std::stoi(builder.str().c_str(), nullptr, 2)
              << '\n';
  }
}


void DDComboBuilder(){
  static std::array<std::string, 4> ddtable = 
  {"00", "01", "10", "11"};

  for(int i = 0; i < ddtable.size(); i++){
    std::stringstream builder;
    builder << "00" << ddtable[i] << "1001";
    std::cout << "0x"
              << std::hex << std::setw(2) << std::setfill('0')
              << std::stoi(builder.str().c_str(), nullptr, 2)
              << '\n';
  }
}

void SSComboBuilder(){
  static std::array<std::string, 4> sstable = 
  {"00", "01", "10", "11"};

  for(int i = 0; i < sstable.size(); i++){
    std::stringstream builder;
    builder << "01" << sstable[i] << "0010";
    std::cout << "0x"
              << std::hex << std::setw(2) << std::setfill('0')
              << std::stoi(builder.str().c_str(), nullptr, 2)
              << '\n';
  }
}

void BRComboBuilder(){
  static std::array<std::string, 7> rtable = 
  {"000", "001", "010", "011", "100", "101", "111"};

  static std::array<std::string, 8> btable = 
  {"000", "001", "010", "011", "100", "101", "110", "111"};

  for(int b = 0; b < btable.size(); b++){
    for(int r = 0; r < rtable.size(); r++){
      std::stringstream builder;
      builder << "10" << btable[b] << rtable[r];
      std::cout << "0x"
                << std::hex << std::setw(2) << std::setfill('0')

                << std::stoi(builder.str().c_str(), nullptr, 2)
                << '\n';
    }
  }
}

void BComboBuilder(){
  static std::array<std::string, 8> btable = 
  {"000", "001", "010", "011", "100", "101", "110", "111"};

  for(int b = 0; b < btable.size(); b++){
      std::stringstream builder;
      builder << "10" << btable[b] << "110";
      std::cout << "0x"
                << std::hex << std::setw(2) << std::setfill('0')
                << std::stoi(builder.str().c_str(), nullptr, 2)
                << '\n';
  }
}

int main(){
  DDComboBuilder();
}
