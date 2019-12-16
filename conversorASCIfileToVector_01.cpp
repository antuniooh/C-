#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>
#include <string>
#include <vector>

/*std::vector<std::string>
returnVector(std::string type, std::vector<std::vector<std::string>> data) {
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

*/
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

/*
 */

std::string search(std::vector<std::vector<std::string>> data) {
  std::string searchWord;
  std::cout << "Enter the name " << std::endl;
  std::getline(std::cin, searchWord);

  std::string searchTarget;
  std::cout << "Enter the name " << std::endl;
  std::getline(std::cin, searchTarget);

  std::string resp;
  for (unsigned int i = 0; i < 66; i++) {
    if (std::size_t pos = data[i][0].find(searchWord) != -1) {
      for (unsigned int j = 0; j < data[i][0].size(); j++) {
        if ((data[i][0])[j] == ':') {

          if (searchTarget != "NULL") {
            std::string target;
            for (int m = i; m >= 0; m--) {
              if ((data[m][0])[0] != ' ') {
                target = data[m][0];
                if (target == searchTarget) {
                  break;
                }
              }
            }
          }
          if ((data[i][0].substr(pos + searchWord.size() + 1))[0] == ':') {
            resp = data[i][0].substr(pos + searchWord.size() + 2) + "\n";
          } else {
            resp += data[i][0].substr(pos + searchWord.size() + 1) + "\n";
          }
        }
      }
    }
  }
  resp.erase(std::remove_if(resp.begin(), resp.end(), isspace), resp.end());

  return resp;
}

int main() {
  std::vector<std::vector<std::string>> data;
  data = readFile("190904_0019.asc");

  /*std::vector<std::string> vector;
  vector = returnVector("Time", data);
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << std::endl;
  }*/

  std::string searchResp;
  searchResp = search(data);
  std::cout << std::stod(searchResp) << std::endl;

  return 0;
}
