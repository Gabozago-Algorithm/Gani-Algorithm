// [2857] FBI

/*
5���� ��� �� FBI ����� ã�� ���α׷��� �ۼ��Ͻÿ�.
FBI����� ����� ø������ FBI�� ����ִ�.

�Է�
5�� �ٿ� ����� ø�������� �־�����.
ø�������� ���ĺ� �빮��, ���� 0~9, ��� (-)�θ� �̷���� ������, �ִ� 10����

���
ù° �ٿ� FBI ����� ����Ѵ�.
�ش��ϴ� ����� �� ��° �Է������� �������� �����Ͽ� ����ؾ� �ϸ�, ������������ ���
���� FBI ����� ���ٸ� "HE GOT AWAY!"�� ����Ѵ�.
*/

#define _CRT_SECURE_NO_WARNINGS
// ǥ�� ��Ʈ������ �б� �� ���⸦ �����ϴ� ��ü�� ����
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int i = 1;
    bool isFind = false;

    while (i < 6) {
        getline(cin, str);
  
        //find�Լ��� ã�� ���ڿ��� ��ġ�� ��ȯ
        // int ���� �ƴϰ� iterator���̴�.
        if (str.find("FBI") != string::npos)    // string::npos �� ���� null
        {   
            // FBI ���� ���
            cout << i << ' ';
            isFind = true;
        }
        i++;
    }

    // FBI ����� ���ٸ�
    if (!isFind) {
        cout << "HE GOT AWAY!";
    }
}