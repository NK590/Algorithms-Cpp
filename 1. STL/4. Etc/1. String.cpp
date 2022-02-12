/*
String (문자열)
STL에 포함되어 있지는 않지만, 자주 사용되는 문자열 라이브러리
*/

#include <iostream> 
#include <string>
using namespace std;

int main()
{
    string t("Hello!");                             // 문자열 선언
    const char* p1 = "Hello!";                      // Hello! 의 첫 글자
    const char* p2 = p1 + 6;                        // Hello! 의 마지막 글자

    string s1;                                      // 기본 생성자
    string s2("Hello!");                            // 문자열 선언
    string s3("Hello!", 5);                         // 앞 5글자만 가져오기
    string s4(5, 'H');                              // H를 5번 반복
    string s5(t.begin(), t.end());                  // 반복자로 t의 첫 글자 ~ 마지막 글자
    string s6(p1, p2);                              // 포인터로 p1 ~ p2

    cout << "s1()\t\t: " << s1 << '\n';             // 출력 결과 확인
    cout << "s2(str)\t\t: " << s2 << '\n';
    cout << "s3(str, n)\t: " << s3 << '\n';
    cout << "s4(n, c)\t: " << s4 << '\n';
    cout << "s5(iter1, iter2): " << s5 << '\n';
    cout << "s6(p1, p2)\t: " << s6 << '\n';

    return 0;
}