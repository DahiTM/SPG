#include "classPasswordGeneration.h"

ClassPasswordGeneration::ClassPasswordGeneration() {}

QString ClassPasswordGeneration::generatPass(int _howManyChar,bool _isCheckedCheckBox){

    QString resultPass;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis0(0, fourNum.size()-1);
    std::uniform_int_distribution<> dis1(0, bigLetters.size()-1);
    std::uniform_int_distribution<> dis2(0, smallLetters.size()-1);
    std::uniform_int_distribution<> dis3(0, figures.size()-1);
    std::uniform_int_distribution<> dis4(0, specialChar.size()-1);
    std::uniform_int_distribution<> dis5(0, threeNum.size()-1);

    if(_isCheckedCheckBox){
        for (int i = 0; i < _howManyChar; ++i) {
            int d = fourNum[dis0(gen)];
            int randomIndex;
            switch (d){
            case 1:
                randomIndex = dis1(gen);
                resultPass.push_back(bigLetters[randomIndex]);
                break;
            case 2:
                randomIndex = dis2(gen);
                resultPass.push_back(smallLetters[randomIndex]);
                break;
            case 3:
                randomIndex = dis3(gen);
                resultPass.push_back(figures[randomIndex]);
                break;
            case 4:
                randomIndex = dis4(gen);
                resultPass.push_back(specialChar[randomIndex]);
                break;
            }
        }
    }else{
        for (int i = 0; i < _howManyChar; ++i) {
            int d = threeNum[dis5(gen)];
            int randomIndex;
            switch (d){
            case 1:
                randomIndex = dis1(gen);
                resultPass.push_back(bigLetters[randomIndex]);
                break;
            case 2:
                randomIndex = dis2(gen);
                resultPass.push_back(smallLetters[randomIndex]);
                break;
            case 3:
                randomIndex = dis3(gen);
                resultPass.push_back(figures[randomIndex]);
                break;
            }
        }
    }


    return resultPass;
}
