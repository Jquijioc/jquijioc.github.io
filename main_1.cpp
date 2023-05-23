#include <iostream>
#include <vector>
#include <string>


int countFirst(std::string input){

    //create temp vector that takes in strings
    std::vector<std::string> temp;

    std::string substring;

    //counter for char key
    int count = 0;


    //fill vector with string data

    //like micro5 theres but instead of < its whitespace

    for(int i = 0; i < input.length(); i++){

        //when its numbers
        if(input.at(i) != ' '){

            substring.push_back(input.at(i));

            if(i == input.length() - 1){
                //std::cout << "space" << std::endl;

                //add the original number to vector temp
                temp.push_back(substring);

                substring.clear();

            }


        //when u reach a space, meaning new number
        }else if(input.at(i) == ' '){

            //std::cout << "space" << std::endl;

            //add the original number to vector temp
            temp.push_back(substring);

            substring.clear();
        }
    }

    //test if temp is correct

    // for(int j = 0; j < temp.size(); j++){

    //     std::cout << temp[j] << " ";
    // }

    // std::cout << std::endl:

    //key char is first value in vector
    std::string key = temp[0];

    for(int i = 0; i < temp.size(); i++){

        if(key == temp[i]){

            count++;
        }
    }

    return count;
}

int main(){

    //get user input
    std::string input;

    std::getline(std::cin, input);

    //std::cout << input << std::endl;

    //testing if vector made correctly
    // for(int i = 0; i < temp.size(); i++){

    //     std::cout << temp[i];
    // }

    int output = countFirst(input);

    std:: cout << output;

    return 0;
}