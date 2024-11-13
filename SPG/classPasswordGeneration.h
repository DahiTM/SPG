#ifndef CLASSPASSWORDGENERATION_H
#define CLASSPASSWORDGENERATION_H

#include <QVector>
#include <QString>
#include <random>

class ClassPasswordGeneration
{
private:
    QVector <char> bigLetters = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    QVector <char> smallLetters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    QVector <char> figures = {'0','1','2','3','4','5','6','7','8','9'};
    QVector <char> specialChar = {'!','#','$','%','&','(',')','*','+','.','/',':',';','=','>','?','@','^','{','|','}','~'};

    QVector <int> fourNum = {1 ,2 ,3 ,4};
    QVector <int> threeNum = {1 ,2 ,3};

public:
    ClassPasswordGeneration();
    QString generatPass(int _howManyChar,bool _isCheckedCheckBox);
};

#endif // CLASSPASSWORDGENERATION_H
