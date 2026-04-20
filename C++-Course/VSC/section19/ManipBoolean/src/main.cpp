/**
 * @file main.cpp
 * @brief showcase of manipulating output streams for booleans
 */
/**
 * @defgroup section19 Section 19: Files, Streams and I/O
 * @brief all about input and output streams and file handling in c++
 * @details this section showcases everything about file and stream handling in c++
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_p01 ManipBoolean
 * @brief showcase of manipulating output streams for booleans
 * @}
 */
/**
 * @addtogroup s19_p01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

int main() {

    cout << "=========================" << endl;
    // Example 1 - noboolalpha

    cout << "noboolalpha - default (10==10): " << (10==10) << endl;
    cout << "noboolalpha - default (20==10): " << (20==10) << endl;
    
    // Example 1 - noboolalpha
    cout << "=========================" << endl;
    // Example 2 -- set to true/false formatting

    cout << boolalpha;
    cout << "boolalpha (10==10): " << (10==10) << endl;
    cout << "boolalpha (20==10): " << (20==10) << endl;
    
    // Example 2 -- set to true/false formatting
    cout << "=========================" << endl;
    // Example 3 -- setting still stays for future boolean insertions
    
    cout << "boolalpha (10==10): " << (10==10) << endl;
    cout << "boolalpha (20==10): " << (20==10) << endl;
    
    // Example 3 -- setting still stays for future boolean insertions
    cout << "=========================" << endl;
    // Example 4 -- toggle to 0/1
    
    cout << noboolalpha;
    cout << "boolalpha (10==10): " << (10==10) << endl;
    cout << "boolalpha (20==10): " << (20==10) << endl;
    
    
    // Example 4 -- toggle to 0/1
    cout << "=========================" << endl;
    // Example 5 -- set back to true/false using setf method
    
    cout.setf(ios::boolalpha);                              // std::cout.setf(std::ios::boolalpha)       
    cout << "boolalpha (10==10): " << (10==10) << endl;
    cout << "boolalpha (20==10): " << (20==10) << endl;
    
    // Example 5 -- set back to true/fals using setf method
    cout << "=========================" << endl;
    // Example 6 -- reset to default

    cout << resetiosflags(ios::boolalpha);                  // std::cout << std::resetiosflags(std::ios::boolalpha);
    cout << "Default (10==10): " << (10==10) << endl;
    cout << "Default (10==20): " << (10==20) << endl;
    
    // Example 6 -- reset to default
    cout << "=========================" << endl;
    
    cout << endl;
    return 0;
}
/** @} */