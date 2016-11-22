/*
 *双色球选号程序
 *6个红号，1个蓝好
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int n=5;
int arrRed[6]={0};

void bubbleSort (int n) {
    //比较n-1趟
    int temp=0;
    for (int i=1; i<=n-1; i++) {
        //每一趟的比较
        for (int j=1; j<=n-i; j++) {
            if(arrRed[j] < arrRed[j+1]) {
                temp=arrRed[j];
                arrRed[j] = arrRed[j+1];
                arrRed[j+1]=temp;
            }
        }/*n-1次循环*/
    }/*n次循环*/
}

void getRandNumbers(int count, int valueScope) {
        int i,j;
        int k =0;
        // 设置种子
        srand( (unsigned)time( NULL ) );

        /* 生成n 个随机数 */
        for( i = 0; i < count; i++ ){
            // 生成实际的随机数
            j= ( rand() % valueScope );    //%后面数字代表取值范围
            if(0 != j) {
                cout << j << " ";
                arrRed[k++] = j;
            }else {
//                while(true) {
//                    j= ( rand() % valueScope );    //%后面数字代表取值范围
//                    if(0 != j) {
//                        cout << j << " ";
//                        arrRed[k++] = j;
//                        break;
//                    } 
//                }/*while*/
            }/*j==0*/
        }/*for*/
        for(int i=0; i<6; i++) {
            cout << arrRed[i] << endl;
        }
}

void printRedNumber() {
    int redNumberCount = 6;
    int redNumberScope = 32;
    cout << "红号为: ";
    getRandNumbers(redNumberCount, redNumberScope);
}

void printBlueNumber() {
    int blueNumberCount = 1;
    int blueNumberScope = 16;
    cout << "蓝号为 :"; 
    getRandNumbers(blueNumberCount, blueNumberScope);
    cout << endl;
    cout << "------------------------------" << endl;
}

int main() {
    try{ 
        //打印红号
        printRedNumber();
        //打印蓝号
        //printBlueNumber();
    }
    catch(const char* msg) {
        cout << "exception msg:" << msg << endl;
    }
    return 0;
}
