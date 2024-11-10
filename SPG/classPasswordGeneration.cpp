#include "classPasswordGeneration.h"

ClassPasswordGeneration::ClassPasswordGeneration() {}

QString ClassPasswordGeneration::generatPass(int howManyChar,bool isCheckedCheckBox){

    QString resultPass;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis0(0, fourNum.size()-1);
    std::uniform_int_distribution<> dis1(0, Big_letters.size()-1);
    std::uniform_int_distribution<> dis2(0, Small_letters.size()-1);
    std::uniform_int_distribution<> dis3(0, Figures.size()-1);
    std::uniform_int_distribution<> dis4(0, Special_char.size()-1);
    std::uniform_int_distribution<> dis5(0, threeNum.size()-1);

    if(isCheckedCheckBox){
        for (int i = 0; i < howManyChar; ++i) {
            int d = fourNum[dis0(gen)];
            int randomIndex;
            switch (d){
            case 1:
                randomIndex = dis1(gen);
                resultPass.push_back(Big_letters[randomIndex]);
                break;
            case 2:
                randomIndex = dis2(gen);
                resultPass.push_back(Small_letters[randomIndex]);
                break;
            case 3:
                randomIndex = dis3(gen);
                resultPass.push_back(Figures[randomIndex]);
                break;
            case 4:
                randomIndex = dis4(gen);
                resultPass.push_back(Special_char[randomIndex]);
                break;
            }
        }
    }else{
        for (int i = 0; i < howManyChar; ++i) {
            int d = threeNum[dis5(gen)];
            int randomIndex;
            switch (d){
            case 1:
                randomIndex = dis1(gen);
                resultPass.push_back(Big_letters[randomIndex]);
                break;
            case 2:
                randomIndex = dis2(gen);
                resultPass.push_back(Small_letters[randomIndex]);
                break;
            case 3:
                randomIndex = dis3(gen);
                resultPass.push_back(Figures[randomIndex]);
                break;
            }
        }
    }


    return resultPass;
}
