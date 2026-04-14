#include "ConvertSystem.h"

ToConvert::ToConvert(int num)
    :str_number{0},int_number{num},hex_number{},bin_number{} {
        hex_number = DecTo("Hex");
        bin_number = DecTo("Bin");
        std::cout << "A new number to convert is initialized: " << int_number << std::endl;
    }
ToConvert::ToConvert(std::string num)
    :str_number{num},int_number{},hex_number{},bin_number{} {

        if(str_number.size() >= 2 && str_number.at(1) == 'x'){
            str_number.erase(0,2);
            for(size_t i{0}; i < str_number.size(); i++){
                str_number.at(i) = std::toupper(str_number.at(i));
            }
            hex_number = str_number;
            int_number = HexTo();
            bin_number = HexTo("BIN");
            std::cout << "A new number to convert is initialized: 0x" << str_number << std::endl;
        }
        else if(str_number.at(1) == 'b'){
            str_number.erase(0,2);
            bin_number = str_number;
            int_number = BinTo();
            std::cout << "A new number to convert is initialized: 0b" << str_number << std::endl;
        }
    }
ToConvert::ToConvert(ToConvert &source)
    :str_number(source.str_number),int_number{source.int_number},hex_number{source.hex_number},bin_number{source.bin_number} {
        std::cout << "copied [0x" << hex_number << "]" << std::endl;
        std::cout << "copied [0b" << bin_number << "]" << std::endl;
        std::cout << "copied [" << int_number << "]" << std::endl;
    }

int ToConvert::HexTo(){
    int result {};
    int pot {};
    for(int i {hex_number.size()-1}; i >= 0; i--){
        if(hex_number.at(i) >= 48 && hex_number.at(i) <= 57){
            result += (hex_number.at(i) - 48) * pow(16,pot);
        }
        else if(hex_number.at(i) >= 65 && hex_number.at(i) <= 70) {
            result += (hex_number.at(i) - 55) * pow(16,pot);
        }
        else{
            hex_number = "[ERROR]: NAN";
            return -1;
        }
        pot++;
    }
    // std::cout << result << std::endl;
    return result;
}
std::string ToConvert::HexTo(std::string conv){
    for(size_t i {}; i < conv.size();i++ ){
        conv.at(i) = toupper(conv.at(i));
    }  
    int result {};
    int pot {};
    for(int i {hex_number.size()-1}; i >= 0; i--){
        if(hex_number.at(i) >= 48 && hex_number.at(i) <= 57){
            result += (hex_number.at(i) - 48) * pow(16,pot);
        }
        else if(hex_number.at(i) >= 65 && hex_number.at(i) <= 70) {
            result += (hex_number.at(i) - 55) * pow(16,pot);
        }
        else{
            hex_number = "[ERROR]: NAN";
            
        }
        pot++;
    }
    int_number = result;
    if(conv == "BIN"){
        return DecTo("BIN");
    }
    else{
        return "[ERROR]: could not convert --invalid conversion goal" ;
    }
}

int ToConvert::BinTo(){
    int result {};
    int pot {};
    for(int i {bin_number.size()-1};i>=0;i--){
        if(bin_number.at(i) >= 48 && bin_number.at(i) <= 57){
            result += (bin_number.at(i)-48) * pow(2,pot);
        }else{
            bin_number = "[ERROR]: NAN";
            return -1;
        }
        pot++;
    }
    return result;
}
std::string ToConvert::BinTo(std::string conv){
    for(size_t i {}; i < conv.size(); i++){
        conv.at(i) = toupper(conv.at(i));
    }
    int result {};
    int pot {};
    for(int i {bin_number.size()-1};i>=0;i--){
        if(bin_number.at(i) >= 48 && bin_number.at(i) <= 57){
            result += (bin_number.at(i)-48) * pow(2,pot);
        }else{
            return "[ERROR]: NAN";
        }
        pot++;
    }
    int_number = result;
    if(conv == "HEX"){
        return DecTo("HEX");
    }
    return "[ERROR]: unknown destination for convertion";
}

std::string ToConvert::DecTo(std::string conv){
    if(int_number == 0){
        return "0";
    }
    int calc = int_number;
    bool done {false};
    std::string result {""};
    for(size_t i {}; i < conv.size(); i++){
        conv.at(i) = toupper(conv.at(i));
    }
    if(conv == "BIN"){
        while(!done){
            if(calc > 0){    
                switch(calc%2){
                    case 0:
                        result += "0";
                        break;
                    case 1:
                        result += "1";
                        break;
                    default:
                        return "[ERROR]: NAN";
                }
            }else {
                done = true;
            }
            calc/=2;
        }
    }else if(conv == "HEX"){
        while(!done){
            if(calc > 0){
                switch(calc%16){
                    case 0:
                        result += "0";
                        break;
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
            calc/=16;
        }
        std::reverse(result.begin(), result.end());
    }
    return result;
}

std::string ToConvert::get_hexNumber(){
    return hex_number;
}
std::string ToConvert::get_binNumber(){
    return bin_number;
}
int ToConvert::get_intNumber(){
    return int_number;
}

void ToConvert::set_number(int n){
    int_number=n;
    updateValues("INT");
}
void ToConvert::set_number(std::string n){
    std::string dest {};
    if(n.size() >= 2 && (n.at(1) == 'x' || n.at(1) == 'b')){
        if(n.at(1) == 'x'){
            dest = "HEX";
        }
        if(n.at(1) == 'b'){
            dest = "BIN";
        }
        n.erase(0,2);
        for(size_t i{0}; i < n.size(); i++){
            n.at(i) = std::toupper(n.at(i));
        }
    }
    else{
        hex_number = "[ERROR]: NAN";
        return;
    }
    if(dest == "HEX"){
        hex_number = n;
    }
    else if(dest == "BIN"){
        bin_number = n;
    }
    updateValues(dest);
}

void ToConvert::updateValues(std::string origin){
    for(size_t i{}; i < origin.size(); i++){
        origin.at(i) = toupper(origin.at(i));
    }
    if(origin == "HEX"){
        bin_number = ("BIN");
    }
    else if(origin == "BIN"){
        hex_number = BinTo("HEX");
    }
    else if(origin == "DEC"){
        bin_number = ("BIN");
        hex_number = ("HEX");
    }
    else{
        int_number = -1;
        bin_number = "[ERROR]: update of values failed after changing\n --invalid origin";
        hex_number = "[ERROR]: update of values failed after changing\n --invalid origin";
    }
}
void ToConvert::display_obj(){
    std::cout << "Displaying: <" << obj_name << ">" << std::endl;
    std::cout << "--Decimal:            " << int_number << std::endl;
    std::cout << "--Hexadeximal:        0x" << hex_number << std::endl;
    std::cout << "--Binary:             0b" << bin_number << std::endl;
}

void ToConvert::set_objName(std::string name){
    std::cout << "object name is now: " << name << std::endl;
    obj_name = name;
}