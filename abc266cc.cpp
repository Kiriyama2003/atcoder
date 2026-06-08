#include <iostream>
using namespace std;
// ベクトルの外積を計算する関数
int crossProduct(int x1, int y1, int x2, int y2) {
    return x1 * y2 - y1 * x2;
}
int main() {
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    // 4つの点の座標を入力
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;
    
    // ベクトルAB, BC, CD, DAを計算
    int ABx = Bx - Ax, ABy = By - Ay;
    int BCx = Cx - Bx, BCy = Cy - By;
    int CDx = Dx - Cx, CDy = Dy - Cy;
    int DAx = Ax - Dx, DAy = Ay - Dy;
    
    // 各角の外積を計算
    int cross1 = crossProduct(ABx, ABy, BCx, BCy);
    int cross2 = crossProduct(BCx, BCy, CDx, CDy);
    int cross3 = crossProduct(CDx, CDy, DAx, DAy);
    int cross4 = crossProduct(DAx, DAy, ABx, ABy);
    
    // 外積が全て正なら各角は180度未満
    if (cross1 > 0 && cross2 > 0 && cross3 > 0 && cross4 > 0) {
        cout<<"Yes"<<endl;}
    else cout<<"No"<<endl;

    return 0;
}
