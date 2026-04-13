#include "ConvertSystem.h"

ToConvert::ToConvert(int num)
    :str_number{0},int_number{num} {
        std::cout << "A new number to convert is initialized: " << int_number << std::endl;
    }
ToConvert::ToConvert(std::string num)
    :str_number{num},int_number{} {
        for(size_t i{0}; i < str_number.size(); i++){
            str_number.at(i) = std::toupper(str_number.at(i));
        }
        HexToDec();
        std::cout << "A new number to convert is initialized: " << str_number << std::endl;
    }
ToConvert::ToConvert(ToConvert &source)
    :str_number(source.str_number),int_number{source.int_number} {
        std::cout << "copied [" << str_number << "]" << std::endl;
        std::cout << "copied [" << int_number << "]" << std::endl;
    }

int ToConvert::HexToDec(){
    int result {};
    int pot {};
    for(int i {str_number.size()-1}; i >= 0; i--){
        if(str_number.at(i) >= 48 && str_number.at(i) <= 57){
            result += (str_number.at(i) - 48) * pow(16,pot);
        }
        else if(str_number.at(i) >= 65 && str_number.at(i) <= 70) {
            result += (str_number.at(i) - 55) * pow(16,pot);
        }
        else{
            return -1;
        }
        pot++;
    }
    // std::cout << result << std::endl;
    set_intNumber(result);
    return result;
}

std::string ToConvert::DecToHex(){
    bool done {false};
    int calc = int_number;
    std::string result {""};
    while(!done){
        if(calc > 1){
            switch(calc%16){
                case 0:
                    result += "0";
                case 1:
                    result += "1";
                    break;
                case 2:
                    result += "2";
                    break;
                case 3:
                    result += "3";
                    break;
                case 4:
                    result += "4";
                    break;
                case 5:
                    result += "5";
                    break;
                case 6:
                    result += "6";
                    break;
                case 7:
                    result += "7";
                    break;
                case 8:
                    result += "8";
                    break;
                case 9:
                    result += "9";
                    break;
                case 10:
                    result += "A";
                    break;
                case 11:
                    result += "B";
                    break;
                case 12:
                    result += "C";
                    break;
                case 13:
                    result += "D";
                    break;
                case 14:
                    result += "E";
                    break;
                case 15:
                    result += "F";
                    break;
                default:
                    return "[ERROR]: NAN";
            }
        }else{
            done = true;
        }
    }
}

std::string ToConvert::get_strNumber(){
    return str_number;
}
int ToConvert::get_intNumber(){
    return int_number;
}

void ToConvert::set_intNumber(int n){
    int_number=n;
}