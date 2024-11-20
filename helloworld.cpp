// VS Code C/C++ 测试代码 "Hello World"
// 由 VSCodeConfigHelper v4.0.10 生成

// 您可以在当前文件夹（工作文件夹）下新建 .cpp 源文件编写代码。

// 按下 F6 编译运行。
// 按下 F5 编译调试。
// 按下 Ctrl + Shift + B 编译。

#include <iostream>
using namespace std;
int main() {
    int ans{42};
    int x{0};
    cin >> x;
    while (x!=ans){
        if (x>ans) {
            cout << "Your guess is bigger than the answer." << endl;
        }
        if (x<ans) {
            cout << "Your guess is smaller than the answer." << endl;
        }
        cin >> x;
    }
    cout << "Correct!" << endl;
}





// 此文件编译运行将输出 "Hello, world!"。
// 按下 F6 后，你将在弹出的终端窗口中看到这一行字。
// !! 重要提示：请您在编写代码前，确认文件名不含中文或特殊字符。 !!
// 若遇到问题，请联系开发者 guyutongxue@163.com。