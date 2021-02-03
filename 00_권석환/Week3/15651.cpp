//
//  15651.cpp
//  Problem_solving
//
//  Created by Seokhwan Kwon on 2021/02/03.
//

#include <iostream>
using namespace std;

// 첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 7)
const int MAX = 7;


void func(int N, int M)
{
    int idx = 0;
    
    int arr[MAX];
    if(idx == MAX)
    {
        for(int i = 0; i < M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
}

int main(int argc, const char * argv[])
{
    int N, M;
    cin >> N >> M;
    func(N, M);
    
    return 0;
}
