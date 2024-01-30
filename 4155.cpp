#include<bits/stdc++.h>
using namespace std;

int main(){
    double number, Y;
    int X = 0;
    cin >> number;
    int temp = (int)number;
    Y = abs(10 * (number - temp));
    if (Y >= 0 && Y <= 2) 
        cout << temp << "-";
    if (Y >= 3 && Y <= 6)
        cout << temp;
    if (Y >= 7 && Y <= 9)
        cout << temp << "+";
    return 0;
}

/*这段代码看起来是在处理输入的浮点数，根据小数部分的值输出不同的符号。我注意到您将浮点数的小数部分存储在Y中，并使用abs函数取绝对值。然后，通过比较Y的值，选择输出相应的符号。

尽管这段代码在逻辑上是可行的，但有一个潜在的问题是浮点数比较可能导致精度问题。在计算机中，浮点数的精度是有限的，因此可能存在舍入误差。在这里，您使用了Y的具体值进行比较，这可能导致在边缘情况下出现问题。

一个更可靠的比较方法是使用一个小的误差范围，例如，if (Y >= 0 && Y <= 2) 可以改为 if (Y >= 0 && Y <= 2 + 1e-9)，以处理舍入误差。

除此之外，还有一些改进的地方，例如使用else if语句来避免多个条件同时成立时输出多个结果。以下是带有一些改进的代码：

cpp
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    double number, Y;
    int X = 0;
    cin >> number;
    int temp = (int)number;
    Y = abs(10 * (number - temp));
    if (Y >= 0 && Y <= 2 + 1e-9)
        cout << temp << "-";
    else if (Y >= 3 && Y <= 6 + 1e-9)
        cout << temp;
    else if (Y >= 7 && Y <= 9 + 1e-9)
        cout << temp << "+";
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    scanf("%d.%d", &x, &y);
    printf("%d%s\n", x, y <= 2 ? "-" : (y <= 6 ? "" : "+"));
    return 0;
}
