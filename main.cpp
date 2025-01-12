#include <iostream>
using namespace std;
int main(){
  int n = 5;
  for (int i = 1; i <= n;i++){ //outer loop
    
    for (int j = 1; j <= n;j++){
      cout<<" * ";
    }
    cout << endl;
  }

  for (int i = 0; i <4; i++)
  { char ch='A';
    for (int j = 1; j<4; j++){
  cout<<ch<<" ";
  ch+= 1;
  }
  cout<<endl;
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << " S ";
    }
    cout << endl;
  }
  for (int i = 0; i <n; i++)
  {
    char cha = 'S'; /* code */
    for (int j = 0; j < n; j++)
    {
      cout << cha<<" ";
      cha++;
  }
  cout << endl;
  }
  int num = 11;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout<<num<<"  ";
      num++;
    }
    cout << endl;
  }
  cout << "after pattern: " << num << endl;
  int m = 3;
  char chac = 'A';
  for (int i = 0; i < m; i++){
    for (int j = 0; j < m;j++){
      cout << chac << " ";
      chac++;
    }
    cout << endl;
  }
  cout << "after pattern: " << chac << endl;
  int n1 = 4;
  for (int i = 0; i < n1; i++){
    for (int j = 0; j < i+1; j++){
      //NOTE -   i=0 => *
      //         i=1 => * *
      //         i=2 => * * *
      //         i=3 => * * * *
     cout<<" * ";
    }
    cout << endl;
  }
  int n2 = 4;
  for (int i = 0; i < n2; i++){
    for (int j = 0; j < i + 1; j++){
      int num = i+1;
      cout << num << " ";
    }
    cout << endl;
  }
  int n3 = 5;
  for (int i = 0; i < n3;i++){
    for (int j = 0; j < i + 1;j++){
      char ch = i + 65;
      cout<<ch<<" ";
    }
    cout << endl;
  }
  int n4 = 4;
  for (int i = 0; i < n4; i++){
    for (int j = 1; j <= i + 1; j++){
      cout<<j<<" ";
    }
    cout << endl;
  }
  int n5 = 4;
  for (int i = 0; i < n5; i++){
    for (int j = i + 1; j > 0;j--){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  int num1 = 1;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < i+1; j++)
    {
      cout<< num1 <<" ";
      num1++;
    }
    cout << endl;
  }
  char cha1 = 'A';
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 1 + i;j++){
      cout << cha1 << " ";
      cha1++;
    }
    cout << endl;
  }
  //inverted triangle pattern
  for (int i = 0; i < n;i++){
    for (int j = 0; j < i; j++){
      cout << " "; //spaces
    }
    for (int j = 0; j < n - i; j++){
      cout << (1+i); //numbers
    }
    cout << endl;
  }
   

    return 0;
}