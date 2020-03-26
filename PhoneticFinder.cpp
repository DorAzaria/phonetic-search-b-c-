#include "PhoneticFinder.hpp"
#include <iostream>
#include <string>

using namespace std;

int asciiCheck(string current, string temp, int i, char a , char b , char c) {
    if(current.at(i) == a || current.at(i) == a-32) {
        if(temp.at(i) == b || temp.at(i) == b-32)
            return 1;
    }
    if(current.at(i) == b || current.at(i) == b-32) {
        if(temp.at(i) == a || temp.at(i) == a-32)
            return 1;
    }
    if(c != '#') {
        if (current.at(i) == b || current.at(i) == b - 32) {
            if (temp.at(i) == c || temp.at(i) == c - 32)
                return 1;
        }
        if (current.at(i) == c || current.at(i) == c - 32) {
            if (temp.at(i) == b || temp.at(i) == b - 32)
                return 1;
        }
        if (current.at(i) == c || current.at(i) == c - 32) {
            if (temp.at(i) == a || temp.at(i) == a - 32)
                return 1;
        }
        if (current.at(i) == a || current.at(i) == a - 32) {
            if (temp.at(i) == c || temp.at(i) == c - 32)
                return 1;
        }
    }

    return 0;
}
int asciiSearch(string current, string temp, int i) {
    int sum = 0;
    if((current.at(i) + 32) == temp.at(i)) {
        return 1;
    }
    if((temp.at(i) + 32) == current.at(i)) {
        return 1;
    }

    // # is used only for the case of between 2 letters, (a shorter code).
    sum += asciiCheck(current,temp,i,'v','w','#');
    sum += asciiCheck(current,temp,i,'g','j','#');
    sum += asciiCheck(current,temp,i,'s','z','#');
    sum += asciiCheck(current,temp,i,'d','t','#');
    sum += asciiCheck(current,temp,i,'o','u','#');
    sum += asciiCheck(current,temp,i,'i','y','#');
    sum += asciiCheck(current,temp,i,'b','f','p');
    sum += asciiCheck(current,temp,i,'c','k','q');

    if(sum == 1)
        return 1;
    else
    return 0;
}

int check(string temp, string current) {
    int count = 0;
    if(temp.length() != current.length()) {
        return -1;
    }
    else {
        for(int i = 0 ; i < current.length() ;i++) {
            if(current.at(i) == temp.at(i)) {
                count++;
                if(count == current.length())
                    return 1;
            }
            else {
                count += asciiSearch(current,temp,i);
                    if(count == current.length())
                        return 1;
            }
        }
    }
    return 0;
}

string phonetic::find(string text, string current) {

    if(current.empty())
        throw "the word is empty";

    string temp = "";
    int getErr = 0;
    int saveIndex = 0;

    for(int i = 0 ; i < text.length() ; i++) {
        if(text.at(i) == ' ') {
            getErr = check(temp, current);
            saveIndex = i + 1;
            if(getErr == 1) {
                return temp;
            }
            else
            temp.clear();
        }
        else if(i == text.length()-1) {
            temp.clear();
            for(int j = saveIndex ; j < text.length() ; j++)
                temp += text.at(j);
            getErr = check(temp, current);
            if(getErr == 1) {
                return temp;
            }
        }
        else {
            temp += text.at(i);
        }
    }
    throw "this word doesn't exist in the text";
}