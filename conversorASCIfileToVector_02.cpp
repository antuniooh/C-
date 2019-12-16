#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>
#include <string>
#include <vector>

std::vector<std::string>
returnVector(std::vector<std::vector<std::string>> data) {
  std::string type;
  std::cout << "Enter the name of vector without spaces " << std::endl;
  std::getline(std::cin, type);
  std::vector<std::string> vector;

  for (int j = 0; j < data[66].size(); j++) {
    if ((type.compare(data[66][j])) == 0) {
      for (int i = 66; i < 98; i++) {
        vector.push_back(data[i][j]);
      }
    }
  }
  return vector;
}

std::vector<std::vector<std::string>> readFile(std::string nameFile) {
  std::ifstream file(nameFile);
  std::vector<std::vector<std::string>> data;

  if (!file) {
    std::cout << "error" << std::endl;
  } else {
    while (file) {
      std::string line;
      if (!getline(file, line))
        break;

      std::istringstream lineinline(line);
      std::vector<std::string> eachInput;

      while (lineinline) {
        std::string word;
        if ((!getline(lineinline, word, ','))) {
          break;
        }
        if (data.size() >= 66) {
          word.erase(std::remove_if(word.begin(), word.end(), isspace),
                     word.end());
        }
        eachInput.push_back(word);
      }
      data.push_back(eachInput);
    }
    return data;
  }
}

std::string search(std::vector<std::vector<std::string>> data) {
  std::string searchWord;
  std::cout << "Enter the name " << std::endl;
  std::getline(std::cin, searchWord);
  std::string resp;
  for (int i = 0; i < 66; i++) {
    if (std::size_t pos = data[i][0].find(searchWord) != -1) {
      // just values with ":"
      for (int j = 0; j < data[i][0].size(); j++) {
        if ((data[i][0])[j] == ':') {
          // caso o primeiro seja ':', pula
          if ((data[i][0].substr(pos + searchWord.size() + 1))[0] == ':') {
            resp += data[i][0].substr(pos + searchWord.size() + 2) + "\n";
          } else {
            resp += data[i][0].substr(pos + searchWord.size() + 1) + "\n";
          }
        } else {
          // pass
        }
      }

    } else {
      // nothing
    }
  }
  return resp;
}

int main() {
  std::vector<std::vector<std::string>> data;
  data = readFile("190904_0019.asc");

  std::vector<std::string> vector;
  vector = returnVector(data);
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << std::endl;
  }

  std::string searchResp;
  searchResp = search(data);
  std::cout << searchResp << std::endl;

  return 0;
}
