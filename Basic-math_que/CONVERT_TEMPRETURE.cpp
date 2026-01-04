#include <string>
using namespace std;

class TemperatureConverter {
public:
    double convertTemperature(double temp, string conversionType) {
        if (conversionType == "CtoF") {
            return (temp * 9 / 5) + 32.00;  
        } else if (conversionType == "FtoC") 
        {
            return (temp - 32.00) * 5 / 9; 
        } else {
            return 0;  
        }
    }
};


// 429. Convert Temperature Between Celsius and Fahrenheit




// Easy
// 0
// The task is to implement a function that can convert temperatures between Celsius and Fahrenheit based on a specified input conversion type. You are given a temperature value and a conversion type, and your goal is to compute the equivalent temperature in the other unit and return it. The result should be rounded to two decimal places.

// Conversion Formulas:
// Celsius to Fahrenheit:

// [ F = C \times \frac{9}{5} + 32 ]

// Fahrenheit to Celsius:

// [ C = (F - 32) \times \frac{5}{9} ]

// Examples:
// Example 1:
// Input:

// temp = 0, conversion = "CtoF"

// Output:

// 32.00

// Explanation: 0 degrees Celsius is equivalent to 32 degrees Fahrenheit.

// Example 2:
// Input:

// temp = 32, conversion = "FtoC"

// Output:

// 0.00